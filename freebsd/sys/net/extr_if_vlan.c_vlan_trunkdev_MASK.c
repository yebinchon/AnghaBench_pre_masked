
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvlan {scalar_t__ ifv_trunk; } ;
struct ifnet {scalar_t__ if_type; struct ifvlan* if_softc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 struct ifnet* FUNC_1 (struct ifvlan*) ;

__attribute__((used)) static struct ifnet *
FUNC_2(struct ifnet *VAR_1)
{
 struct ifvlan *VAR_2;

 FUNC_0();

 if (VAR_1->if_type != VAR_0)
  return (((void*)0));

 VAR_2 = VAR_1->if_softc;
 VAR_1 = ((void*)0);
 if (VAR_2->ifv_trunk)
  VAR_1 = FUNC_1(VAR_2);
 return (VAR_1);
}
