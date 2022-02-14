
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct listen_list {TYPE_1__* com; struct listen_list* next; } ;
struct listen_dnsport {struct listen_list* cps; } ;
struct TYPE_2__ {scalar_t__ type; int * tcp_free; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(struct listen_dnsport* VAR_1)
{


 struct listen_list* VAR_2;
 for(VAR_2=VAR_1->cps; VAR_2; VAR_2=VAR_2->next) {
  if(VAR_2->com->type == VAR_0 &&
   VAR_2->com->tcp_free != ((void*)0)) {
   FUNC_0(VAR_2->com);
  }
 }
}
