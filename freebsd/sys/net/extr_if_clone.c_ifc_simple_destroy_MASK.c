
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_dunit; } ;
struct if_clone {int ifcs_minifs; int (* ifcs_destroy ) (struct ifnet*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct if_clone*,int) ;
 int FUNC_1 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_2(struct if_clone *VAR_1, struct ifnet *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_2->if_dunit;

 if (VAR_3 < VAR_1->ifcs_minifs)
  return (VAR_0);

 VAR_1->ifcs_destroy(VAR_2);

 FUNC_0(VAR_1, VAR_3);

 return (0);
}
