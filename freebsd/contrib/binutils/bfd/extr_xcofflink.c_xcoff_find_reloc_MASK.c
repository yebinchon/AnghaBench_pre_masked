
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_reloc {scalar_t__ r_vaddr; } ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_size_type ;



__attribute__((used)) static bfd_size_type
FUNC_0 (struct internal_reloc *VAR_0,
    bfd_size_type VAR_1,
    bfd_vma VAR_2)
{
  bfd_size_type VAR_3, VAR_4, VAR_5;

  if (VAR_1 < 2)
    {
      if (VAR_1 == 1 && VAR_0[0].r_vaddr < VAR_2)
 return 1;
      else
 return 0;
    }

  VAR_3 = 0;
  VAR_4 = VAR_1;


  while (VAR_3 + 1 < VAR_4)
    {
      bfd_vma VAR_6;

      VAR_5 = (VAR_4 + VAR_3) / 2;
      VAR_6 = VAR_0[VAR_5].r_vaddr;
      if (VAR_6 > VAR_2)
 VAR_4 = VAR_5;
      else if (VAR_6 < VAR_2)
 VAR_3 = VAR_5;
      else
 {
   VAR_3 = VAR_5;
   break;
 }
    }

  if (VAR_0[VAR_3].r_vaddr < VAR_2)
    return VAR_3 + 1;

  while (VAR_3 > 0
  && VAR_0[VAR_3 - 1].r_vaddr == VAR_2)
    --VAR_3;

  return VAR_3;
}
