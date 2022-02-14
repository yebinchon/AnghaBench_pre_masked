
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct ifnet {struct ifaddr* if_addr; } ;
struct ifaddr {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct ifaddr*) ;
 struct ifnet* FUNC_2 (int ) ;

struct ifaddr *
FUNC_3(u_short VAR_0)
{
 struct ifnet *VAR_1;
 struct ifaddr *VAR_2 = ((void*)0);

 FUNC_0();

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 != ((void*)0) && (VAR_2 = VAR_1->if_addr) != ((void*)0))
  FUNC_1(VAR_2);
 return (VAR_2);
}
