
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct elf_backend_data {int (* elf_backend_mips_rtype_to_howto ) (unsigned int,int ) ;} ;
typedef int bfd ;
struct TYPE_7__ {int addend; TYPE_1__** sym_ptr_ptr; int howto; } ;
typedef TYPE_2__ arelent ;
struct TYPE_8__ {int r_info; } ;
struct TYPE_6__ {int flags; } ;
typedef TYPE_3__ Elf_Internal_Rela ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 struct elf_backend_data* FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_4, arelent *VAR_5, Elf_Internal_Rela *VAR_6)
{
  const struct elf_backend_data *VAR_7;
  unsigned int VAR_8;

  VAR_8 = FUNC_0 (VAR_6->r_info);
  VAR_7 = FUNC_2 (VAR_4);
  VAR_5->howto = VAR_7->elf_backend_mips_rtype_to_howto (VAR_8, VAR_1);





  if (((*VAR_5->sym_ptr_ptr)->flags & VAR_0) != 0
      && (VAR_8 == (unsigned int) VAR_2
   || VAR_8 == (unsigned int) VAR_3))
    VAR_5->addend = FUNC_1 (VAR_4);
}
