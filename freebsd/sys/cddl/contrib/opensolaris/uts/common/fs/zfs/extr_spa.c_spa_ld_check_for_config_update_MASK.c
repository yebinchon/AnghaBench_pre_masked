
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vdev_children; TYPE_1__** vdev_child; } ;
typedef TYPE_2__ vdev_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ spa_config_txg; scalar_t__ spa_load_state; int spa_import_flags; TYPE_2__* spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {scalar_t__ vdev_ms_array; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_1(spa_t *VAR_6, uint64_t VAR_7,
    boolean_t VAR_8)
{
 vdev_t *VAR_9 = VAR_6->spa_root_vdev;
 int VAR_10 = VAR_0;
 if (VAR_8 || VAR_7 != VAR_6->spa_config_txg ||
     VAR_6->spa_load_state == VAR_3 ||
     VAR_6->spa_load_state == VAR_4 ||
     (VAR_6->spa_import_flags & VAR_5))
  VAR_10 = VAR_1;

 for (int VAR_11 = 0; VAR_11 < VAR_9->vdev_children; VAR_11++)
  if (VAR_9->vdev_child[VAR_11]->vdev_ms_array == 0)
   VAR_10 = VAR_1;





 if (VAR_10)
  FUNC_0(VAR_6, VAR_2);
}
