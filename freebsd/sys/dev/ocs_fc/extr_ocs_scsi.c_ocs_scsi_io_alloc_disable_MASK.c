
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int active_ios_lock; int io_alloc_enabled; } ;
typedef TYPE_1__ ocs_node_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(ocs_node_t *VAR_1)
{
 FUNC_0(VAR_1 != ((void*)0));
 FUNC_1(&VAR_1->active_ios_lock);
  VAR_1->io_alloc_enabled = VAR_0;
 FUNC_2(&VAR_1->active_ios_lock);
}
