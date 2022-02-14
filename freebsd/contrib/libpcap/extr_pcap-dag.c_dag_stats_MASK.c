
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pcap_stat {int ps_drop; } ;
struct pcap_dag {scalar_t__ drop_attr; struct pcap_stat stat; int dag_ref; } ;
struct TYPE_3__ {int errbuf; struct pcap_dag* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int dag_err_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_3, struct pcap_stat *VAR_4) {
 struct pcap_dag *VAR_5 = VAR_3->priv;
 uint32_t VAR_6;
 dag_err_t VAR_7;
 if(VAR_5->drop_attr != VAR_2) {



  if ((VAR_7 = FUNC_0(VAR_5->dag_ref, VAR_5->drop_attr, &VAR_6) == VAR_1)) {
   VAR_5->stat.ps_drop = VAR_6;
  } else {
   FUNC_2(VAR_3->errbuf, VAR_0, "reading stream drop attribute: %s",
     FUNC_1(VAR_7));
   return -1;
  }
 }

 *VAR_4 = VAR_5->stat;

 return 0;
}
