
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_size; int sh_offset; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
struct TYPE_5__ {int sh_entsize; int sh_addralign; int sh_info; int sh_link; int sh_size; int sh_offset; int sh_addr; int sh_flags; int sh_type; int sh_name; } ;
typedef TYPE_1__ Elf_Internal_Shdr ;
typedef TYPE_2__ Elf_External_Shdr ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_2 (bfd *VAR_0,
     const Elf_Internal_Shdr *VAR_1,
     Elf_External_Shdr *VAR_2)
{

  FUNC_0 (VAR_0, VAR_1->sh_name, VAR_2->sh_name);
  FUNC_0 (VAR_0, VAR_1->sh_type, VAR_2->sh_type);
  FUNC_1 (VAR_0, VAR_1->sh_flags, VAR_2->sh_flags);
  FUNC_1 (VAR_0, VAR_1->sh_addr, VAR_2->sh_addr);
  FUNC_1 (VAR_0, VAR_1->sh_offset, VAR_2->sh_offset);
  FUNC_1 (VAR_0, VAR_1->sh_size, VAR_2->sh_size);
  FUNC_0 (VAR_0, VAR_1->sh_link, VAR_2->sh_link);
  FUNC_0 (VAR_0, VAR_1->sh_info, VAR_2->sh_info);
  FUNC_1 (VAR_0, VAR_1->sh_addralign, VAR_2->sh_addralign);
  FUNC_1 (VAR_0, VAR_1->sh_entsize, VAR_2->sh_entsize);
}
