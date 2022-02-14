
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_if {size_t inuse; size_t avail_total; TYPE_1__** out; int * avail_ports; } ;
struct port_comm {scalar_t__ num_outstanding; size_t index; struct port_comm* next; int number; struct port_if* pif; int cp; } ;
struct outside_network {struct port_comm* unused_fds; } ;
struct TYPE_2__ {size_t index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct outside_network* VAR_1, struct port_comm* VAR_2)
{
 struct port_if* VAR_3;
 VAR_2->num_outstanding--;
 if(VAR_2->num_outstanding > 0) {
  return;
 }

 FUNC_2(VAR_0, "close of port %d", VAR_2->number);
 FUNC_0(VAR_2->cp);
 VAR_3 = VAR_2->pif;
 FUNC_1(VAR_3->inuse > 0);
 VAR_3->avail_ports[VAR_3->avail_total - VAR_3->inuse] = VAR_2->number;
 VAR_3->inuse--;
 VAR_3->out[VAR_2->index] = VAR_3->out[VAR_3->inuse];
 VAR_3->out[VAR_2->index]->index = VAR_2->index;
 VAR_2->next = VAR_1->unused_fds;
 VAR_1->unused_fds = VAR_2;
}
