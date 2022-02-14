
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vdev_top_zap; TYPE_3__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int sm_obj ;
struct TYPE_5__ {int spa_meta_objset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int,int,int*) ;

int
FUNC_4(vdev_t *VAR_4)
{
 FUNC_1(FUNC_2(VAR_4->vdev_spa, VAR_2, VAR_1));
 if (VAR_4->vdev_top_zap == 0) {
  return (0);
 }

 uint64_t VAR_5 = 0;
 int VAR_6 = FUNC_3(VAR_4->vdev_spa->spa_meta_objset, VAR_4->vdev_top_zap,
     VAR_3, sizeof (VAR_5), 1, &VAR_5);

 FUNC_0(VAR_6 == 0 || VAR_6 == VAR_0);

 return (VAR_5);
}
