
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cl_pool; scalar_t__ cl_list; int cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
typedef TYPE_1__ prop_changelist_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (scalar_t__,void**) ;
 int FUNC_4 (int ) ;

void
FUNC_5(prop_changelist_t *VAR_0)
{
 prop_changenode_t *VAR_1;
 void *VAR_2;

 if (VAR_0->cl_list) {
  VAR_2 = ((void*)0);
  while ((VAR_1 = FUNC_3(VAR_0->cl_list, &VAR_2)) != ((void*)0)) {
   FUNC_4(VAR_1->cn_handle);
   FUNC_0(VAR_1);
  }

  FUNC_1(VAR_0->cl_list);
 }
 if (VAR_0->cl_pool)
  FUNC_2(VAR_0->cl_pool);

 FUNC_0(VAR_0);
}
