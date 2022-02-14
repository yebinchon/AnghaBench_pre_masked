
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct udphdr {int ihl; int protocol; int dccph_dport; int dccph_sport; int frag_off; int dest; int source; int daddr; int saddr; } ;
struct tcphdr {int ihl; int protocol; int dccph_dport; int dccph_sport; int frag_off; int dest; int source; int daddr; int saddr; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int ihl; int protocol; int dccph_dport; int dccph_sport; int frag_off; int dest; int source; int daddr; int saddr; } ;
struct dccp_hdr {int ihl; int protocol; int dccph_dport; int dccph_sport; int frag_off; int dest; int source; int daddr; int saddr; } ;
struct TYPE_4__ {int daddr; int saddr; } ;
struct TYPE_5__ {int dport; int sport; TYPE_1__ v4info; } ;
struct TYPE_6__ {TYPE_2__ net; } ;
struct common_audit_data {TYPE_3__ u; } ;
typedef int _udph ;
typedef int _tcph ;
typedef int _iph ;
typedef int _dccph ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct udphdr* FUNC_1 (struct sk_buff*,int,int,struct udphdr*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2,
   struct common_audit_data *VAR_3, u8 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = -VAR_0;
 struct iphdr VAR_8, *VAR_9;

 VAR_5 = FUNC_2(VAR_2);
 VAR_9 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_8), &VAR_8);
 if (VAR_9 == ((void*)0))
  goto out;

 VAR_6 = VAR_9->ihl * 4;
 if (VAR_6 < sizeof(VAR_8))
  goto out;

 VAR_3->u.net.v4info.saddr = VAR_9->saddr;
 VAR_3->u.net.v4info.daddr = VAR_9->daddr;
 VAR_7 = 0;

 if (VAR_4)
  *VAR_4 = VAR_9->protocol;

 switch (VAR_9->protocol) {
 case 129: {
  struct tcphdr VAR_10, *VAR_11;

  if (FUNC_0(VAR_9->frag_off) & VAR_1)
   break;

  VAR_5 += VAR_6;
  VAR_11 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_10), &VAR_10);
  if (VAR_11 == ((void*)0))
   break;

  VAR_3->u.net.sport = VAR_11->source;
  VAR_3->u.net.dport = VAR_11->dest;
  break;
 }

 case 128: {
  struct udphdr VAR_12, *VAR_13;

  if (FUNC_0(VAR_9->frag_off) & VAR_1)
   break;

  VAR_5 += VAR_6;
  VAR_13 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_12), &VAR_12);
  if (VAR_13 == ((void*)0))
   break;

  VAR_3->u.net.sport = VAR_13->source;
  VAR_3->u.net.dport = VAR_13->dest;
  break;
 }

 case 130: {
  struct dccp_hdr VAR_14, *VAR_15;

  if (FUNC_0(VAR_9->frag_off) & VAR_1)
   break;

  VAR_5 += VAR_6;
  VAR_15 = FUNC_1(VAR_2, VAR_5, sizeof(VAR_14), &VAR_14);
  if (VAR_15 == ((void*)0))
   break;

  VAR_3->u.net.sport = VAR_15->dccph_sport;
  VAR_3->u.net.dport = VAR_15->dccph_dport;
  break;
 }

 default:
  break;
 }
out:
 return VAR_7;
}
