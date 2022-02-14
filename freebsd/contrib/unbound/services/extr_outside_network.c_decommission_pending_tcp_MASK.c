
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pending_tcp {int * query; struct pending_tcp* next_free; TYPE_1__* c; } ;
struct outside_network {struct pending_tcp* tcp_free; } ;
struct TYPE_2__ {int * ssl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct outside_network*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct outside_network* VAR_0,
 struct pending_tcp* VAR_1)
{
 if(VAR_1->c->ssl) {





 }
 FUNC_2(VAR_1->c);
 VAR_1->next_free = VAR_0->tcp_free;
 VAR_0->tcp_free = VAR_1;
 FUNC_4(VAR_1->query);
 VAR_1->query = ((void*)0);
 FUNC_3(VAR_0);
}
