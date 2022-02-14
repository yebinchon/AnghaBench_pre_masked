
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_mtu; } ;
struct domain {int dom_family; int (* dom_ifmtu ) (struct ifnet*) ;struct domain* dom_next; } ;
typedef scalar_t__ if_t ;


 struct domain* VAR_0 ;
 int FUNC_0 (struct ifnet*) ;

int
FUNC_1(if_t VAR_1, int VAR_2)
{
 struct domain *VAR_3;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->dom_next) {
  if (VAR_3->dom_family == VAR_2 && VAR_3->dom_ifmtu != ((void*)0))
   return (VAR_3->dom_ifmtu((struct ifnet *)VAR_1));
 }

 return (((struct ifnet *)VAR_1)->if_mtu);
}
