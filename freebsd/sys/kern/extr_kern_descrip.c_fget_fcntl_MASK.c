
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;
typedef int seqc_t ;
typedef int cap_rights_t ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct filedesc*,int,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct filedesc*,int,int ) ;
 int FUNC_4 (struct file*,struct thread*) ;
 int FUNC_5 (struct filedesc*,int,int *,struct file**,int *) ;

int
FUNC_6(struct thread *VAR_1, int VAR_2, cap_rights_t *VAR_3, int VAR_4,
    struct file **VAR_5)
{
 struct filedesc *VAR_6 = VAR_1->td_proc->p_fd;

 return (FUNC_5(VAR_6, VAR_2, VAR_3, VAR_5, ((void*)0)));
}
