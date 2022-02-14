
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {TYPE_2__* fd_ofiles; } ;
struct filecaps {int dummy; } ;
struct file {int dummy; } ;
typedef int seqc_t ;
typedef int cap_rights_t ;
struct TYPE_4__ {int fde_caps; } ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct filedesc*) ;
 int FUNC_1 (struct filedesc*) ;
 int FUNC_2 (struct filedesc*,int,int ) ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct filedesc*,int,int *,struct file**,struct filecaps*) ;
 int FUNC_5 (struct filedesc*,int,int *,struct file**,int *) ;
 int FUNC_6 (struct file*) ;
 int FUNC_7 (int *,struct filecaps*,int) ;
 int FUNC_8 (struct filecaps*) ;

int
FUNC_9(struct thread *VAR_1, int VAR_2, cap_rights_t *VAR_3,
    struct file **VAR_4, struct filecaps *VAR_5)
{
 struct filedesc *VAR_6 = VAR_1->td_proc->p_fd;
 int VAR_7;

 VAR_7 = FUNC_5(VAR_6, VAR_2, VAR_3, VAR_4, ((void*)0));
 if (VAR_7 == 0 && VAR_5 != ((void*)0))
  FUNC_8(VAR_5);
 return (VAR_7);
}
