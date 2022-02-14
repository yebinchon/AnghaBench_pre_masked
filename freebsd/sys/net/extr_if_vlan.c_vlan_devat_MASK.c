
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ifvlantrunk {int dummy; } ;
struct ifvlan {struct ifnet* ifv_ifp; } ;
struct ifnet {struct ifvlantrunk* if_vlantrunk; } ;


 int FUNC_0 () ;
 struct ifvlan* FUNC_1 (struct ifvlantrunk*,int ) ;

__attribute__((used)) static struct ifnet *
FUNC_2(struct ifnet *VAR_0, uint16_t VAR_1)
{
 struct ifvlantrunk *VAR_2;
 struct ifvlan *VAR_3;

 FUNC_0();

 VAR_2 = VAR_0->if_vlantrunk;
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_0 = ((void*)0);
 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (VAR_3)
  VAR_0 = VAR_3->ifv_ifp;
 return (VAR_0);
}
