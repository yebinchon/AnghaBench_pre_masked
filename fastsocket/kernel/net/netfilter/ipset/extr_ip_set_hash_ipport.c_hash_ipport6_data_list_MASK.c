
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ipport6_elem {int proto; int port; int ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool
FUNC_3(struct sk_buff *VAR_3,
         const struct hash_ipport6_elem *VAR_4)
{
 FUNC_0(VAR_3, VAR_0, &VAR_4->ip);
 FUNC_1(VAR_3, VAR_1, VAR_4->port);
 FUNC_2(VAR_3, VAR_2, VAR_4->proto);
 return 0;

nla_put_failure:
 return 1;
}
