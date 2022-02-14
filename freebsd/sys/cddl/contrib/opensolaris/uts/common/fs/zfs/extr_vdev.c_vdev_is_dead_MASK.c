
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vdev_state; int * vdev_ops; } ;
typedef TYPE_1__ vdev_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0(vdev_t *VAR_3)
{







 return (VAR_3->vdev_state < VAR_0 ||
     VAR_3->vdev_ops == &VAR_1 ||
     VAR_3->vdev_ops == &VAR_2);
}
