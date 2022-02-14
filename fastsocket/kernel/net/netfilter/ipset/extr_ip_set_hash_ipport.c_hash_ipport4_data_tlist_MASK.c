
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ipport4_telem {int timeout; int port; int ip; } ;
struct hash_ipport4_elem {int proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(struct sk_buff *VAR_4,
   const struct hash_ipport4_elem *VAR_5)
{
 const struct hash_ipport4_telem *VAR_6 =
  (const struct hash_ipport4_telem *)VAR_5;

 FUNC_0(VAR_4, VAR_0, VAR_6->ip);
 FUNC_1(VAR_4, VAR_1, VAR_6->port);
 FUNC_3(VAR_4, VAR_2, VAR_5->proto);
 FUNC_2(VAR_4, VAR_3,
        FUNC_4(FUNC_5(VAR_6->timeout)));

 return 0;

nla_put_failure:
 return 1;
}
