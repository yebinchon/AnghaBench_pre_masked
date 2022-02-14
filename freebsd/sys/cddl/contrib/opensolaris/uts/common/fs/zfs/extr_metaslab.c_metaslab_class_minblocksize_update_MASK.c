
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long long vdev_ashift; } ;
typedef TYPE_1__ vdev_t ;
typedef unsigned long long uint64_t ;
struct TYPE_6__ {TYPE_1__* mg_vd; struct TYPE_6__* mg_next; } ;
typedef TYPE_2__ metaslab_group_t ;
struct TYPE_7__ {unsigned long long mc_minblocksize; TYPE_2__* mc_rotor; } ;
typedef TYPE_3__ metaslab_class_t ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;

void
FUNC_0(metaslab_class_t *VAR_2)
{
 metaslab_group_t *VAR_3;
 vdev_t *VAR_4;
 uint64_t VAR_5 = VAR_1;

 if ((VAR_3 = VAR_2->mc_rotor) == ((void*)0)) {
  VAR_2->mc_minblocksize = VAR_0;
  return;
 }

 do {
  VAR_4 = VAR_3->mg_vd;
  if (VAR_4->vdev_ashift < VAR_5)
   VAR_5 = VAR_4->vdev_ashift;
 } while ((VAR_3 = VAR_3->mg_next) != VAR_2->mc_rotor);

 VAR_2->mc_minblocksize = 1ULL << VAR_5;
}
