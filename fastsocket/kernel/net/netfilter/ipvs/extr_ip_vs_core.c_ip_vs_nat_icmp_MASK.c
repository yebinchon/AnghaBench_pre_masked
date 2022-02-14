
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int ip_summed; } ;
struct iphdr {int ihl; scalar_t__ protocol; int saddr; int daddr; } ;
struct ip_vs_protocol {int dummy; } ;
struct TYPE_4__ {int ip; } ;
struct TYPE_3__ {int ip; } ;
struct ip_vs_conn {int dport; int vport; TYPE_2__ daddr; TYPE_1__ vaddr; } ;
struct icmphdr {scalar_t__ checksum; } ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,struct ip_vs_protocol*,struct sk_buff*,int,char*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

void FUNC_5(struct sk_buff *VAR_4, struct ip_vs_protocol *VAR_5,
      struct ip_vs_conn *VAR_6, int VAR_7)
{
 struct iphdr *VAR_8 = FUNC_1(VAR_4);
 unsigned int VAR_9 = VAR_8->ihl*4;
 struct icmphdr *VAR_10 = (struct icmphdr *)(FUNC_4(VAR_4) +
            VAR_9);
 struct iphdr *VAR_11 = (struct iphdr *)(VAR_10 + 1);

 if (VAR_7) {
  VAR_8->saddr = VAR_6->vaddr.ip;
  FUNC_2(VAR_8);
  VAR_11->daddr = VAR_6->vaddr.ip;
  FUNC_2(VAR_11);
 } else {
  VAR_8->daddr = VAR_6->daddr.ip;
  FUNC_2(VAR_8);
  VAR_11->saddr = VAR_6->daddr.ip;
  FUNC_2(VAR_11);
 }


 if (VAR_2 == VAR_11->protocol || VAR_3 == VAR_11->protocol ||
     VAR_1 == VAR_11->protocol) {
  __be16 *VAR_12 = (void *)VAR_11 + VAR_11->ihl*4;

  if (VAR_7)
   VAR_12[1] = VAR_6->vport;
  else
   VAR_12[0] = VAR_6->dport;
 }


 VAR_10->checksum = 0;
 VAR_10->checksum = FUNC_3(VAR_4, VAR_9);
 VAR_4->ip_summed = VAR_0;

 if (VAR_7)
  FUNC_0(11, VAR_5, VAR_4, (void *)VAR_11 - (void *)VAR_8,
   "Forwarding altered outgoing ICMP");
 else
  FUNC_0(11, VAR_5, VAR_4, (void *)VAR_11 - (void *)VAR_8,
   "Forwarding altered incoming ICMP");
}
