
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hash_ipportnet6_telem {int timeout; int ip; } ;
struct hash_ipportnet6_elem {int proto; int cidr; int port; int ip2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int *) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static bool
FUNC_6(struct sk_buff *VAR_6,
      const struct hash_ipportnet6_elem *VAR_7)
{
 const struct hash_ipportnet6_telem *VAR_8 =
  (const struct hash_ipportnet6_telem *)VAR_7;

 FUNC_0(VAR_6, VAR_1, &VAR_8->ip);
 FUNC_0(VAR_6, VAR_2, &VAR_7->ip2);
 FUNC_1(VAR_6, VAR_3, VAR_7->port);
 FUNC_3(VAR_6, VAR_0, VAR_7->cidr);
 FUNC_3(VAR_6, VAR_4, VAR_7->proto);
 FUNC_2(VAR_6, VAR_5,
        FUNC_4(FUNC_5(VAR_8->timeout)));
 return 0;

nla_put_failure:
 return 1;
}
