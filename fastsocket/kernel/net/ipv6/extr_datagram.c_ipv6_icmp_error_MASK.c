
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ee_errno; scalar_t__ ee_data; int ee_info; scalar_t__ ee_pad; int ee_code; int ee_type; int ee_origin; } ;
struct sock_exterr_skb {int port; int * addr_offset; TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct sk_buff {int data; } ;
struct ipv6hdr {int daddr; } ;
struct ipv6_pinfo {int recverr; } ;
struct icmp6hdr {int icmp6_code; int icmp6_type; } ;
typedef int __be16 ;


 int VAR_0 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,int *) ;
 struct icmp6hdr* FUNC_2 (struct sk_buff*) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;

void FUNC_9(struct sock *VAR_2, struct sk_buff *VAR_3, int VAR_4,
       __be16 VAR_5, u32 VAR_6, u8 *VAR_7)
{
 struct ipv6_pinfo *VAR_8 = FUNC_3(VAR_2);
 struct icmp6hdr *VAR_9 = FUNC_2(VAR_3);
 struct sock_exterr_skb *VAR_10;

 if (!VAR_8->recverr)
  return;

 VAR_3 = FUNC_5(VAR_3, VAR_0);
 if (!VAR_3)
  return;

 VAR_10 = FUNC_0(VAR_3);
 VAR_10->ee.ee_errno = VAR_4;
 VAR_10->ee.ee_origin = VAR_1;
 VAR_10->ee.ee_type = VAR_9->icmp6_type;
 VAR_10->ee.ee_code = VAR_9->icmp6_code;
 VAR_10->ee.ee_pad = 0;
 VAR_10->ee.ee_info = VAR_6;
 VAR_10->ee.ee_data = 0;
 VAR_10->addr_offset = (u8 *)&(((struct ipv6hdr *)(VAR_9 + 1))->daddr) -
      FUNC_6(VAR_3);
 VAR_10->port = VAR_5;

 FUNC_1(VAR_3, VAR_7 - VAR_3->data);
 FUNC_7(VAR_3);

 if (FUNC_8(VAR_2, VAR_3))
  FUNC_4(VAR_3);
}
