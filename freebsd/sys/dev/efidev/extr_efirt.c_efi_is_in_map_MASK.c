
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t vm_offset_t ;
struct efi_md {int md_attr; uintptr_t md_pages; scalar_t__ md_virt; } ;


 int VAR_0 ;
 uintptr_t VAR_1 ;
 struct efi_md* FUNC_0 (struct efi_md*,int) ;

__attribute__((used)) static bool
FUNC_1(struct efi_md *VAR_2, int VAR_3, int VAR_4, vm_offset_t VAR_5)
{
 struct efi_md *VAR_6;
 int VAR_7;

 for (VAR_7 = 0, VAR_6 = VAR_2; VAR_7 < VAR_3; VAR_7++, VAR_6 = FUNC_0(VAR_6,
     VAR_4)) {
  if ((VAR_6->md_attr & VAR_0) == 0)
   continue;

  if (VAR_5 >= (uintptr_t)VAR_6->md_virt &&
      VAR_5 < (uintptr_t)VAR_6->md_virt + VAR_6->md_pages * VAR_1)
   return (1);
 }

 return (0);
}
