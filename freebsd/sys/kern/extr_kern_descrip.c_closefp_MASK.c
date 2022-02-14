
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {scalar_t__ fd_holdleaderscount; scalar_t__ fd_holdleaderswakeup; int fd_kqlist; } ;
struct file {scalar_t__ f_type; } ;
struct TYPE_2__ {int * p_fdtol; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct file*,struct thread*) ;
 int FUNC_6 (struct thread*,int) ;
 int FUNC_7 (struct thread*,int,struct file*) ;
 int FUNC_8 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_9(struct filedesc *VAR_1, int VAR_2, struct file *VAR_3, struct thread *VAR_4,
    int VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_1);

 if (VAR_5) {
  if (VAR_4->td_proc->p_fdtol != ((void*)0)) {




   VAR_1->fd_holdleaderscount++;
  } else {
   VAR_5 = 0;
  }
 }







 if (FUNC_4(!FUNC_3(&VAR_1->fd_kqlist)))
  FUNC_6(VAR_4, VAR_2);




 if (FUNC_4(VAR_3->f_type == VAR_0))
  FUNC_7(VAR_4, VAR_2, VAR_3);
 FUNC_2(VAR_1);

 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_1);
  VAR_1->fd_holdleaderscount--;
  if (VAR_1->fd_holdleaderscount == 0 &&
      VAR_1->fd_holdleaderswakeup != 0) {
   VAR_1->fd_holdleaderswakeup = 0;
   FUNC_8(&VAR_1->fd_holdleaderscount);
  }
  FUNC_2(VAR_1);
 }
 return (VAR_6);
}
