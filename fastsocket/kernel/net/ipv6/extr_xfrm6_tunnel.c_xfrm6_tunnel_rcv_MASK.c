
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int saddr; } ;
typedef int __be32 ;


 int VAR_0 ;
 struct ipv6hdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1)
{
 struct ipv6hdr *VAR_2 = FUNC_0(VAR_1);
 __be32 VAR_3;

 VAR_3 = FUNC_2((xfrm_address_t *)&VAR_2->saddr);
 return FUNC_1(VAR_1, VAR_0, VAR_3) > 0 ? : 0;
}
