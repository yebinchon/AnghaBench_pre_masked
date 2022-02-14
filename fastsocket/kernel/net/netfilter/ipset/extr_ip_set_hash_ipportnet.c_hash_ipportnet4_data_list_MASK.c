
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ipportnet4_elem {int proto; int cidr; int port; int ip2; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_5,
     const struct hash_ipportnet4_elem *VAR_6)
{
 FUNC_0(VAR_5, VAR_1, VAR_6->ip);
 FUNC_0(VAR_5, VAR_2, VAR_6->ip2);
 FUNC_1(VAR_5, VAR_3, VAR_6->port);
 FUNC_2(VAR_5, VAR_0, VAR_6->cidr);
 FUNC_2(VAR_5, VAR_4, VAR_6->proto);
 return 0;

nla_put_failure:
 return 1;
}
