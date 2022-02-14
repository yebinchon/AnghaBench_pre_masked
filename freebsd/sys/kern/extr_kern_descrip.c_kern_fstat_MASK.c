
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; int td_proc; } ;
struct stat {scalar_t__ st_btim_ext; scalar_t__ st_ctim_ext; scalar_t__ st_mtim_ext; scalar_t__ st_atim_ext; } ;
struct file {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct file*) ;
 scalar_t__ FUNC_2 (struct thread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct file*,struct thread*) ;
 int FUNC_4 (struct thread*,int,int *,struct file**) ;
 int FUNC_5 (struct file*,struct stat*,int ,struct thread*) ;
 int FUNC_6 (struct stat*) ;

int
FUNC_7(struct thread *VAR_2, int VAR_3, struct stat *VAR_4)
{
 struct file *VAR_5;
 int VAR_6;

 FUNC_0(VAR_3);

 VAR_6 = FUNC_4(VAR_2, VAR_3, &VAR_1, &VAR_5);
 if (VAR_6 != 0)
  return (VAR_6);

 FUNC_1(VAR_2->td_proc, VAR_5);

 VAR_6 = FUNC_5(VAR_5, VAR_4, VAR_2->td_ucred, VAR_2);
 FUNC_3(VAR_5, VAR_2);
 return (VAR_6);
}
