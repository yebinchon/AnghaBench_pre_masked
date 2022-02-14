
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct file {scalar_t__ f_type; } ;
typedef int pid_t ;
typedef int cap_rights_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct thread*) ;
 int FUNC_1 (struct thread*,int,int *,struct file**) ;
 int FUNC_2 (struct file*) ;

int
FUNC_3(struct thread *VAR_2, int VAR_3, cap_rights_t *VAR_4, pid_t *VAR_5)
{
 struct file *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_6);
 if (VAR_7)
  return (VAR_7);
 if (VAR_6->f_type != VAR_0) {
  VAR_7 = VAR_1;
  goto out;
 }
 *VAR_5 = FUNC_2(VAR_6);
out:
 FUNC_0(VAR_6, VAR_2);
 return (VAR_7);
}
