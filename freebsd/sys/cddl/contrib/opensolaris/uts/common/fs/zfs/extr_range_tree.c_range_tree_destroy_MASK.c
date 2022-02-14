
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rt_root; int rt_arg; TYPE_1__* rt_ops; int rt_space; } ;
typedef TYPE_2__ range_tree_t ;
struct TYPE_6__ {int (* rtop_destroy ) (TYPE_2__*,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void
FUNC_4(range_tree_t *VAR_0)
{
 FUNC_0(VAR_0->rt_space);

 if (VAR_0->rt_ops != ((void*)0) && VAR_0->rt_ops->rtop_destroy != ((void*)0))
  VAR_0->rt_ops->rtop_destroy(VAR_0, VAR_0->rt_arg);

 FUNC_1(&VAR_0->rt_root);
 FUNC_2(VAR_0, sizeof (*VAR_0));
}
