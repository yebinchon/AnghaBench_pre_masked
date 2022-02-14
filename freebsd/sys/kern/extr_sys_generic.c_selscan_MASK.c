
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int* td_retval; int td_ucred; TYPE_1__* td_proc; } ;
struct filedesc {int dummy; } ;
struct file {int dummy; } ;
typedef int fd_mask ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct file*,int,int ,struct thread*) ;
 int FUNC_2 (struct filedesc*,int,struct file**) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct thread*,void*) ;
 int FUNC_5 (int**,int,int) ;
 scalar_t__ FUNC_6 (int**,int**,int,int,int) ;

__attribute__((used)) static int
FUNC_7(struct thread *VAR_1, fd_mask **VAR_2, fd_mask **VAR_3, int VAR_4)
{
 struct filedesc *VAR_5;
 struct file *VAR_6;
 fd_mask VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_5 = VAR_1->td_proc->p_fd;
 VAR_12 = 0;
 for (VAR_13 = 0, VAR_11 = 0; VAR_11 < VAR_4; VAR_13++) {
  VAR_10 = FUNC_3(VAR_11 + VAR_0, VAR_4);
  for (VAR_7 = 1; VAR_11 < VAR_10; VAR_7 <<= 1, VAR_11++) {

   VAR_9 = FUNC_5(VAR_2, VAR_13, VAR_7);
   if (VAR_9 == 0)
    continue;
   VAR_14 = FUNC_2(VAR_5, VAR_11, &VAR_6);
   if (VAR_14)
    return (VAR_14);
   FUNC_4(VAR_1, (void *)(uintptr_t)VAR_11);
   VAR_8 = FUNC_1(VAR_6, VAR_9, VAR_1->td_ucred, VAR_1);
   FUNC_0(VAR_6, VAR_1);
   if (VAR_8 != 0)
    VAR_12 += FUNC_6(VAR_2, VAR_3, VAR_13, VAR_7, VAR_8);
  }
 }

 VAR_1->td_retval[0] = VAR_12;
 return (0);
}
