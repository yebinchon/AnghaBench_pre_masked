
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct pcap_win {int * adapter; } ;
struct TYPE_5__ {int errbuf; struct pcap_win* priv; } ;
typedef TYPE_1__ pcap_t ;
struct TYPE_6__ {int len; int buffer; } ;
typedef TYPE_2__ pcap_send_queue ;
typedef int BOOLEAN ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static u_int
FUNC_4(pcap_t *VAR_1, pcap_send_queue *VAR_2, int VAR_3)
{
 struct pcap_win *VAR_4 = VAR_1->priv;
 u_int VAR_5;
 char VAR_6[VAR_0+1];

 if (VAR_4->adapter==((void*)0)) {
  FUNC_2(VAR_1->errbuf, VAR_0,
      "Cannot transmit a queue to an offline capture or to a TurboCap port");
  return (0);
 }

 VAR_5 = FUNC_1(VAR_4->adapter,
  VAR_2->buffer,
  VAR_2->len,
  (BOOLEAN)VAR_3);

 if(VAR_5 != VAR_2->len){
  FUNC_3(FUNC_0(), VAR_6);
  FUNC_2(VAR_1->errbuf, VAR_0,
      "Error opening adapter: %s", VAR_6);
 }

 return (VAR_5);
}
