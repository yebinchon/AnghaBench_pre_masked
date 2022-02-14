
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ipv6_txoptions {scalar_t__ hopopt; scalar_t__ dst0opt; scalar_t__ srcrt; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int *,int ,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int *,scalar_t__,struct in6_addr**) ;

void FUNC_2(struct sk_buff *VAR_2, struct ipv6_txoptions *VAR_3,
     u8 *VAR_4,
     struct in6_addr **VAR_5)
{
 if (VAR_3->srcrt) {
  FUNC_1(VAR_2, VAR_4, VAR_3->srcrt, VAR_5);




  if (VAR_3->dst0opt)
   FUNC_0(VAR_2, VAR_4, VAR_0, VAR_3->dst0opt);
 }
 if (VAR_3->hopopt)
  FUNC_0(VAR_2, VAR_4, VAR_1, VAR_3->hopopt);
}
