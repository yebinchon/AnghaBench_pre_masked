
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* vib_phys; TYPE_3__* vib_entries; } ;
typedef TYPE_2__ vdev_indirect_births_t ;
struct TYPE_8__ {int vibe_phys_birth_txg; } ;
typedef TYPE_3__ vdev_indirect_birth_entry_phys_t ;
typedef int uint64_t ;
struct TYPE_6__ {int vib_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

uint64_t
FUNC_2(vdev_indirect_births_t *VAR_0)
{
 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_0->vib_phys->vib_count > 0);

 vdev_indirect_birth_entry_phys_t *VAR_1 =
     &VAR_0->vib_entries[VAR_0->vib_phys->vib_count - 1];
 return (VAR_1->vibe_phys_birth_txg);
}
