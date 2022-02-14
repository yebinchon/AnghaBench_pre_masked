
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_reloc {int r_symndx; int r_type; int r_offset; scalar_t__ r_extern; scalar_t__ r_size; int r_vaddr; } ;
typedef int bfd ;
struct TYPE_2__ {int r_type; int r_symndx; int r_vaddr; } ;
typedef TYPE_1__ RELOC ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;



__attribute__((used)) static void
FUNC_3 (bfd * VAR_0, void * VAR_1, void * VAR_2)
{
  static struct internal_reloc VAR_3;
  RELOC *VAR_4 = (RELOC *) VAR_1;
  struct internal_reloc *VAR_5 = (struct internal_reloc *) VAR_2;

  VAR_5->r_vaddr = FUNC_1 (VAR_0, VAR_4->r_vaddr);
  VAR_5->r_symndx = FUNC_2 (VAR_0, VAR_4->r_symndx);
  VAR_5->r_type = FUNC_0 (VAR_0, VAR_4->r_type);
  VAR_5->r_size = 0;
  VAR_5->r_extern = 0;
  VAR_5->r_offset = 0;

  switch (VAR_5->r_type)
  {
  case 128:
    VAR_3 = *VAR_5;
    break;
  case 129:
    VAR_5->r_offset = VAR_5->r_symndx;
    if (VAR_5->r_offset & 0x8000)
      VAR_5->r_offset -= 0x10000;
    VAR_5->r_symndx = VAR_3.r_symndx;
    break;
  }
}
