
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_paddr_t ;
struct vmctx {size_t lowmem; void* baseaddr; int highmem; } ;


 int VAR_0 ;

void *
FUNC_0(struct vmctx *VAR_1, vm_paddr_t VAR_2, size_t VAR_3)
{

 if (VAR_1->lowmem > 0) {
  if (VAR_2 < VAR_1->lowmem && VAR_3 <= VAR_1->lowmem &&
      VAR_2 + VAR_3 <= VAR_1->lowmem)
   return (VAR_1->baseaddr + VAR_2);
 }

 if (VAR_1->highmem > 0) {
                if (VAR_2 >= 4*VAR_0) {
   if (VAR_2 < 4*VAR_0 + VAR_1->highmem &&
       VAR_3 <= VAR_1->highmem &&
       VAR_2 + VAR_3 <= 4*VAR_0 + VAR_1->highmem)
    return (VAR_1->baseaddr + VAR_2);
  }
 }

 return (((void*)0));
}
