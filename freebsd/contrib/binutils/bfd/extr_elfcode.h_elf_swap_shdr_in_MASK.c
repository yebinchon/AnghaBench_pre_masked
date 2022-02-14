
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_8__ {int sign_extend_vma; } ;
struct TYPE_7__ {int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_size; int sh_offset; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
struct TYPE_6__ {int * contents; int * bfd_section; void* sh_entsize; void* sh_addralign; void* sh_info; void* sh_link; void* sh_size; void* sh_offset; void* sh_addr; void* sh_flags; void* sh_type; void* sh_name; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;
typedef TYPE_2__ Elf_External_Shdr ;


 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;
 void* FUNC_2 (int *,int ) ;
 TYPE_3__* FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_0,
    const Elf_External_Shdr *VAR_1,
    Elf_Internal_Shdr *VAR_2)
{
  int VAR_3 = FUNC_3 (VAR_0)->sign_extend_vma;

  VAR_2->sh_name = FUNC_0 (VAR_0, VAR_1->sh_name);
  VAR_2->sh_type = FUNC_0 (VAR_0, VAR_1->sh_type);
  VAR_2->sh_flags = FUNC_2 (VAR_0, VAR_1->sh_flags);
  if (VAR_3)
    VAR_2->sh_addr = FUNC_1 (VAR_0, VAR_1->sh_addr);
  else
    VAR_2->sh_addr = FUNC_2 (VAR_0, VAR_1->sh_addr);
  VAR_2->sh_offset = FUNC_2 (VAR_0, VAR_1->sh_offset);
  VAR_2->sh_size = FUNC_2 (VAR_0, VAR_1->sh_size);
  VAR_2->sh_link = FUNC_0 (VAR_0, VAR_1->sh_link);
  VAR_2->sh_info = FUNC_0 (VAR_0, VAR_1->sh_info);
  VAR_2->sh_addralign = FUNC_2 (VAR_0, VAR_1->sh_addralign);
  VAR_2->sh_entsize = FUNC_2 (VAR_0, VAR_1->sh_entsize);
  VAR_2->bfd_section = ((void*)0);
  VAR_2->contents = ((void*)0);
}
