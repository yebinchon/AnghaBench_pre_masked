
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t vdev_ms_count; unsigned int vdev_children; struct TYPE_8__** vdev_child; TYPE_2__** vdev_ms; struct TYPE_8__* vdev_top; } ;
typedef TYPE_3__ vdev_t ;
typedef size_t uint64_t ;
struct TYPE_9__ {TYPE_1__* sm_dbuf; } ;
typedef TYPE_4__ space_map_t ;
typedef int space_map_phys_t ;
struct TYPE_7__ {TYPE_4__* ms_sm; } ;
struct TYPE_6__ {int db_size; } ;



__attribute__((used)) static int
FUNC_0(vdev_t *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->vdev_top == VAR_0) {
  for (uint64_t VAR_2 = 0; VAR_2 < VAR_0->vdev_ms_count; VAR_2++) {
   space_map_t *VAR_3 = VAR_0->vdev_ms[VAR_2]->ms_sm;

   if (VAR_3 != ((void*)0) &&
       VAR_3->sm_dbuf->db_size == sizeof (space_map_phys_t))
    VAR_1++;
  }
 }
 for (unsigned VAR_4 = 0; VAR_4 < VAR_0->vdev_children; VAR_4++)
  VAR_1 += FUNC_0(VAR_0->vdev_child[VAR_4]);

 return (VAR_1);
}
