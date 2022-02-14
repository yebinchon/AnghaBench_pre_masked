
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum elf_ppc_reloc_type { ____Placeholder_elf_ppc_reloc_type } elf_ppc_reloc_type ;
typedef int bfd ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__** VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_2, enum elf_ppc_reloc_type VAR_3)
{
  FUNC_1)
    (FUNC_0("%B: relocation %s cannot be used when making a shared object"),
     VAR_2,
     VAR_1[VAR_3]->name);
  FUNC_2 (VAR_0);
}
