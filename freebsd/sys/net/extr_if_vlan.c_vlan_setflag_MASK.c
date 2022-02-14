
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifvlan {int ifv_pflags; } ;
struct ifnet {int if_flags; struct ifvlan* if_softc; } ;


 struct ifnet* FUNC_0 (struct ifvlan*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ifnet*,int) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_0, int VAR_1, int VAR_2,
      int (*VAR_3)(struct ifnet *, int))
{
 struct ifvlan *VAR_4;
 int VAR_5;

 FUNC_1();

 VAR_4 = VAR_0->if_softc;
 VAR_2 = VAR_2 ? (VAR_0->if_flags & VAR_1) : 0;
 if (VAR_2 != (VAR_4->ifv_pflags & VAR_1)) {
  VAR_5 = (*VAR_3)(FUNC_0(VAR_4), VAR_2);
  if (VAR_5)
   return (VAR_5);
  VAR_4->ifv_pflags &= ~VAR_1;
  VAR_4->ifv_pflags |= VAR_2;
 }
 return (0);
}
