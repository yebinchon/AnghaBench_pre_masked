
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct linux_mprotect_args {int prot; int len; int addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct thread*,int ,int ,int ) ;

int
FUNC_2(struct thread *VAR_0, struct linux_mprotect_args *VAR_1)
{

 return (FUNC_1(VAR_0, FUNC_0(VAR_1->addr), VAR_1->len, VAR_1->prot));
}
