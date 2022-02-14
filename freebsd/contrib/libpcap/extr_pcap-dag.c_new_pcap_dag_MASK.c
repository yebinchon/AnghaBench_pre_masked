
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pcap_t ;
struct TYPE_4__ {int pid; int * p; struct TYPE_4__* next; } ;
typedef TYPE_1__ pcap_dag_node_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_3)
{
 pcap_dag_node_t *VAR_4 = ((void*)0);

 if ((VAR_4 = FUNC_2(sizeof(pcap_dag_node_t))) == ((void*)0)) {
  return -1;
 }

 if (!VAR_1) {
  FUNC_0(VAR_0);
  VAR_1 = 1;
 }

 VAR_4->next = VAR_2;
 VAR_4->p = VAR_3;
 VAR_4->pid = FUNC_1();

 VAR_2 = VAR_4;

 return 0;
}
