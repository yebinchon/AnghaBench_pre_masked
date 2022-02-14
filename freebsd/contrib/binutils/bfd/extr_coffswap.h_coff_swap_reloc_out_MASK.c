
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_reloc {int r_offset; int r_type; int r_symndx; int r_vaddr; } ;
struct external_reloc {int r_offset; int r_type; int r_symndx; int r_vaddr; } ;
typedef int bfd ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,struct internal_reloc*,struct external_reloc*) ;
 int FUNC_4 (int *,int ,int ) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static unsigned int
FUNC_6 (bfd * VAR_0, void * VAR_1, void * VAR_2)
{
  struct internal_reloc *VAR_3 = (struct internal_reloc *) VAR_1;
  struct external_reloc *VAR_4 = (struct external_reloc *) VAR_2;

  FUNC_2 (VAR_0, VAR_3->r_vaddr, VAR_4->r_vaddr);
  FUNC_1 (VAR_0, VAR_3->r_symndx, VAR_4->r_symndx);
  FUNC_0 (VAR_0, VAR_3->r_type, VAR_4->r_type);
  return FUNC_5 (VAR_0);
}
