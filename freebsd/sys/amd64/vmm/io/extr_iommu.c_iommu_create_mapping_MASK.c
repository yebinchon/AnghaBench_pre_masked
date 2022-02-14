
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef size_t uint64_t ;


 size_t FUNC_0 (void*,int ,int ,size_t) ;

void
FUNC_1(void *VAR_0, vm_paddr_t VAR_1, vm_paddr_t VAR_2, size_t VAR_3)
{
 uint64_t VAR_4, VAR_5;

 VAR_5 = VAR_3;

 while (VAR_5 > 0) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5);
  VAR_1 += VAR_4;
  VAR_2 += VAR_4;
  VAR_5 -= VAR_4;
 }
}
