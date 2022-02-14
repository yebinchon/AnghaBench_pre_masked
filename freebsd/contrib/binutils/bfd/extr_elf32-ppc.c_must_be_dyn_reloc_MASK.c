
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_link_info {int executable; } ;
typedef enum elf_ppc_reloc_type { ____Placeholder_elf_ppc_reloc_type } elf_ppc_reloc_type ;
__attribute__((used)) static int
FUNC_0 (struct bfd_link_info *VAR_0,
     enum elf_ppc_reloc_type VAR_1)
{
  switch (VAR_1)
    {
    default:
      return 1;

    case 134:
    case 137:
    case 135:
    case 136:
    case 133:
      return 0;

    case 128:
    case 132:
    case 129:
    case 130:
    case 131:
      return !VAR_0->executable;
    }
}
