
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* avl_child; } ;
struct TYPE_8__ {TYPE_7__ io_trim_node; TYPE_2__* io_vd; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_9__ {TYPE_3__* vdev_trimmap; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_11__ {TYPE_7__* avl_root; } ;
struct TYPE_10__ {int tm_lock; TYPE_5__ tm_inflight_writes; } ;
typedef TYPE_3__ trim_map_t ;


 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void
FUNC_4(zio_t *VAR_1)
{
 vdev_t *VAR_2 = VAR_1->io_vd;
 trim_map_t *VAR_3 = VAR_2->vdev_trimmap;





 if (!VAR_0 || VAR_3 == ((void*)0))
  return;

 FUNC_2(&VAR_3->tm_lock);




 if (VAR_1->io_trim_node.avl_child[0] ||
     VAR_1->io_trim_node.avl_child[1] ||
     FUNC_0(&VAR_1->io_trim_node) ||
     VAR_3->tm_inflight_writes.avl_root == &VAR_1->io_trim_node)
  FUNC_1(&VAR_3->tm_inflight_writes, VAR_1);
 FUNC_3(&VAR_3->tm_lock);
}
