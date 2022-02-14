
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct udphdr {int dest; int source; } ;
struct tcphdr {int dest; int source; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int dest; int source; } ;
struct iphdr {int protocol; int frag_off; int daddr; int saddr; } ;
struct dccp_hdr {int dccph_dport; int dccph_sport; } ;
struct TYPE_4__ {int daddr; int saddr; } ;
struct TYPE_5__ {int dport; int sport; TYPE_1__ v4info; } ;
struct TYPE_6__ {TYPE_2__ net; } ;
struct common_audit_data {TYPE_3__ u; } ;


 int VAR_0 ;




 int VAR_1 ;
 struct dccp_hdr* FUNC_0 (struct sk_buff*) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 struct sctphdr* FUNC_3 (struct sk_buff*) ;
 struct tcphdr* FUNC_4 (struct sk_buff*) ;
 struct udphdr* FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct sk_buff *VAR_2,
  struct common_audit_data *VAR_3, u8 *VAR_4)
{
 int VAR_5 = 0;
 struct iphdr *VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_3->u.net.v4info.saddr = VAR_6->saddr;
 VAR_3->u.net.v4info.daddr = VAR_6->daddr;

 if (VAR_4)
  *VAR_4 = VAR_6->protocol;

 if (FUNC_2(VAR_6->frag_off) & VAR_1)
  return 0;

 switch (VAR_6->protocol) {
 case 129: {
  struct tcphdr *VAR_7 = FUNC_4(VAR_2);
  if (VAR_7 == ((void*)0))
   break;

  VAR_3->u.net.sport = VAR_7->source;
  VAR_3->u.net.dport = VAR_7->dest;
  break;
 }
 case 128: {
  struct udphdr *VAR_8 = FUNC_5(VAR_2);
  if (VAR_8 == ((void*)0))
   break;

  VAR_3->u.net.sport = VAR_8->source;
  VAR_3->u.net.dport = VAR_8->dest;
  break;
 }
 case 131: {
  struct dccp_hdr *VAR_9 = FUNC_0(VAR_2);
  if (VAR_9 == ((void*)0))
   break;

  VAR_3->u.net.sport = VAR_9->dccph_sport;
  VAR_3->u.net.dport = VAR_9->dccph_dport;
  break;
 }
 case 130: {
  struct sctphdr *VAR_10 = FUNC_3(VAR_2);
  if (VAR_10 == ((void*)0))
   break;
  VAR_3->u.net.sport = VAR_10->source;
  VAR_3->u.net.dport = VAR_10->dest;
  break;
 }
 default:
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
