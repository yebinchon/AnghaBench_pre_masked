
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct region {scalar_t__ addr; scalar_t__ size; int flags; } ;


 size_t VAR_0 ;
 struct region* VAR_1 ;
 size_t VAR_2 ;
 struct region* VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static size_t
FUNC_2(vm_paddr_t *VAR_4, uint32_t VAR_5, size_t VAR_6,
    long *VAR_7, long *VAR_8)
{
 size_t VAR_9, VAR_10, VAR_11;
 uint64_t VAR_12, VAR_13, VAR_14, VAR_15;
 long VAR_16, VAR_17;
 const struct region *VAR_18, *VAR_19;

 VAR_17 = 0;
 VAR_16 = 0;
 VAR_9 = 0;
 for (VAR_11 = 0, VAR_19 = VAR_3; VAR_11 < VAR_2; ++VAR_11, ++VAR_19) {
  VAR_13 = VAR_19->addr;
  VAR_12 = VAR_19->size + VAR_13;
  VAR_17 += FUNC_1((vm_offset_t)(VAR_12 - VAR_13));
  for (VAR_10 = 0, VAR_18 = VAR_1; VAR_10 < VAR_0; ++VAR_10, ++VAR_18) {




   if ((VAR_18->flags & VAR_5) == 0)
    continue;
   VAR_15 = VAR_18->addr;
   VAR_14 = VAR_18->size + VAR_15;




   if (VAR_14 <= VAR_13)
    continue;




   if (VAR_15 >= VAR_12)
    break;




   if ((VAR_13 >= VAR_15) && (VAR_12 <= VAR_14)) {
    VAR_13 = VAR_14;
    VAR_12 = VAR_14;
    break;
   }
   if ((VAR_15 > VAR_13) && (VAR_14 < VAR_12)) {
    if (VAR_9 > 0 &&
        VAR_4[VAR_9 - 1] == (vm_paddr_t)VAR_13) {
     VAR_4[VAR_9 - 1] = (vm_paddr_t)VAR_15;
    } else {
     VAR_4[VAR_9++] = (vm_paddr_t)VAR_13;
     VAR_4[VAR_9++] = (vm_paddr_t)VAR_15;
    }
    VAR_16 +=
        FUNC_1((vm_offset_t)(VAR_15 - VAR_13));
    VAR_13 = VAR_14;
    continue;
   }





   if (VAR_15 <= VAR_13)
    VAR_13 = VAR_14;
   else
    VAR_12 = VAR_15;
  }




  if (VAR_12 > VAR_13) {
   if (VAR_9 > 0 && VAR_4[VAR_9 - 1] == (vm_paddr_t)VAR_13) {
    VAR_4[VAR_9 - 1] = (vm_paddr_t)VAR_12;
   } else {
    VAR_4[VAR_9++] = (vm_paddr_t)VAR_13;
    VAR_4[VAR_9++] = (vm_paddr_t)VAR_12;
   }
   VAR_16 += FUNC_1((vm_offset_t)(VAR_12 - VAR_13));
  }
  if (VAR_9 >= VAR_6)
   FUNC_0("Not enough space in the dump/phys_avail arrays");
 }

 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_16;
 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_17;
 return (VAR_9);
}
