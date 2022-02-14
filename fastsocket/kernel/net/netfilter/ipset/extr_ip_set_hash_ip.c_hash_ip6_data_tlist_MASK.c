
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ip6_telem {int timeout; int ip; } ;
struct hash_ip6_elem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct sk_buff *VAR_2, const struct hash_ip6_elem *VAR_3)
{
 const struct hash_ip6_telem *VAR_4 =
  (const struct hash_ip6_telem *)VAR_3;

 FUNC_0(VAR_2, VAR_0, &VAR_4->ip);
 FUNC_1(VAR_2, VAR_1,
        FUNC_2(FUNC_3(VAR_4->timeout)));
 return 0;

nla_put_failure:
 return 1;
}
