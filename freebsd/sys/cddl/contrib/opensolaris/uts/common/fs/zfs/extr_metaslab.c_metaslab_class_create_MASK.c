
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_refcount_t ;
typedef int uint64_t ;
struct TYPE_5__ {int spa_alloc_count; } ;
typedef TYPE_1__ spa_t ;
typedef int metaslab_ops_t ;
struct TYPE_6__ {int * mc_alloc_slots; void* mc_alloc_max_slots; int mc_lock; int * mc_ops; int * mc_rotor; TYPE_1__* mc_spa; } ;
typedef TYPE_2__ metaslab_class_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;

metaslab_class_t *
FUNC_3(spa_t *VAR_2, metaslab_ops_t *VAR_3)
{
 metaslab_class_t *VAR_4;

 VAR_4 = FUNC_0(sizeof (metaslab_class_t), VAR_0);

 VAR_4->mc_spa = VAR_2;
 VAR_4->mc_rotor = ((void*)0);
 VAR_4->mc_ops = VAR_3;
 FUNC_1(&VAR_4->mc_lock, ((void*)0), VAR_1, ((void*)0));
 VAR_4->mc_alloc_slots = FUNC_0(VAR_2->spa_alloc_count *
     sizeof (zfs_refcount_t), VAR_0);
 VAR_4->mc_alloc_max_slots = FUNC_0(VAR_2->spa_alloc_count *
     sizeof (uint64_t), VAR_0);
 for (int VAR_5 = 0; VAR_5 < VAR_2->spa_alloc_count; VAR_5++)
  FUNC_2(&VAR_4->mc_alloc_slots[VAR_5]);

 return (VAR_4);
}
