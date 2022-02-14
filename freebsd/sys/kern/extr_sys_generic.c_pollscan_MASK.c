
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct thread {int* td_retval; int td_ucred; TYPE_1__* td_proc; } ;
struct pollfd {size_t fd; int revents; int events; } ;
struct filedesc {size_t fd_lastfile; TYPE_2__* fd_ofiles; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct file* fde_file; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct filedesc*,size_t) ;
 int FUNC_4 (struct file*,int ,int ,struct thread*) ;
 int FUNC_5 (struct thread*,struct pollfd*) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_4, struct pollfd *VAR_5, u_int VAR_6)
{
 struct filedesc *VAR_7 = VAR_4->td_proc->p_fd;
 struct file *VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_0(VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++, VAR_5++) {
  if (VAR_5->fd > VAR_7->fd_lastfile) {
   VAR_5->revents = VAR_1;
   VAR_10++;
  } else if (VAR_5->fd < 0) {
   VAR_5->revents = 0;
  } else {
   VAR_8 = VAR_7->fd_ofiles[VAR_5->fd].fde_file;




   if (VAR_8 == ((void*)0))

   {
    VAR_5->revents = VAR_1;
    VAR_10++;
   } else {




    FUNC_5(VAR_4, VAR_5);
    VAR_5->revents = FUNC_4(VAR_8, VAR_5->events,
        VAR_4->td_ucred, VAR_4);




    if ((VAR_5->revents & VAR_0) != 0)
     VAR_5->revents &= ~VAR_2;

    if (VAR_5->revents != 0)
     VAR_10++;
   }
  }
 }
 FUNC_1(VAR_7);
 VAR_4->td_retval[0] = VAR_10;
 return (0);
}
