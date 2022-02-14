
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int * vm_object_t ;
struct vm {int vmspace; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,size_t,int ) ;

int
FUNC_1(struct vm *VAR_1, vm_paddr_t VAR_2, size_t VAR_3, vm_paddr_t VAR_4)
{
 vm_object_t VAR_5;

 if ((VAR_5 = FUNC_0(VAR_1->vmspace, VAR_2, VAR_3, VAR_4)) == ((void*)0))
  return (VAR_0);
 else
  return (0);
}
