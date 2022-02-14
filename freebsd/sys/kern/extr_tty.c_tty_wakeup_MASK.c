
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int si_note; } ;
struct tty {int t_flags; TYPE_1__ t_inpoll; int t_inwait; TYPE_1__ t_outpoll; int t_outwait; int * t_session; int * t_sigio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(struct tty *VAR_4, int VAR_5)
{

 if (VAR_4->t_flags & VAR_3 && VAR_4->t_sigio != ((void*)0))
  FUNC_2(&VAR_4->t_sigio, VAR_2, (VAR_4->t_session != ((void*)0)));

 if (VAR_5 & VAR_1) {
  FUNC_1(&VAR_4->t_outwait);
  FUNC_3(&VAR_4->t_outpoll);
  FUNC_0(&VAR_4->t_outpoll.si_note, 0);
 }
 if (VAR_5 & VAR_0) {
  FUNC_1(&VAR_4->t_inwait);
  FUNC_3(&VAR_4->t_inpoll);
  FUNC_0(&VAR_4->t_inpoll.si_note, 0);
 }
}
