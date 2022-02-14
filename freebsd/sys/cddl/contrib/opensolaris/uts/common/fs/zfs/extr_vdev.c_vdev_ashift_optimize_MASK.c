
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vdev_ashift; scalar_t__ vdev_physical_ashift; struct TYPE_3__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(vdev_t *VAR_2)
{
 if (VAR_2 == VAR_2->vdev_top) {
  if (VAR_2->vdev_ashift < VAR_2->vdev_physical_ashift) {
   VAR_2->vdev_ashift = FUNC_1(
       FUNC_0(VAR_0, VAR_2->vdev_ashift),
       FUNC_0(VAR_1, VAR_2->vdev_physical_ashift));
  } else {







   VAR_2->vdev_ashift = FUNC_0(VAR_1,
       VAR_2->vdev_ashift);
  }
 }
}
