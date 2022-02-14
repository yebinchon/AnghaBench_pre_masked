
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vdev_ms_count; int vdev_nonrot; int vdev_removing; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_6__ {int ms_size; int ms_fragmentation; int ms_id; int ms_weight; scalar_t__ ms_loaded; int ms_sm; int ms_lock; TYPE_3__* ms_group; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_7__ {TYPE_1__* mg_vd; } ;
typedef TYPE_3__ metaslab_group_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

__attribute__((used)) static uint64_t
FUNC_4(metaslab_t *VAR_6)
{
 metaslab_group_t *VAR_7 = VAR_6->ms_group;
 vdev_t *VAR_8 = VAR_7->mg_vd;
 uint64_t VAR_9, VAR_10;

 FUNC_0(FUNC_1(&VAR_6->ms_lock));
 FUNC_0(!VAR_8->vdev_removing);




 VAR_10 = VAR_6->ms_size - FUNC_3(VAR_6->ms_sm);

 if (VAR_3 &&
     VAR_6->ms_fragmentation != VAR_2) {







  VAR_10 = (VAR_10 * (100 - (VAR_6->ms_fragmentation - 1))) / 100;
  if (VAR_10 > 0 && VAR_10 < VAR_1)
   VAR_10 = VAR_1;
 }
 VAR_9 = VAR_10;
 if (!VAR_8->vdev_nonrot && VAR_4) {
  VAR_9 = 2 * VAR_9 - (VAR_6->ms_id * VAR_9) / VAR_8->vdev_ms_count;
  FUNC_0(VAR_9 >= VAR_10 && VAR_9 <= 2 * VAR_10);
 }







 if (VAR_6->ms_loaded && VAR_6->ms_fragmentation != VAR_2 &&
     VAR_6->ms_fragmentation <= VAR_5) {
  VAR_9 |= (VAR_6->ms_weight & VAR_0);
 }

 FUNC_2(VAR_9);
 return (VAR_9);
}
