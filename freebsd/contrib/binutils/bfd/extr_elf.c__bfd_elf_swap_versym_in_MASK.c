
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int vs_vers; } ;
struct TYPE_5__ {int vs_vers; } ;
typedef TYPE_1__ Elf_Internal_Versym ;
typedef TYPE_2__ Elf_External_Versym ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1 (bfd *VAR_0,
    const Elf_External_Versym *VAR_1,
    Elf_Internal_Versym *VAR_2)
{
  VAR_2->vs_vers = FUNC_0 (VAR_0, VAR_1->vs_vers);
}
