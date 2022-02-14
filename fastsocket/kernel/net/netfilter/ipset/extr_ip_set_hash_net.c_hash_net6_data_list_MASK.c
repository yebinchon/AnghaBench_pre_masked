
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_net6_elem {int cidr; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_2(struct sk_buff *VAR_2, const struct hash_net6_elem *VAR_3)
{
 FUNC_0(VAR_2, VAR_1, &VAR_3->ip);
 FUNC_1(VAR_2, VAR_0, VAR_3->cidr);
 return 0;

nla_put_failure:
 return 1;
}
