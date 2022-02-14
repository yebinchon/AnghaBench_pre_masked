
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct westwood {int reset_rtt_min; int first_ack; int snd_una; int rtt_win_sx; int rtt; int rtt_min; scalar_t__ cumul_ack; scalar_t__ accounted; scalar_t__ bw_est; scalar_t__ bw_ns_est; scalar_t__ bk; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int snd_una; } ;


 int VAR_0 ;
 struct westwood* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2)
{
 struct westwood *VAR_3 = FUNC_0(VAR_2);

 VAR_3->bk = 0;
 VAR_3->bw_ns_est = 0;
 VAR_3->bw_est = 0;
 VAR_3->accounted = 0;
 VAR_3->cumul_ack = 0;
 VAR_3->reset_rtt_min = 1;
 VAR_3->rtt_min = VAR_3->rtt = VAR_0;
 VAR_3->rtt_win_sx = VAR_1;
 VAR_3->snd_una = FUNC_1(VAR_2)->snd_una;
 VAR_3->first_ack = 1;
}
