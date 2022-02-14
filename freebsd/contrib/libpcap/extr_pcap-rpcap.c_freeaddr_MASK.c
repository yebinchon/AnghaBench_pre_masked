
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcap_addr {struct pcap_addr* dstaddr; struct pcap_addr* broadaddr; struct pcap_addr* netmask; struct pcap_addr* addr; } ;


 int FUNC_0 (struct pcap_addr*) ;

__attribute__((used)) static void
FUNC_1(struct pcap_addr *VAR_0)
{
 FUNC_0(VAR_0->addr);
 FUNC_0(VAR_0->netmask);
 FUNC_0(VAR_0->broadaddr);
 FUNC_0(VAR_0->dstaddr);
 FUNC_0(VAR_0);
}
