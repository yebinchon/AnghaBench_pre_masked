
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {TYPE_1__* t_session; int t_flags; } ;
struct proc {int dummy; } ;
struct TYPE_2__ {struct proc* s_leader; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_2 ;
 int FUNC_3 (struct proc*,int) ;
 int FUNC_4 (struct tty*,int ) ;

void
FUNC_5(struct tty *VAR_3, int VAR_4)
{
 struct proc *VAR_5;

 FUNC_4(VAR_3, VAR_0);
 FUNC_0(VAR_4 >= 1 && VAR_4 < VAR_1);


 VAR_3->t_flags &= ~VAR_2;

 if (VAR_3->t_session != ((void*)0) && VAR_3->t_session->s_leader != ((void*)0)) {
  VAR_5 = VAR_3->t_session->s_leader;
  FUNC_1(VAR_5);
  FUNC_3(VAR_5, VAR_4);
  FUNC_2(VAR_5);
 }
}
