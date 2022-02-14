
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef size_t uint64_t ;


 size_t FUNC_0 (void*,int ,size_t) ;

void
FUNC_1(void *VAR_0, vm_paddr_t VAR_1, size_t VAR_2)
{
 uint64_t VAR_3, VAR_4;

 VAR_4 = VAR_2;

 while (VAR_4 > 0) {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_4);
  VAR_1 += VAR_3;
  VAR_4 -= VAR_3;
 }
}
