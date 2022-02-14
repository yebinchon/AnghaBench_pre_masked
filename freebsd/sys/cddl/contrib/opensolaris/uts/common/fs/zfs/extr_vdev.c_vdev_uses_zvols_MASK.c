
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vdev_children; struct TYPE_3__** vdev_child; scalar_t__ vdev_path; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;

boolean_t
FUNC_2(vdev_t *VAR_3)
{
 if (VAR_3->vdev_path && FUNC_1(VAR_3->vdev_path, VAR_2,
     FUNC_0(VAR_2)) == 0)
  return (VAR_1);
 for (int VAR_4 = 0; VAR_4 < VAR_3->vdev_children; VAR_4++)
  if (FUNC_2(VAR_3->vdev_child[VAR_4]))
   return (VAR_1);
 return (VAR_0);
}
