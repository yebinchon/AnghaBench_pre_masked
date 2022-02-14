
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_2__* td_proc; } ;
struct filedesc {int fd_lastfile; TYPE_1__* fd_ofiles; } ;
struct closefrom_args {int lowfd; } ;
struct TYPE_4__ {struct filedesc* p_fd; } ;
struct TYPE_3__ {int * fde_file; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*) ;
 int FUNC_3 (struct thread*,int) ;

int
FUNC_4(struct thread *VAR_0, struct closefrom_args *VAR_1)
{
 struct filedesc *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->td_proc->p_fd;
 FUNC_0(VAR_1->lowfd);





 if (VAR_1->lowfd < 0)
  VAR_1->lowfd = 0;
 FUNC_1(VAR_2);
 for (VAR_3 = VAR_1->lowfd; VAR_3 <= VAR_2->fd_lastfile; VAR_3++) {
  if (VAR_2->fd_ofiles[VAR_3].fde_file != ((void*)0)) {
   FUNC_2(VAR_2);
   (void)FUNC_3(VAR_0, VAR_3);
   FUNC_1(VAR_2);
  }
 }
 FUNC_2(VAR_2);
 return (0);
}
