
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ifnet*) ;
 struct ifnet* FUNC_2 (int ) ;

struct ifnet *
FUNC_3(u_short VAR_1)
{
 struct ifnet *VAR_2;

 FUNC_0();

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == ((void*)0) || (VAR_2->if_flags & VAR_0))
  return (((void*)0));
 FUNC_1(VAR_2);
 return (VAR_2);
}
