
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ee_errno; scalar_t__ ee_data; int ee_info; scalar_t__ ee_pad; scalar_t__ ee_code; scalar_t__ ee_type; int ee_origin; } ;
struct sock_exterr_skb {int port; int * addr_offset; TYPE_1__ ee; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ipv6hdr {int daddr; } ;
struct ipv6_pinfo {int recverr; } ;
struct flowi {int fl_ip_dport; int fl6_dst; } ;


 int VAR_0 ;
 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 struct ipv6_pinfo* FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int *) ;
 struct ipv6hdr* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sock*,struct sk_buff*) ;

void FUNC_13(struct sock *VAR_2, int VAR_3, struct flowi *VAR_4, u32 VAR_5)
{
 struct ipv6_pinfo *VAR_6 = FUNC_3(VAR_2);
 struct sock_exterr_skb *VAR_7;
 struct ipv6hdr *VAR_8;
 struct sk_buff *VAR_9;

 if (!VAR_6->recverr)
  return;

 VAR_9 = FUNC_2(sizeof(struct ipv6hdr), VAR_0);
 if (!VAR_9)
  return;

 FUNC_8(VAR_9, sizeof(struct ipv6hdr));
 FUNC_9(VAR_9);
 VAR_8 = FUNC_5(VAR_9);
 FUNC_4(&VAR_8->daddr, &VAR_4->fl6_dst);

 VAR_7 = FUNC_0(VAR_9);
 VAR_7->ee.ee_errno = VAR_3;
 VAR_7->ee.ee_origin = VAR_1;
 VAR_7->ee.ee_type = 0;
 VAR_7->ee.ee_code = 0;
 VAR_7->ee.ee_pad = 0;
 VAR_7->ee.ee_info = VAR_5;
 VAR_7->ee.ee_data = 0;
 VAR_7->addr_offset = (u8 *)&VAR_8->daddr - FUNC_7(VAR_9);
 VAR_7->port = VAR_4->fl_ip_dport;

 FUNC_1(VAR_9, FUNC_11(VAR_9) - VAR_9->data);
 FUNC_10(VAR_9);

 if (FUNC_12(VAR_2, VAR_9))
  FUNC_6(VAR_9);
}
