
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pcap_t ;
struct TYPE_3__ {struct TYPE_3__* next; int * p; } ;
typedef TYPE_1__ pcap_dag_node_t ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_0(pcap_t *VAR_1)
{
 pcap_dag_node_t *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

 for (VAR_3 = ((void*)0), VAR_2 = VAR_0; VAR_2 != ((void*)0) && VAR_2->p != VAR_1; VAR_3 = VAR_2, VAR_2 = VAR_2->next) {

 }

 if (VAR_2 != ((void*)0) && VAR_2->p == VAR_1) {
  if (VAR_3 != ((void*)0)) {
   VAR_3->next = VAR_2->next;
  } else {
   VAR_0 = VAR_2->next;
  }
 }
}
