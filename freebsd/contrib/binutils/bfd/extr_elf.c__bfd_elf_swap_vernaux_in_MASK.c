
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_6__ {int vna_next; int vna_name; int vna_other; int vna_flags; int vna_hash; } ;
struct TYPE_5__ {void* vna_next; void* vna_name; void* vna_other; void* vna_flags; void* vna_hash; } ;
typedef TYPE_1__ Elf_Internal_Vernaux ;
typedef TYPE_2__ Elf_External_Vernaux ;


 void* FUNC_0 (int *,int ) ;
 void* FUNC_1 (int *,int ) ;

void
FUNC_2 (bfd *VAR_0,
     const Elf_External_Vernaux *VAR_1,
     Elf_Internal_Vernaux *VAR_2)
{
  VAR_2->vna_hash = FUNC_1 (VAR_0, VAR_1->vna_hash);
  VAR_2->vna_flags = FUNC_0 (VAR_0, VAR_1->vna_flags);
  VAR_2->vna_other = FUNC_0 (VAR_0, VAR_1->vna_other);
  VAR_2->vna_name = FUNC_1 (VAR_0, VAR_1->vna_name);
  VAR_2->vna_next = FUNC_1 (VAR_0, VAR_1->vna_next);
}
