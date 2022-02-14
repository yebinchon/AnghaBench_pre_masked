
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_tnl_net {int dummy; } ;
struct ip6_tnl {struct ip6_tnl* next; int parms; } ;


 struct ip6_tnl** FUNC_0 (struct ip6_tnl_net*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ip6_tnl_net *VAR_1, struct ip6_tnl *VAR_2)
{
 struct ip6_tnl **VAR_3;

 for (VAR_3 = FUNC_0(VAR_1, &VAR_2->parms); *VAR_3; VAR_3 = &(*VAR_3)->next) {
  if (VAR_2 == *VAR_3) {
   FUNC_1(&VAR_0);
   *VAR_3 = VAR_2->next;
   FUNC_2(&VAR_0);
   break;
  }
 }
}
