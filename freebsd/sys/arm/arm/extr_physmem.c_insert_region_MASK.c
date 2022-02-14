
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ uint32_t ;
struct region {scalar_t__ addr; scalar_t__ size; scalar_t__ flags; } ;


 int FUNC_0 (struct region*,struct region*,int) ;

__attribute__((used)) static size_t
FUNC_1(struct region *VAR_0, size_t VAR_1, vm_paddr_t VAR_2,
    vm_size_t VAR_3, uint32_t VAR_4)
{
 size_t VAR_5;
 struct region *VAR_6, *VAR_7;

 VAR_6 = VAR_0 + VAR_1;
 for (VAR_5 = 0, VAR_7 = VAR_0; VAR_5 < VAR_1; ++VAR_5, ++VAR_7) {
  if (VAR_7->addr == VAR_2 && VAR_7->size == VAR_3)
   return (VAR_1);
  if (VAR_4 == VAR_7->flags) {
   if (VAR_2 + VAR_3 == VAR_7->addr) {
    VAR_7->addr = VAR_2;
    VAR_7->size += VAR_3;
    return (VAR_1);
   } else if (VAR_7->addr + VAR_7->size == VAR_2) {
    VAR_7->size += VAR_3;
    return (VAR_1);
   }
  }
  if (VAR_2 < VAR_7->addr) {
   FUNC_0(VAR_7, VAR_7 + 1, (VAR_6 - VAR_7) * sizeof(*VAR_7));
   break;
  }
 }
 VAR_7->addr = VAR_2;
 VAR_7->size = VAR_3;
 VAR_7->flags = VAR_4;
 VAR_1++;

 return (VAR_1);
}
