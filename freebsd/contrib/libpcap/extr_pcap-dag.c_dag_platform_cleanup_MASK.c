
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct pcap_dag {int * dag_ref; int dag_stream; } ;
struct TYPE_5__ {int fd; struct pcap_dag* priv; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(pcap_t *VAR_2)
{
 struct pcap_dag *VAR_3 = VAR_2->priv;

 if(FUNC_2(VAR_2->fd, VAR_3->dag_stream) < 0)
  FUNC_4(VAR_1,"dag_stop_stream: %s\n", FUNC_6(VAR_0));

 if(FUNC_1(VAR_2->fd, VAR_3->dag_stream) < 0)
  FUNC_4(VAR_1,"dag_detach_stream: %s\n", FUNC_6(VAR_0));

 if(VAR_3->dag_ref != ((void*)0)) {
  FUNC_0(VAR_3->dag_ref);
  VAR_2->fd = -1;
  VAR_3->dag_ref = ((void*)0);
 }
 FUNC_3(VAR_2);
 FUNC_5(VAR_2);

}
