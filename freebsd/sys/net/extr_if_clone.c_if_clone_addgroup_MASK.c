
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct if_clone {int ifc_flags; int ifc_name; } ;


 int VAR_0 ;
 int FUNC_0 (struct if_clone*) ;
 int FUNC_1 (struct ifnet*,int ) ;

void
FUNC_2(struct ifnet *VAR_1, struct if_clone *VAR_2)
{
 if ((VAR_2->ifc_flags & VAR_0) == 0) {
  FUNC_1(VAR_1, VAR_2->ifc_name);
  FUNC_0(VAR_2);
 }
}
