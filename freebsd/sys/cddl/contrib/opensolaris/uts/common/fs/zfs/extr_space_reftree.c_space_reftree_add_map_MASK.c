
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rt_root; } ;
typedef TYPE_1__ range_tree_t ;
struct TYPE_8__ {int rs_end; int rs_start; } ;
typedef TYPE_2__ range_seg_t ;
typedef int int64_t ;
typedef int avl_tree_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ) ;

void
FUNC_3(avl_tree_t *VAR_0, range_tree_t *VAR_1, int64_t VAR_2)
{
 range_seg_t *VAR_3;

 for (VAR_3 = FUNC_1(&VAR_1->rt_root); VAR_3; VAR_3 = FUNC_0(&VAR_1->rt_root, VAR_3))
  FUNC_2(VAR_0, VAR_3->rs_start, VAR_3->rs_end, VAR_2);
}
