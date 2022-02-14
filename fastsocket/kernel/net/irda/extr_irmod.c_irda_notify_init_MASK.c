
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int * instance; int * status_indication; int * flow_indication; int * disconnect_indication; int * connect_indication; int * connect_confirm; int * udata_indication; int * data_indication; } ;
typedef TYPE_1__ notify_t ;


 int FUNC_0 (int ,char*,int) ;

void FUNC_1(notify_t *VAR_0)
{
 VAR_0->data_indication = ((void*)0);
 VAR_0->udata_indication = ((void*)0);
 VAR_0->connect_confirm = ((void*)0);
 VAR_0->connect_indication = ((void*)0);
 VAR_0->disconnect_indication = ((void*)0);
 VAR_0->flow_indication = ((void*)0);
 VAR_0->status_indication = ((void*)0);
 VAR_0->instance = ((void*)0);
 FUNC_0(VAR_0->name, "Unknown", sizeof(VAR_0->name));
}
