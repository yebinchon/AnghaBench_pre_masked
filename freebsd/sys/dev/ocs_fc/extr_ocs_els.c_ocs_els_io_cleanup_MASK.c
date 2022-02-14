
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ocs_sm_event_t ;
struct TYPE_4__ {int els_req_free; int els_callback_arg; int node; int (* els_callback ) (int ,void*,int ) ;int els_sm; } ;
typedef TYPE_1__ ocs_io_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void*,int ) ;

void
FUNC_4(ocs_io_t *VAR_0, ocs_sm_event_t VAR_1, void *VAR_2)
{
 FUNC_0(VAR_0);




 FUNC_2(&VAR_0->els_sm);
 FUNC_1(VAR_0->node, VAR_1, VAR_2);


 if (VAR_0->els_callback) {
  (*VAR_0->els_callback)(VAR_0->node, VAR_2, VAR_0->els_callback_arg);
 }
 VAR_0->els_req_free = 1;
}
