
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vdev_ops; } ;
typedef TYPE_1__ vdev_t ;
typedef int vdev_ops_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

boolean_t
FUNC_0(vdev_t *VAR_6)
{
 vdev_ops_t *VAR_7 = VAR_6->vdev_ops;
 if (VAR_7 == &VAR_3 || VAR_7 == &VAR_2 ||
     VAR_7 == &VAR_4 || VAR_7 == &VAR_5) {
  return (VAR_0);
 } else {
  return (VAR_1);
 }
}
