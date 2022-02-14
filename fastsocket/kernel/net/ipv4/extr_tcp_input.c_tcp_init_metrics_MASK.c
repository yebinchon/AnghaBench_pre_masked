
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ snd_cwnd_clamp; scalar_t__ snd_ssthresh; scalar_t__ reordering; scalar_t__ srtt; scalar_t__ mdev; scalar_t__ mdev_max; scalar_t__ rttvar; int total_retrans; int snd_cwnd; int snd_cwnd_stamp; int snd_nxt; int rtt_seq; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {void* icsk_rto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 struct dst_entry* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct dst_entry*) ;
 scalar_t__ FUNC_2 (struct dst_entry*,int ) ;
 scalar_t__ FUNC_3 (struct dst_entry*,int ) ;
 scalar_t__ FUNC_4 (struct dst_entry*,int ) ;
 TYPE_1__* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct tcp_sock*) ;
 int FUNC_8 (struct tcp_sock*,struct dst_entry*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 struct tcp_sock* FUNC_11 (struct sock*) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_12(struct sock *VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_11(VAR_8);
 struct dst_entry *VAR_10 = FUNC_0(VAR_8);

 if (VAR_10 == ((void*)0))
  goto reset;

 FUNC_1(VAR_10);

 if (FUNC_3(VAR_10, VAR_0))
  VAR_9->snd_cwnd_clamp = FUNC_2(VAR_10, VAR_0);
 if (FUNC_2(VAR_10, VAR_4)) {
  VAR_9->snd_ssthresh = FUNC_2(VAR_10, VAR_4);
  if (VAR_9->snd_ssthresh > VAR_9->snd_cwnd_clamp)
   VAR_9->snd_ssthresh = VAR_9->snd_cwnd_clamp;
 } else {



  VAR_9->snd_ssthresh = VAR_5;
 }
 if (FUNC_2(VAR_10, VAR_1) &&
     VAR_9->reordering != FUNC_2(VAR_10, VAR_1)) {
  FUNC_7(VAR_9);
  VAR_9->reordering = FUNC_2(VAR_10, VAR_1);
 }

 if (FUNC_2(VAR_10, VAR_2) == 0 || VAR_9->srtt == 0)
  goto reset;
 if (FUNC_4(VAR_10, VAR_2) > VAR_9->srtt) {
  VAR_9->srtt = FUNC_4(VAR_10, VAR_2);
  VAR_9->rtt_seq = VAR_9->snd_nxt;
 }
 if (FUNC_4(VAR_10, VAR_3) > VAR_9->mdev) {
  VAR_9->mdev = FUNC_4(VAR_10, VAR_3);
  VAR_9->mdev_max = VAR_9->rttvar = FUNC_6(VAR_9->mdev, FUNC_9(VAR_8));
 }
 FUNC_10(VAR_8);
reset:
 if (VAR_9->srtt == 0) {






  VAR_9->mdev = VAR_9->mdev_max = VAR_9->rttvar = VAR_6;
  FUNC_5(VAR_8)->icsk_rto = VAR_6;
 }





 if (VAR_9->total_retrans > 1)
  VAR_9->snd_cwnd = 1;
 else
  VAR_9->snd_cwnd = FUNC_8(VAR_9, VAR_10);
 VAR_9->snd_cwnd_stamp = VAR_7;
}
