
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_ll {scalar_t__ sll_pkttype; scalar_t__ sll_ifindex; scalar_t__ sll_protocol; } ;
struct pcap_linux {scalar_t__ lo_ifindex; } ;
struct TYPE_3__ {scalar_t__ direction; struct pcap_linux* priv; } ;
typedef TYPE_1__ pcap_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static inline int
FUNC_0(const pcap_t *VAR_5, const struct sockaddr_ll *VAR_6)
{
 struct pcap_linux *VAR_7 = VAR_5->priv;

 if (VAR_6->sll_pkttype == VAR_2) {






  if (VAR_6->sll_ifindex == VAR_7->lo_ifindex)
   return 0;
  if ((VAR_6->sll_protocol == VAR_0 ||
       VAR_6->sll_protocol == VAR_1) &&
       VAR_5->direction != VAR_4)
   return 0;




  if (VAR_5->direction == VAR_3)
   return 0;
 } else {




  if (VAR_5->direction == VAR_4)
   return 0;
 }
 return 1;
}
