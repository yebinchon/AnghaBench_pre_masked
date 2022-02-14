
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdev_t ;
typedef void* uint64_t ;
struct TYPE_4__ {void* rs_split_offset; void* rs_asize; void* rs_offset; int * rs_vd; } ;
typedef TYPE_1__ remap_segment_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static remap_segment_t *
FUNC_1(vdev_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 remap_segment_t *VAR_4 = FUNC_0(sizeof (remap_segment_t));

 if (VAR_4 != ((void*)0)) {
  VAR_4->rs_vd = VAR_0;
  VAR_4->rs_offset = VAR_1;
  VAR_4->rs_asize = VAR_2;
  VAR_4->rs_split_offset = VAR_3;
 }

 return (VAR_4);
}
