
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int range_tree_t ;
struct TYPE_4__ {scalar_t__ rs_start; scalar_t__ rs_end; } ;
typedef TYPE_1__ range_seg_t ;


 TYPE_1__* FUNC_0 (int *,scalar_t__,scalar_t__) ;

range_seg_t *
FUNC_1(range_tree_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 range_seg_t *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != ((void*)0) && VAR_3->rs_start <= VAR_1 && VAR_3->rs_end >= VAR_1 + VAR_2)
  return (VAR_3);
 return (((void*)0));
}
