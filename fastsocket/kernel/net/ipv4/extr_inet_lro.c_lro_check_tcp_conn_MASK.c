
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {scalar_t__ source; scalar_t__ dest; } ;
struct net_lro_desc {TYPE_2__* tcph; TYPE_1__* iph; } ;
struct iphdr {scalar_t__ saddr; scalar_t__ daddr; } ;
struct TYPE_4__ {scalar_t__ source; scalar_t__ dest; } ;
struct TYPE_3__ {scalar_t__ saddr; scalar_t__ daddr; } ;



__attribute__((used)) static int FUNC_0(struct net_lro_desc *VAR_0,
         struct iphdr *VAR_1,
         struct tcphdr *VAR_2)
{
 if ((VAR_0->iph->saddr != VAR_1->saddr)
     || (VAR_0->iph->daddr != VAR_1->daddr)
     || (VAR_0->tcph->source != VAR_2->source)
     || (VAR_0->tcph->dest != VAR_2->dest))
  return -1;
 return 0;
}
