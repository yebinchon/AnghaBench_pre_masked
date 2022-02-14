
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvlan {void* ifv_cookie; } ;
struct ifnet {scalar_t__ if_type; struct ifvlan* if_softc; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void *
FUNC_0(struct ifnet *VAR_1)
{
 struct ifvlan *VAR_2;

 if (VAR_1->if_type != VAR_0)
  return (((void*)0));
 VAR_2 = VAR_1->if_softc;
 return (VAR_2->ifv_cookie);
}
