
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; int td_proc; } ;
struct file {int f_flag; } ;
typedef int off_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct file*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct file*,struct thread*) ;
 int FUNC_3 (struct thread*,int,int *,struct file**) ;
 int FUNC_4 (struct file*,int ,int ,struct thread*) ;

int
FUNC_5(struct thread *VAR_3, int VAR_4, off_t VAR_5)
{
 struct file *VAR_6;
 int VAR_7;

 FUNC_0(VAR_4);
 if (VAR_5 < 0)
  return (VAR_0);
 VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_2, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 FUNC_1(VAR_3->td_proc, VAR_6);
 if (!(VAR_6->f_flag & VAR_1)) {
  FUNC_2(VAR_6, VAR_3);
  return (VAR_0);
 }
 VAR_7 = FUNC_4(VAR_6, VAR_5, VAR_3->td_ucred, VAR_3);
 FUNC_2(VAR_6, VAR_3);
 return (VAR_7);
}
