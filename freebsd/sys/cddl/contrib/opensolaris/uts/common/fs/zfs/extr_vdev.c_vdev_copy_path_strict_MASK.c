
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ vdev_guid; scalar_t__ vdev_children; TYPE_2__* vdev_ops; struct TYPE_9__** vdev_child; scalar_t__ vdev_ishole; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int u_longlong_t ;
struct TYPE_10__ {scalar_t__ vdev_op_leaf; int vdev_op_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;

int
FUNC_3(vdev_t *VAR_3, vdev_t *VAR_4)
{
 if ((VAR_3->vdev_ops == &VAR_2) ||
     (VAR_3->vdev_ishole && VAR_4->vdev_ishole) ||
     (VAR_4->vdev_ops == &VAR_1))
  return (0);

 if (VAR_3->vdev_ops != VAR_4->vdev_ops) {
  FUNC_2(VAR_3, "vdev_copy_path: vdev type mismatch: %s != %s",
      VAR_3->vdev_ops->vdev_op_type, VAR_4->vdev_ops->vdev_op_type);
  return (FUNC_0(VAR_0));
 }

 if (VAR_3->vdev_guid != VAR_4->vdev_guid) {
  FUNC_2(VAR_3, "vdev_copy_path: guids mismatch (%llu != "
      "%llu)", (u_longlong_t)VAR_3->vdev_guid,
      (u_longlong_t)VAR_4->vdev_guid);
  return (FUNC_0(VAR_0));
 }

 if (VAR_3->vdev_children != VAR_4->vdev_children) {
  FUNC_2(VAR_3, "vdev_copy_path: children count mismatch: "
      "%llu != %llu", (u_longlong_t)VAR_3->vdev_children,
      (u_longlong_t)VAR_4->vdev_children);
  return (FUNC_0(VAR_0));
 }

 for (uint64_t VAR_5 = 0; VAR_5 < VAR_3->vdev_children; VAR_5++) {
  int VAR_6 = FUNC_3(VAR_3->vdev_child[VAR_5],
      VAR_4->vdev_child[VAR_5]);
  if (VAR_6 != 0)
   return (VAR_6);
 }

 if (VAR_3->vdev_ops->vdev_op_leaf)
  FUNC_1(VAR_3, VAR_4);

 return (0);
}
