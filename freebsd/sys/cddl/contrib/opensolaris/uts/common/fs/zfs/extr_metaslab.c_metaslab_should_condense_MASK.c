
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int vdev_ashift; int vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_12__ {int sm_dbuf; } ;
typedef TYPE_3__ space_map_t ;
struct TYPE_13__ {scalar_t__ ms_condense_checked_txg; int ms_allocatable; TYPE_3__* ms_sm; scalar_t__ ms_condense_wanted; int ms_allocatable_by_size; int ms_loaded; int ms_lock; TYPE_1__* ms_group; } ;
typedef TYPE_4__ metaslab_t ;
struct TYPE_14__ {int doi_data_block_size; } ;
typedef TYPE_5__ dmu_object_info_t ;
typedef int boolean_t ;
struct TYPE_10__ {TYPE_2__* mg_vd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static boolean_t
FUNC_8(metaslab_t *VAR_5)
{
 space_map_t *VAR_6 = VAR_5->ms_sm;
 vdev_t *VAR_7 = VAR_5->ms_group->mg_vd;
 uint64_t VAR_8 = 1 << VAR_7->vdev_ashift;
 uint64_t VAR_9 = FUNC_5(VAR_7->vdev_spa);

 FUNC_0(FUNC_2(&VAR_5->ms_lock));
 FUNC_0(VAR_5->ms_loaded);
 if (VAR_5->ms_condense_checked_txg == VAR_9)
  return (VAR_0);
 VAR_5->ms_condense_checked_txg = VAR_9;





 if (FUNC_3(&VAR_5->ms_allocatable_by_size) ||
     VAR_5->ms_condense_wanted)
  return (VAR_1);

 uint64_t VAR_10 = FUNC_7(VAR_5->ms_sm);
 uint64_t VAR_11 = FUNC_6(VAR_6,
     VAR_5->ms_allocatable, VAR_2);

 dmu_object_info_t VAR_12;
 FUNC_4(VAR_6->sm_dbuf, &VAR_12);
 uint64_t VAR_13 = FUNC_1(VAR_12.doi_data_block_size, VAR_8);

 return (VAR_10 >= (VAR_11 * VAR_3 / 100) &&
     VAR_10 > VAR_4 * VAR_13);
}
