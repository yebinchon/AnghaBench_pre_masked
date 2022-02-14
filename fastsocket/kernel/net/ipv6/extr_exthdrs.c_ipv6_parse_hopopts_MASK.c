
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int transport_header; } ;
struct ipv6hdr {int dummy; } ;
struct inet6_skb_parm {int hop; int nhoff; } ;


 struct inet6_skb_parm* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int* FUNC_4 (struct sk_buff*) ;
 int VAR_0 ;

int FUNC_5(struct sk_buff *VAR_1)
{
 struct inet6_skb_parm *VAR_2 = FUNC_0(VAR_1);







 if (!FUNC_3(VAR_1, sizeof(struct ipv6hdr) + 8) ||
     !FUNC_3(VAR_1, (sizeof(struct ipv6hdr) +
     ((FUNC_4(VAR_1)[1] + 1) << 3)))) {
  FUNC_2(VAR_1);
  return -1;
 }

 VAR_2->hop = sizeof(struct ipv6hdr);
 if (FUNC_1(VAR_0, VAR_1)) {
  VAR_1->transport_header += (FUNC_4(VAR_1)[1] + 1) << 3;
  VAR_2 = FUNC_0(VAR_1);
  VAR_2->nhoff = sizeof(struct ipv6hdr);
  return 1;
 }
 return -1;
}
