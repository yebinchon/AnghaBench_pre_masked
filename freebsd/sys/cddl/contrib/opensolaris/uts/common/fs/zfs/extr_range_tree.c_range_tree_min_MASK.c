
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int rt_root; } ;
typedef TYPE_1__ range_tree_t ;
struct TYPE_6__ {int rs_start; } ;
typedef TYPE_2__ range_seg_t ;


 TYPE_2__* FUNC_0 (int *) ;

uint64_t
FUNC_1(range_tree_t *VAR_0)
{
 range_seg_t *VAR_1 = FUNC_0(&VAR_0->rt_root);
 return (VAR_1 != ((void*)0) ? VAR_1->rs_start : 0);
}
