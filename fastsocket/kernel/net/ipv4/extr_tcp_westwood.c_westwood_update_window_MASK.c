
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct westwood {scalar_t__ rtt_win_sx; scalar_t__ bk; scalar_t__ rtt; scalar_t__ first_ack; int snd_una; } ;
struct sock {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {int snd_una; } ;


 int VAR_0 ;
 struct westwood* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct westwood*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_3)
{
 struct westwood *VAR_4 = FUNC_0(VAR_3);
 s32 VAR_5 = VAR_1 - VAR_4->rtt_win_sx;





 if (VAR_4->first_ack) {
  VAR_4->snd_una = FUNC_2(VAR_3)->snd_una;
  VAR_4->first_ack = 0;
 }
 if (VAR_4->rtt && VAR_5 > FUNC_1(VAR_2, VAR_4->rtt, VAR_0)) {
  FUNC_3(VAR_4, VAR_5);

  VAR_4->bk = 0;
  VAR_4->rtt_win_sx = VAR_1;
 }
}
