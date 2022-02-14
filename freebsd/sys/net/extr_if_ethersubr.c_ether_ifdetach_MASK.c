
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_dl {int dummy; } ;
struct ifnet {int * if_l2com; TYPE_1__* if_addr; } ;
struct TYPE_2__ {scalar_t__ ifa_addr; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sockaddr_dl*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct ifnet *VAR_0)
{
 struct sockaddr_dl *VAR_1;

 VAR_1 = (struct sockaddr_dl *)(VAR_0->if_addr->ifa_addr);
 FUNC_6(FUNC_1(VAR_1));

 if (VAR_0->if_l2com != ((void*)0)) {
  FUNC_0(&FUNC_4 != ((void*)0),
      ("ng_ether_detach_p is NULL"));
  FUNC_4)(VAR_0);
 }

 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
