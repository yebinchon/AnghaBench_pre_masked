
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ddt_tree; int ddt_lock; } ;
typedef TYPE_1__ ddt_t ;
typedef int ddt_entry_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(ddt_t *VAR_0, ddt_entry_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->ddt_lock));

 FUNC_2(&VAR_0->ddt_tree, VAR_1);
 FUNC_3(VAR_1);
}
