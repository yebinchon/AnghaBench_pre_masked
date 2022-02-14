
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ enable_task_set_full; } ;
typedef TYPE_1__ ocs_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;

int32_t
FUNC_2(ocs_t *VAR_1)
{
 VAR_1->enable_task_set_full = FUNC_1(VAR_1,
     VAR_0);
 FUNC_0(VAR_1, "task set full processing is %s\n",
  VAR_1->enable_task_set_full ? "enabled" : "disabled");

 return 0;
}
