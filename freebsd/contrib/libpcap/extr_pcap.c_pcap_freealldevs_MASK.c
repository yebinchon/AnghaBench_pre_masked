
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* description; struct TYPE_5__* name; struct TYPE_5__* dstaddr; struct TYPE_5__* broadaddr; struct TYPE_5__* netmask; struct TYPE_5__* addr; struct TYPE_5__* next; struct TYPE_5__* addresses; } ;
typedef TYPE_1__ pcap_if_t ;
typedef TYPE_1__ pcap_addr_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(pcap_if_t *VAR_0)
{
 pcap_if_t *VAR_1, *VAR_2;
 pcap_addr_t *VAR_3, *VAR_4;

 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;




  for (VAR_3 = VAR_1->addresses; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
   VAR_4 = VAR_3->next;
   if (VAR_3->addr)
    FUNC_0(VAR_3->addr);
   if (VAR_3->netmask)
    FUNC_0(VAR_3->netmask);
   if (VAR_3->broadaddr)
    FUNC_0(VAR_3->broadaddr);
   if (VAR_3->dstaddr)
    FUNC_0(VAR_3->dstaddr);
   FUNC_0(VAR_3);
  }




  FUNC_0(VAR_1->name);




  if (VAR_1->description != ((void*)0))
   FUNC_0(VAR_1->description);




  FUNC_0(VAR_1);
 }
}
