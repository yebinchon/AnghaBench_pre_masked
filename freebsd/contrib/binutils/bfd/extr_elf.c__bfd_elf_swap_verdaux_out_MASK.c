
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int vda_next; int vda_name; } ;
struct TYPE_5__ {int vda_next; int vda_name; } ;
typedef TYPE_1__ Elf_Internal_Verdaux ;
typedef TYPE_2__ Elf_External_Verdaux ;


 int FUNC_0 (int *,int ,int ) ;

void
FUNC_1 (bfd *VAR_0,
      const Elf_Internal_Verdaux *VAR_1,
      Elf_External_Verdaux *VAR_2)
{
  FUNC_0 (VAR_0, VAR_1->vda_name, VAR_2->vda_name);
  FUNC_0 (VAR_0, VAR_1->vda_next, VAR_2->vda_next);
}
