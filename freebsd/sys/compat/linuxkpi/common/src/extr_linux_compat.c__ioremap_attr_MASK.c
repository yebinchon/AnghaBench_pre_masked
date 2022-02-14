
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;


 void* FUNC_0 (int ,unsigned long,int) ;
 int FUNC_1 (void*,unsigned long) ;

void *
FUNC_2(vm_paddr_t VAR_0, unsigned long VAR_1, int VAR_2)
{
 void *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 FUNC_1(VAR_3, VAR_1);

 return (VAR_3);
}
