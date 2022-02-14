
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_ioperm_args {int enable; int length; int start; } ;
struct i386_ioperm_args {int enable; int length; int start; } ;


 int FUNC_0 (struct thread*,struct i386_ioperm_args*) ;

int
FUNC_1(struct thread *VAR_0, struct linux_ioperm_args *VAR_1)
{
 int VAR_2;
 struct i386_ioperm_args VAR_3;

 VAR_3.start = VAR_1->start;
 VAR_3.length = VAR_1->length;
 VAR_3.enable = VAR_1->enable;
 VAR_2 = FUNC_0(VAR_0, &VAR_3);
 return (VAR_2);
}
