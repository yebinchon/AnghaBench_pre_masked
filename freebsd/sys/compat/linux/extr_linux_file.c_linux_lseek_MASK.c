
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_lseek_args {int whence; int off; int fdes; } ;


 int FUNC_0 (struct thread*,int ,int ,int ) ;

int
FUNC_1(struct thread *VAR_0, struct linux_lseek_args *VAR_1)
{

 return (FUNC_0(VAR_0, VAR_1->fdes, VAR_1->off, VAR_1->whence));
}
