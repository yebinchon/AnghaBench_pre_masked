
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct file {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int,struct file*,struct uio*,int ,int ) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int *,struct file**) ;

int
FUNC_3(struct thread *VAR_1, int VAR_2, struct uio *VAR_3)
{
 struct file *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_0, &VAR_4);
 if (VAR_5)
  return (VAR_5);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3, (off_t)-1, 0);
 FUNC_1(VAR_4, VAR_1);
 return (VAR_5);
}
