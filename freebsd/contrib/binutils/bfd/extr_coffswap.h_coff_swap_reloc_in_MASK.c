
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_reloc {int r_offset; int r_type; int r_symndx; int r_vaddr; } ;
typedef int bfd ;
struct TYPE_2__ {int r_offset; int r_type; int r_symndx; int r_vaddr; } ;
typedef TYPE_1__ RELOC ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4 (bfd * VAR_0, void * VAR_1, void * VAR_2)
{
  RELOC *VAR_3 = (RELOC *) VAR_1;
  struct internal_reloc *VAR_4 = (struct internal_reloc *) VAR_2;

  VAR_4->r_vaddr = FUNC_0 (VAR_0, VAR_3->r_vaddr);
  VAR_4->r_symndx = FUNC_2 (VAR_0, VAR_3->r_symndx);
  VAR_4->r_type = FUNC_1 (VAR_0, VAR_3->r_type);




}
