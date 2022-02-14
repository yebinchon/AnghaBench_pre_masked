
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct waiting_tcp {void* cb_arg; int (* cb ) (int *,void*,int ,int *) ;scalar_t__ next_waiting; scalar_t__ pkt; struct outside_network* outnet; } ;
struct pending_tcp {struct pending_tcp* next_free; int * query; TYPE_1__* c; } ;
struct outside_network {struct pending_tcp* tcp_free; } ;
typedef int (* comm_point_callback_type ) (int *,void*,int ,int *) ;
struct TYPE_2__ {int * ssl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int (*) (int *,void*,int ,int *)) ;
 int FUNC_5 (int *,void*,int ,int *) ;
 int FUNC_6 (struct outside_network*) ;
 int FUNC_7 (struct outside_network*,struct waiting_tcp*) ;
 int FUNC_8 (struct waiting_tcp*) ;

void
FUNC_9(void* VAR_1)
{
 struct waiting_tcp* VAR_2 = (struct waiting_tcp*)VAR_1;
 struct outside_network* VAR_3 = VAR_2->outnet;
 comm_point_callback_type* VAR_4;
 void* VAR_5;
 if(VAR_2->pkt) {

  FUNC_7(VAR_3, VAR_2);
 } else {

  struct pending_tcp* VAR_6=(struct pending_tcp*)VAR_2->next_waiting;
  if(VAR_6->c->ssl) {





  }
  FUNC_2(VAR_6->c);
  VAR_6->query = ((void*)0);
  VAR_6->next_free = VAR_3->tcp_free;
  VAR_3->tcp_free = VAR_6;
 }
 VAR_4 = &VAR_2->cb;
 VAR_5 = VAR_2->cb_arg;
 FUNC_8(VAR_2);
 FUNC_3(FUNC_4(*VAR_4));
 (void)(*VAR_4)(((void*)0), VAR_5, VAR_0, ((void*)0));
 FUNC_6(VAR_3);
}
