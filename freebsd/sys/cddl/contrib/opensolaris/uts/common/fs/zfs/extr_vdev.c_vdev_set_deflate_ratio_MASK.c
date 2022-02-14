
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vdev_ashift; int vdev_deflate_ratio; int vdev_ishole; struct TYPE_4__* vdev_top; } ;
typedef TYPE_1__ vdev_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(vdev_t *VAR_1)
{
 if (VAR_1 == VAR_1->vdev_top && !VAR_1->vdev_ishole && VAR_1->vdev_ashift != 0) {
  VAR_1->vdev_deflate_ratio = (1 << 17) /
      (FUNC_0(VAR_1, 1 << 17) >> VAR_0);
 }
}
