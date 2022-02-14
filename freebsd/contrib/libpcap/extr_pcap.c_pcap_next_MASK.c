
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct pcap_pkthdr {int dummy; } ;
struct oneshot_userdata {TYPE_1__* pd; int const** pkt; struct pcap_pkthdr* hdr; } ;
struct TYPE_4__ {int oneshot_callback; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,int ,int *) ;

const u_char *
FUNC_1(pcap_t *VAR_0, struct pcap_pkthdr *VAR_1)
{
 struct oneshot_userdata VAR_2;
 const u_char *VAR_3;

 VAR_2.hdr = VAR_1;
 VAR_2.pkt = &VAR_3;
 VAR_2.pd = VAR_0;
 if (FUNC_0(VAR_0, 1, VAR_0->oneshot_callback, (u_char *)&VAR_2) <= 0)
  return (0);
 return (VAR_3);
}
