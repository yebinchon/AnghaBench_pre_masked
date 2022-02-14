
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rt_root; } ;
typedef TYPE_1__ range_tree_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(range_tree_t **VAR_0, range_tree_t **VAR_1)
{
 range_tree_t *VAR_2;

 FUNC_0(FUNC_2(*VAR_1));
 FUNC_0(FUNC_1(&(*VAR_1)->rt_root));

 VAR_2 = *VAR_0;
 *VAR_0 = *VAR_1;
 *VAR_1 = VAR_2;
}
