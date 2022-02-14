
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {int rt_root; } ;
typedef TYPE_1__ range_tree_t ;
struct TYPE_8__ {scalar_t__ rs_end; scalar_t__ rs_start; } ;
typedef TYPE_2__ range_seg_t ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*,int *) ;

__attribute__((used)) static range_seg_t *
FUNC_2(range_tree_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 range_seg_t VAR_3;
 uint64_t VAR_4 = VAR_1 + VAR_2;

 FUNC_0(VAR_2 != 0);

 VAR_3.rs_start = VAR_1;
 VAR_3.rs_end = VAR_4;
 return (FUNC_1(&VAR_0->rt_root, &VAR_3, ((void*)0)));
}
