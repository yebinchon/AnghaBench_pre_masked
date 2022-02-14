
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int vn_next; int vn_aux; int vn_file; int vn_cnt; int vn_version; } ;
struct TYPE_5__ {int vn_next; int vn_aux; int vn_file; int vn_cnt; int vn_version; } ;
typedef TYPE_1__ Elf_Internal_Verneed ;
typedef TYPE_2__ Elf_External_Verneed ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

void
FUNC_2 (bfd *VAR_0,
      const Elf_Internal_Verneed *VAR_1,
      Elf_External_Verneed *VAR_2)
{
  FUNC_0 (VAR_0, VAR_1->vn_version, VAR_2->vn_version);
  FUNC_0 (VAR_0, VAR_1->vn_cnt, VAR_2->vn_cnt);
  FUNC_1 (VAR_0, VAR_1->vn_file, VAR_2->vn_file);
  FUNC_1 (VAR_0, VAR_1->vn_aux, VAR_2->vn_aux);
  FUNC_1 (VAR_0, VAR_1->vn_next, VAR_2->vn_next);
}
