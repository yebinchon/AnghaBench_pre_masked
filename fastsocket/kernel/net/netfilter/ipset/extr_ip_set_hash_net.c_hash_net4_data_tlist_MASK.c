
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_net4_telem {int timeout; int cidr; int ip; } ;
struct hash_net4_elem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5(struct sk_buff *VAR_3, const struct hash_net4_elem *VAR_4)
{
 const struct hash_net4_telem *VAR_5 =
  (const struct hash_net4_telem *)VAR_4;

 FUNC_0(VAR_3, VAR_1, VAR_5->ip);
 FUNC_2(VAR_3, VAR_0, VAR_5->cidr);
 FUNC_1(VAR_3, VAR_2,
        FUNC_3(FUNC_4(VAR_5->timeout)));

 return 0;

nla_put_failure:
 return 1;
}
