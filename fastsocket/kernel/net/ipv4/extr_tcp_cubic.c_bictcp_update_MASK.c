
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct bictcp {int ack_cnt; scalar_t__ last_cwnd; int last_time; scalar_t__ epoch_start; scalar_t__ tcp_cwnd; scalar_t__ last_max_cwnd; scalar_t__ bic_K; scalar_t__ bic_origin_point; int delay_min; int cnt; int delayed_ack; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline void FUNC_2(struct bictcp *VAR_8, u32 VAR_9)
{
 u64 VAR_10;
 u32 VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_8->ack_cnt++;

 if (VAR_8->last_cwnd == VAR_9 &&
     (s32)(VAR_7 - VAR_8->last_time) <= VAR_2 / 32)
  return;

 VAR_8->last_cwnd = VAR_9;
 VAR_8->last_time = VAR_7;

 if (VAR_8->epoch_start == 0) {
  VAR_8->epoch_start = VAR_7;
  VAR_8->ack_cnt = 1;
  VAR_8->tcp_cwnd = VAR_9;

  if (VAR_8->last_max_cwnd <= VAR_9) {
   VAR_8->bic_K = 0;
   VAR_8->bic_origin_point = VAR_9;
  } else {



   VAR_8->bic_K = FUNC_0(VAR_4
            * (VAR_8->last_max_cwnd - VAR_9));
   VAR_8->bic_origin_point = VAR_8->last_max_cwnd;
  }
 }
 VAR_12 = ((VAR_7 + FUNC_1(VAR_8->delay_min>>3)
       - VAR_8->epoch_start) << VAR_1) / VAR_2;

 if (VAR_12 < VAR_8->bic_K)
  VAR_10 = VAR_8->bic_K - VAR_12;
 else
  VAR_10 = VAR_12 - VAR_8->bic_K;


 VAR_11 = (VAR_5 * VAR_10 * VAR_10 * VAR_10) >> (10+3*VAR_1);
 if (VAR_12 < VAR_8->bic_K)
  VAR_13 = VAR_8->bic_origin_point - VAR_11;
 else
  VAR_13 = VAR_8->bic_origin_point + VAR_11;


 if (VAR_13 > VAR_9) {
  VAR_8->cnt = VAR_9 / (VAR_13 - VAR_9);
 } else {
  VAR_8->cnt = 100 * VAR_9;
 }





 if (VAR_8->last_max_cwnd == 0 && VAR_8->cnt > 20)
  VAR_8->cnt = 20;


 if (VAR_6) {
  u32 VAR_15 = VAR_3;
  VAR_11 = (VAR_9 * VAR_15) >> 3;
  while (VAR_8->ack_cnt > VAR_11) {
   VAR_8->ack_cnt -= VAR_11;
   VAR_8->tcp_cwnd++;
  }

  if (VAR_8->tcp_cwnd > VAR_9){
   VAR_11 = VAR_8->tcp_cwnd - VAR_9;
   VAR_14 = VAR_9 / VAR_11;
   if (VAR_8->cnt > VAR_14)
    VAR_8->cnt = VAR_14;
  }
 }

 VAR_8->cnt = (VAR_8->cnt << VAR_0) / VAR_8->delayed_ack;
 if (VAR_8->cnt == 0)
  VAR_8->cnt = 1;
}
