
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int* td_retval; TYPE_1__* td_proc; } ;
struct filedesc {int fd_refcnt; int fd_nfiles; TYPE_2__* fd_ofiles; } ;
typedef int register_t ;
struct TYPE_4__ {int * fde_file; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct thread*,int ,int ,int,int) ;
 int FUNC_3 (struct thread*,int ,char*,int ,int ,int ) ;

int
FUNC_4(struct thread *VAR_4)
{
 struct filedesc *VAR_5;
 register_t VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_5 = VAR_4->td_proc->p_fd;
 FUNC_0(VAR_5->fd_refcnt == 1, ("the fdtable should not be shared"));
 FUNC_1(VAR_5->fd_nfiles >= 3);
 VAR_9 = -1;
 for (VAR_7 = 0; VAR_7 <= 2; VAR_7++) {
  if (VAR_5->fd_ofiles[VAR_7].fde_file != ((void*)0))
   continue;

  VAR_6 = VAR_4->td_retval[0];
  if (VAR_9 != -1) {
   VAR_8 = FUNC_2(VAR_4, VAR_1, 0, VAR_9, VAR_7);
  } else {
   VAR_8 = FUNC_3(VAR_4, VAR_0, "/dev/null",
       VAR_3, VAR_2, 0);
   if (VAR_8 == 0) {
    VAR_9 = VAR_4->td_retval[0];
    FUNC_0(VAR_9 == VAR_7, ("we didn't get our fd"));
   }
  }
  VAR_4->td_retval[0] = VAR_6;
  if (VAR_8 != 0)
   return (VAR_8);
 }
 return (0);
}
