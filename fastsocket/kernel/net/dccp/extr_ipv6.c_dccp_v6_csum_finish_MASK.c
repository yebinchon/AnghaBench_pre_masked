
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum; int len; } ;
struct in6_addr {int dummy; } ;
typedef int __sum16 ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*,struct in6_addr*,int ,int ,int ) ;

__attribute__((used)) static inline __sum16 FUNC_1(struct sk_buff *VAR_1,
          struct in6_addr *VAR_2,
          struct in6_addr *VAR_3)
{
 return FUNC_0(VAR_2, VAR_3, VAR_1->len, VAR_0, VAR_1->csum);
}
