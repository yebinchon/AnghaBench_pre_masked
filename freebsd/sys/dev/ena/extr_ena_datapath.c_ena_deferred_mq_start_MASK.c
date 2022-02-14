
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int dummy; } ;
struct ena_ring {scalar_t__ running; int br; TYPE_1__* adapter; } ;
struct TYPE_2__ {struct ifnet* ifp; } ;


 int FUNC_0 (struct ena_ring*) ;
 int FUNC_1 (struct ena_ring*) ;
 int VAR_0 ;
 int FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ena_ring*) ;
 int FUNC_4 (struct ifnet*) ;

void
FUNC_5(void *VAR_1, int VAR_2)
{
 struct ena_ring *VAR_3 = (struct ena_ring *)VAR_1;
 struct ifnet *VAR_4 = VAR_3->adapter->ifp;

 while (!FUNC_2(VAR_4, VAR_3->br) &&
     VAR_3->running &&
     (FUNC_4(VAR_4) & VAR_0) != 0) {
  FUNC_0(VAR_3);
  FUNC_3(VAR_3);
  FUNC_1(VAR_3);
 }
}
