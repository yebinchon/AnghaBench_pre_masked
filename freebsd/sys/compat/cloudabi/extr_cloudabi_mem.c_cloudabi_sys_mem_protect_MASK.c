
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_mem_protect_args {int mapping_len; scalar_t__ mapping; int prot; } ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct thread*,uintptr_t,int ,int) ;

int
FUNC_2(struct thread *VAR_0,
    struct cloudabi_sys_mem_protect_args *VAR_1)
{
 int VAR_2, VAR_3;


 VAR_2 = FUNC_0(VAR_1->prot, &VAR_3);
 if (VAR_2 != 0)
  return (VAR_2);

 return (FUNC_1(VAR_0, (uintptr_t)VAR_1->mapping, VAR_1->mapping_len,
     VAR_3));
}
