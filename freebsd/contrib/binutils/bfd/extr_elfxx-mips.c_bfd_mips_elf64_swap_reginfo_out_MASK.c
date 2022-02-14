
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int ri_gp_value; int * ri_cprmask; int ri_pad; int ri_gprmask; } ;
struct TYPE_5__ {int ri_gp_value; int * ri_cprmask; int ri_pad; int ri_gprmask; } ;
typedef TYPE_1__ Elf64_Internal_RegInfo ;
typedef TYPE_2__ Elf64_External_RegInfo ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

void
FUNC_2 (bfd *VAR_0, const Elf64_Internal_RegInfo *VAR_1,
     Elf64_External_RegInfo *VAR_2)
{
  FUNC_0 (VAR_0, VAR_1->ri_gprmask, VAR_2->ri_gprmask);
  FUNC_0 (VAR_0, VAR_1->ri_pad, VAR_2->ri_pad);
  FUNC_0 (VAR_0, VAR_1->ri_cprmask[0], VAR_2->ri_cprmask[0]);
  FUNC_0 (VAR_0, VAR_1->ri_cprmask[1], VAR_2->ri_cprmask[1]);
  FUNC_0 (VAR_0, VAR_1->ri_cprmask[2], VAR_2->ri_cprmask[2]);
  FUNC_0 (VAR_0, VAR_1->ri_cprmask[3], VAR_2->ri_cprmask[3]);
  FUNC_1 (VAR_0, VAR_1->ri_gp_value, VAR_2->ri_gp_value);
}
