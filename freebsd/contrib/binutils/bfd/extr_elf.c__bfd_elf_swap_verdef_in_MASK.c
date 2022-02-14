
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int vd_next; int vd_aux; int vd_hash; int vd_cnt; int vd_ndx; int vd_flags; int vd_version; } ;
struct TYPE_5__ {void* vd_next; void* vd_aux; void* vd_hash; void* vd_cnt; void* vd_ndx; void* vd_flags; void* vd_version; } ;
typedef TYPE_1__ Elf_Internal_Verdef ;
typedef TYPE_2__ Elf_External_Verdef ;


 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;

void
FUNC_2 (bfd *VAR_0,
    const Elf_External_Verdef *VAR_1,
    Elf_Internal_Verdef *VAR_2)
{
  VAR_2->vd_version = FUNC_0 (VAR_0, VAR_1->vd_version);
  VAR_2->vd_flags = FUNC_0 (VAR_0, VAR_1->vd_flags);
  VAR_2->vd_ndx = FUNC_0 (VAR_0, VAR_1->vd_ndx);
  VAR_2->vd_cnt = FUNC_0 (VAR_0, VAR_1->vd_cnt);
  VAR_2->vd_hash = FUNC_1 (VAR_0, VAR_1->vd_hash);
  VAR_2->vd_aux = FUNC_1 (VAR_0, VAR_1->vd_aux);
  VAR_2->vd_next = FUNC_1 (VAR_0, VAR_1->vd_next);
}
