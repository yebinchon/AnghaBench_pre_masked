
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct vm {void* iommu; struct mem_map* mem_maps; } ;
struct mem_map {int flags; scalar_t__ gpa; scalar_t__ len; } ;


 scalar_t__ FUNC_0 (uintptr_t) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*,scalar_t__,scalar_t__,int) ;
 void* FUNC_3 () ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,scalar_t__,int) ;
 int FUNC_6 (struct vm*,struct mem_map*) ;
 void* FUNC_7 (struct vm*,int,scalar_t__,int,int ,void**) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct vm*) ;

__attribute__((used)) static void
FUNC_10(struct vm *VAR_5, bool VAR_6)
{
 int VAR_7, VAR_8;
 vm_paddr_t VAR_9, VAR_10;
 struct mem_map *VAR_11;
 void *VAR_12, *VAR_13, *VAR_14;

 VAR_8 = VAR_0;
 VAR_14 = FUNC_3();

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_11 = &VAR_5->mem_maps[VAR_7];
  if (!FUNC_6(VAR_5, VAR_11))
   continue;

  if (VAR_6) {
   FUNC_1((VAR_11->flags & VAR_2) == 0,
       ("iommu map found invalid memmap %#lx/%#lx/%#x",
       VAR_11->gpa, VAR_11->len, VAR_11->flags));
   if ((VAR_11->flags & VAR_3) == 0)
    continue;
   VAR_11->flags |= VAR_2;
  } else {
   if ((VAR_11->flags & VAR_2) == 0)
    continue;
   VAR_11->flags &= ~VAR_2;
   FUNC_1((VAR_11->flags & VAR_3) != 0,
       ("iommu unmap found invalid memmap %#lx/%#lx/%#x",
       VAR_11->gpa, VAR_11->len, VAR_11->flags));
  }

  VAR_9 = VAR_11->gpa;
  while (VAR_9 < VAR_11->gpa + VAR_11->len) {
   VAR_12 = FUNC_7(VAR_5, -1, VAR_9, VAR_0, VAR_4,
      &VAR_13);
   FUNC_1(VAR_12 != ((void*)0), ("vm(%s) could not map gpa %#lx",
       FUNC_9(VAR_5), VAR_9));

   FUNC_8(VAR_13);

   VAR_10 = FUNC_0((uintptr_t)VAR_12);
   if (VAR_6) {
    FUNC_2(VAR_5->iommu, VAR_9, VAR_10, VAR_8);
    FUNC_5(VAR_14, VAR_10, VAR_8);
   } else {
    FUNC_5(VAR_5->iommu, VAR_9, VAR_8);
    FUNC_2(VAR_14, VAR_10, VAR_10, VAR_8);
   }

   VAR_9 += VAR_0;
  }
 }





 if (VAR_6)
  FUNC_4(VAR_14);
 else
  FUNC_4(VAR_5->iommu);
}
