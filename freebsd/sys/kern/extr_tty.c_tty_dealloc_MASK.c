
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tty {int t_mtxobj; int * t_mtx; int t_outserwait; int t_dcdwait; int t_bgwait; int t_outwait; int t_inwait; TYPE_1__ t_outpoll; TYPE_1__ t_inpoll; int t_outq; int t_inq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct tty*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_1)
{
 struct tty *VAR_2 = VAR_1;
 FUNC_6(&VAR_2->t_inq);
 FUNC_7(&VAR_2->t_outq);
 FUNC_4(&VAR_2->t_inpoll);
 FUNC_4(&VAR_2->t_outpoll);
 FUNC_2(&VAR_2->t_inpoll.si_note);
 FUNC_2(&VAR_2->t_outpoll.si_note);

 FUNC_0(&VAR_2->t_inwait);
 FUNC_0(&VAR_2->t_outwait);
 FUNC_0(&VAR_2->t_bgwait);
 FUNC_0(&VAR_2->t_dcdwait);
 FUNC_0(&VAR_2->t_outserwait);

 if (VAR_2->t_mtx == &VAR_2->t_mtxobj)
  FUNC_3(&VAR_2->t_mtxobj);
 FUNC_5(VAR_2);
 FUNC_1(VAR_2, VAR_0);
}
