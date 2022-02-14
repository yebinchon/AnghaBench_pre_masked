
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct proc {struct filedesc* p_fd; } ;
struct filedesc {int fd_freefile; int fd_nfiles; TYPE_1__* fd_ofiles; } ;
struct TYPE_2__ {int * fde_file; } ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (struct filedesc*,int,int) ;
 int FUNC_4 (struct filedesc*,int) ;
 int FUNC_5 (struct filedesc*,int) ;
 int FUNC_6 (struct filedesc*,int) ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (struct proc*,int ,int) ;

int
FUNC_10(struct thread *VAR_2, int VAR_3, int *VAR_4)
{
 struct proc *VAR_5 = VAR_2->td_proc;
 struct filedesc *VAR_6 = VAR_5->p_fd;
 int VAR_7, VAR_8, VAR_9;




 FUNC_0(VAR_6);

 if (VAR_6->fd_freefile > VAR_3)
  VAR_3 = VAR_6->fd_freefile;

 VAR_8 = FUNC_7(VAR_2);





 VAR_7 = FUNC_3(VAR_6, VAR_3, VAR_6->fd_nfiles);
 if (VAR_7 >= VAR_8)
  return (VAR_0);
 if (VAR_7 >= VAR_6->fd_nfiles) {
  VAR_9 = FUNC_8(VAR_7 * 2, VAR_8);
  FUNC_4(VAR_6, VAR_9);
 }





 FUNC_1(VAR_7 >= 0 && VAR_7 < FUNC_8(VAR_8, VAR_6->fd_nfiles),
     ("invalid descriptor %d", VAR_7));
 FUNC_1(!FUNC_5(VAR_6, VAR_7),
     ("fd_first_free() returned non-free descriptor"));
 FUNC_1(VAR_6->fd_ofiles[VAR_7].fde_file == ((void*)0),
     ("file descriptor isn't free"));
 FUNC_6(VAR_6, VAR_7);
 *VAR_4 = VAR_7;
 return (0);
}
