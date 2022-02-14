
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int abfd; } ;
typedef TYPE_1__ pe_ILF_vars ;
typedef int bfd_vma ;
typedef int bfd_reloc_code_real_type ;
typedef TYPE_2__* asection_ptr ;
struct TYPE_10__ {int i; } ;
struct TYPE_9__ {int symbol_ptr_ptr; } ;


 TYPE_6__* FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (pe_ILF_vars * VAR_0,
       bfd_vma VAR_1,
       bfd_reloc_code_real_type VAR_2,
       asection_ptr VAR_3)
{
  FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3->symbol_ptr_ptr,
         FUNC_0 (VAR_0->abfd, VAR_3)->i);
}
