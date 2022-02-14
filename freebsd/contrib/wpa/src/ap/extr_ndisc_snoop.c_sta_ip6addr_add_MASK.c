
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta_info {int ip6addr; } ;
struct ip6addr {int list; int addr; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,struct in6_addr*,int) ;
 struct ip6addr* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct sta_info *VAR_0, struct in6_addr *VAR_1)
{
 struct ip6addr *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2));
 if (!VAR_2)
  return -1;

 FUNC_1(&VAR_2->addr, VAR_1, sizeof(*VAR_1));

 FUNC_0(&VAR_0->ip6addr, &VAR_2->list);

 return 0;
}
