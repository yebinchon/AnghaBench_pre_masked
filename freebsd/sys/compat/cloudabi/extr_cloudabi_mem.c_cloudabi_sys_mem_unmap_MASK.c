
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct cloudabi_sys_mem_unmap_args {int mapping_len; scalar_t__ mapping; } ;


 int FUNC_0 (struct thread*,uintptr_t,int ) ;

int
FUNC_1(struct thread *VAR_0,
    struct cloudabi_sys_mem_unmap_args *VAR_1)
{

 return (FUNC_0(VAR_0, (uintptr_t)VAR_1->mapping, VAR_1->mapping_len));
}
