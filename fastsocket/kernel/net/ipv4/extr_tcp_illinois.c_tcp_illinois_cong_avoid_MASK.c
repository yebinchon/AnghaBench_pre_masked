
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; int snd_cwnd_cnt; scalar_t__ snd_cwnd_clamp; } ;
struct sock {int dummy; } ;
struct illinois {int acked; int alpha; int end_seq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 struct illinois* FUNC_1 (struct sock*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct sock*,int) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_4(VAR_1);
 struct illinois *VAR_5 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_2, VAR_5->end_seq))
  FUNC_6(VAR_1);


 if (!FUNC_3(VAR_1, VAR_3))
  return;


 if (VAR_4->snd_cwnd <= VAR_4->snd_ssthresh)
  FUNC_5(VAR_4);

 else {
  u32 VAR_6;


  VAR_4->snd_cwnd_cnt += VAR_5->acked;
  VAR_5->acked = 1;




  VAR_6 = (VAR_4->snd_cwnd_cnt * VAR_5->alpha) >> VAR_0;
  if (VAR_6 >= VAR_4->snd_cwnd) {
   VAR_4->snd_cwnd = FUNC_2(VAR_4->snd_cwnd + VAR_6 / VAR_4->snd_cwnd,
        (u32) VAR_4->snd_cwnd_clamp);
   VAR_4->snd_cwnd_cnt = 0;
  }
 }
}
