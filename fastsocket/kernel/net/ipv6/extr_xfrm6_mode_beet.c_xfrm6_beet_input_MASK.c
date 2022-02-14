
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int a6; } ;
struct TYPE_4__ {int a6; } ;
struct TYPE_6__ {TYPE_2__ saddr; TYPE_1__ daddr; } ;
struct xfrm_state {TYPE_3__ sel; } ;
struct sk_buff {int mac_len; scalar_t__ len; } ;
struct ipv6hdr {int saddr; int daddr; int payload_len; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,struct in6_addr*) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct xfrm_state *VAR_0, struct sk_buff *VAR_1)
{
 struct ipv6hdr *VAR_2;
 const unsigned char *VAR_3;
 int VAR_4 = sizeof(struct ipv6hdr);
 int VAR_5;

 VAR_5 = FUNC_5(VAR_1, VAR_4 + VAR_1->mac_len);
 if (VAR_5)
  goto out;

 FUNC_0(VAR_1, VAR_4);
 FUNC_7(VAR_1);

 VAR_3 = FUNC_6(VAR_1);
 FUNC_8(VAR_1, -VAR_1->mac_len);
 FUNC_4(FUNC_6(VAR_1), VAR_3, VAR_1->mac_len);

 FUNC_9(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 VAR_2->payload_len = FUNC_1(VAR_1->len - VAR_4);
 FUNC_2(&VAR_2->daddr, (struct in6_addr *) &VAR_0->sel.daddr.a6);
 FUNC_2(&VAR_2->saddr, (struct in6_addr *) &VAR_0->sel.saddr.a6);
 VAR_5 = 0;
out:
 return VAR_5;
}
