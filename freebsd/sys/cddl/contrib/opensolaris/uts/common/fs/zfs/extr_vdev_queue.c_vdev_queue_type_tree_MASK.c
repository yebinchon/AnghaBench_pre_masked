
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ zio_type_t ;
struct TYPE_3__ {int vq_write_offset_tree; int vq_read_offset_tree; } ;
typedef TYPE_1__ vdev_queue_t ;
typedef int avl_tree_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline avl_tree_t *
FUNC_0(vdev_queue_t *VAR_2, zio_type_t VAR_3)
{
 if (VAR_3 == VAR_0)
  return (&VAR_2->vq_read_offset_tree);
 else if (VAR_3 == VAR_1)
  return (&VAR_2->vq_write_offset_tree);
 else
  return (((void*)0));
}
