
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ vdev_leaf_zap; scalar_t__ vdev_initialize_state; int vdev_initialize_last_offset; TYPE_4__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {int spa_meta_objset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,scalar_t__,int ,int,int,int *) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_7)
{
 FUNC_0(FUNC_1(VAR_7->vdev_spa, VAR_3, VAR_1) ||
     FUNC_1(VAR_7->vdev_spa, VAR_3, VAR_2));
 FUNC_0(VAR_7->vdev_leaf_zap != 0);

 if (VAR_7->vdev_initialize_state == VAR_4 ||
     VAR_7->vdev_initialize_state == VAR_5) {
  int VAR_8 = FUNC_3(VAR_7->vdev_spa->spa_meta_objset,
      VAR_7->vdev_leaf_zap, VAR_6,
      sizeof (VAR_7->vdev_initialize_last_offset), 1,
      &VAR_7->vdev_initialize_last_offset);
  FUNC_0(VAR_8 == 0 || VAR_8 == VAR_0);
 }

 FUNC_2(VAR_7);
}
