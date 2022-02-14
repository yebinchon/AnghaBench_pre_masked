
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct internal_reloc {unsigned int r_symndx; int r_type; void* r_vaddr; } ;
struct bfd_symbol {int dummy; } ;
struct TYPE_5__ {int relcount; int abfd; struct internal_reloc* int_reltab; TYPE_2__* reltab; } ;
typedef TYPE_1__ pe_ILF_vars ;
typedef void* bfd_vma ;
typedef int bfd_reloc_code_real_type ;
struct TYPE_6__ {TYPE_4__* howto; struct bfd_symbol** sym_ptr_ptr; scalar_t__ addend; void* address; } ;
typedef TYPE_2__ arelent ;
struct TYPE_7__ {int type; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (pe_ILF_vars * VAR_1,
       bfd_vma VAR_2,
       bfd_reloc_code_real_type VAR_3,
       struct bfd_symbol ** VAR_4,
       unsigned int VAR_5)
{
  arelent * VAR_6;
  struct internal_reloc * VAR_7;

  VAR_6 = VAR_1->reltab + VAR_1->relcount;
  VAR_7 = VAR_1->int_reltab + VAR_1->relcount;

  VAR_6->address = VAR_2;
  VAR_6->addend = 0;
  VAR_6->howto = FUNC_1 (VAR_1->abfd, VAR_3);
  VAR_6->sym_ptr_ptr = VAR_4;

  VAR_7->r_vaddr = VAR_2;
  VAR_7->r_symndx = VAR_5;
  VAR_7->r_type = VAR_6->howto->type;

  VAR_1->relcount ++;

  FUNC_0 (VAR_1->relcount <= VAR_0);
}
