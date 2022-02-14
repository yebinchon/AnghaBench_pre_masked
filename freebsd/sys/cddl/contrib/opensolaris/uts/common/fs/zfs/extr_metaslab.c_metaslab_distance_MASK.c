
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_7__ {unsigned long long ms_id; TYPE_2__* ms_group; } ;
typedef TYPE_3__ metaslab_t ;
typedef int dva_t ;
struct TYPE_6__ {TYPE_1__* mg_vd; } ;
struct TYPE_5__ {unsigned long long vdev_ms_shift; scalar_t__ vdev_id; } ;


 unsigned long long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static uint64_t
FUNC_2(metaslab_t *VAR_0, dva_t *VAR_1)
{
 uint64_t VAR_2 = VAR_0->ms_group->mg_vd->vdev_ms_shift;
 uint64_t VAR_3 = FUNC_0(VAR_1) >> VAR_2;
 uint64_t VAR_4 = VAR_0->ms_id;

 if (VAR_0->ms_group->mg_vd->vdev_id != FUNC_1(VAR_1))
  return (1ULL << 63);

 if (VAR_3 < VAR_4)
  return ((VAR_4 - VAR_3) << VAR_2);
 if (VAR_3 > VAR_4)
  return ((VAR_3 - VAR_4) << VAR_2);
 return (0);
}
