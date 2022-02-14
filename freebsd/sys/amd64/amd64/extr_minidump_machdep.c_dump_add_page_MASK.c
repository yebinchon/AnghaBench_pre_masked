
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int * VAR_1 ;

void
FUNC_1(vm_paddr_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2 >>= VAR_0;
 VAR_3 = VAR_2 >> 6;
 VAR_4 = VAR_2 & 63;
 FUNC_0(&VAR_1[VAR_3], 1ul << VAR_4);
}
