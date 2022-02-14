
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {void* lsndtime; int snd_cwnd; scalar_t__ snd_cwnd_used; void* snd_cwnd_stamp; int snd_ssthresh; } ;
struct sock {int dummy; } ;
struct dst_entry {int dummy; } ;
typedef void* s32 ;
struct TYPE_2__ {scalar_t__ icsk_rto; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*,struct dst_entry*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 void* VAR_1 ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, struct dst_entry *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_6(VAR_2);
 s32 VAR_5 = VAR_1 - VAR_4->lsndtime;
 u32 VAR_6 = FUNC_5(VAR_4, VAR_3);
 u32 VAR_7 = VAR_4->snd_cwnd;

 FUNC_3(VAR_2, VAR_0);

 VAR_4->snd_ssthresh = FUNC_4(VAR_2);
 VAR_6 = FUNC_2(VAR_6, VAR_7);

 while ((VAR_5 -= FUNC_0(VAR_2)->icsk_rto) > 0 && VAR_7 > VAR_6)
  VAR_7 >>= 1;
 VAR_4->snd_cwnd = FUNC_1(VAR_7, VAR_6);
 VAR_4->snd_cwnd_stamp = VAR_1;
 VAR_4->snd_cwnd_used = 0;
}
