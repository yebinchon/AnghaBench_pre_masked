
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_reloc {int r_type; int r_offset; int r_symndx; int r_vaddr; } ;
struct external_reloc {int r_type; int r_symndx; int r_vaddr; } ;
typedef int bfd_vma ;
typedef int bfd ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;


 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int
FUNC_2 (bfd * VAR_2, void * VAR_3, void * VAR_4)
{
  static int VAR_5 = 1;
  static bfd_vma VAR_6 = 0;
  struct internal_reloc *VAR_7 = (struct internal_reloc *)VAR_3;
  struct external_reloc *VAR_8 = (struct external_reloc *)VAR_4;

  switch (VAR_7->r_type)
    {
    case 129:
      VAR_6 = VAR_7->r_vaddr;
      VAR_5 = VAR_7->r_offset;
      break;
    case 128:
      if (VAR_7->r_vaddr == VAR_6)
 {




   FUNC_1 (VAR_2, VAR_7->r_vaddr, VAR_8->r_vaddr);
   FUNC_1 (VAR_2, VAR_7->r_symndx, VAR_8->r_symndx);
   FUNC_0 (VAR_2, VAR_0, VAR_8->r_type);
   return VAR_1;
 }
      break;
    }

  FUNC_1 (VAR_2, VAR_7->r_vaddr, VAR_8->r_vaddr);
  FUNC_1 (VAR_2, VAR_7->r_symndx, VAR_8->r_symndx);

  FUNC_0 (VAR_2, VAR_7->r_type, VAR_8->r_type);
  return VAR_1;
}
