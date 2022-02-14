
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvlan {void* ifv_cookie; } ;
struct ifnet {scalar_t__ if_type; struct ifvlan* if_softc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct ifnet *VAR_2, void *VAR_3)
{
 struct ifvlan *VAR_4;

 if (VAR_2->if_type != VAR_1)
  return (VAR_0);
 VAR_4 = VAR_2->if_softc;
 VAR_4->ifv_cookie = VAR_3;
 return (0);
}
