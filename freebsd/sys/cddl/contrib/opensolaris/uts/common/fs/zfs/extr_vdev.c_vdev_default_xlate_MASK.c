
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdev_t ;
struct TYPE_4__ {int rs_end; int rs_start; } ;
typedef TYPE_1__ range_seg_t ;



void
FUNC_0(vdev_t *VAR_0, const range_seg_t *VAR_1, range_seg_t *VAR_2)
{
 VAR_2->rs_start = VAR_1->rs_start;
 VAR_2->rs_end = VAR_1->rs_end;
}
