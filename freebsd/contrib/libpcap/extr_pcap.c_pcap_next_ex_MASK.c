
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct pcap_pkthdr {int dummy; } ;
struct oneshot_userdata {TYPE_1__* pd; int const** pkt; struct pcap_pkthdr* hdr; } ;
struct TYPE_5__ {int (* read_op ) (TYPE_1__*,int,int ,int *) ;int oneshot_callback; int * rfile; struct pcap_pkthdr pcap_header; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (TYPE_1__*,int,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int,int ,int *) ;

int
FUNC_2(pcap_t *VAR_0, struct pcap_pkthdr **VAR_1,
    const u_char **VAR_2)
{
 struct oneshot_userdata VAR_3;

 VAR_3.hdr = &VAR_0->pcap_header;
 VAR_3.pkt = VAR_2;
 VAR_3.pd = VAR_0;


 *VAR_1= &VAR_0->pcap_header;

 if (VAR_0->rfile != ((void*)0)) {
  int VAR_4;


  VAR_4 = FUNC_0(VAR_0, 1, VAR_0->oneshot_callback,
      (u_char *)&VAR_3);
  if (VAR_4 == 0)
   return (-2);
  else
   return (VAR_4);
 }
 return (VAR_0->read_op(VAR_0, 1, VAR_0->oneshot_callback, (u_char *)&VAR_3));
}
