
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_refcount_t ;
typedef int uint64_t ;
struct TYPE_7__ {scalar_t__ mc_alloc; scalar_t__ mc_deferred; scalar_t__ mc_space; scalar_t__ mc_dspace; int mc_lock; TYPE_1__* mc_spa; struct TYPE_7__* mc_alloc_max_slots; struct TYPE_7__* mc_alloc_slots; int * mc_rotor; } ;
typedef TYPE_2__ metaslab_class_t ;
struct TYPE_6__ {int spa_alloc_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

void
FUNC_4(metaslab_class_t *VAR_0)
{
 FUNC_0(VAR_0->mc_rotor == ((void*)0));
 FUNC_0(VAR_0->mc_alloc == 0);
 FUNC_0(VAR_0->mc_deferred == 0);
 FUNC_0(VAR_0->mc_space == 0);
 FUNC_0(VAR_0->mc_dspace == 0);

 for (int VAR_1 = 0; VAR_1 < VAR_0->mc_spa->spa_alloc_count; VAR_1++)
  FUNC_3(&VAR_0->mc_alloc_slots[VAR_1]);
 FUNC_1(VAR_0->mc_alloc_slots, VAR_0->mc_spa->spa_alloc_count *
     sizeof (zfs_refcount_t));
 FUNC_1(VAR_0->mc_alloc_max_slots, VAR_0->mc_spa->spa_alloc_count *
     sizeof (uint64_t));
 FUNC_2(&VAR_0->mc_lock);
 FUNC_1(VAR_0, sizeof (metaslab_class_t));
}
