
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_8__ {struct ifnet* ifp; } ;
typedef TYPE_1__ qlnx_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(qlnx_host_t *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2->ifp;

 FUNC_0(VAR_2, "Driver Initialization start \n");

 FUNC_3(VAR_2);

 if (FUNC_1(VAR_2) == 0) {

  VAR_3->if_drv_flags |= VAR_1;
  VAR_3->if_drv_flags &= ~VAR_0;






 }

 return;
}
