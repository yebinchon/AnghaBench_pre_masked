
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ip6_elem {int ip; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int *) ;

__attribute__((used)) static bool
FUNC_1(struct sk_buff *VAR_1, const struct hash_ip6_elem *VAR_2)
{
 FUNC_0(VAR_1, VAR_0, &VAR_2->ip);
 return 0;

nla_put_failure:
 return 1;
}
