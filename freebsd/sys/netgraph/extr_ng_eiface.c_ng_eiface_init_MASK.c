
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
typedef TYPE_1__* priv_p ;
struct TYPE_2__ {struct ifnet* ifp; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(void *VAR_2)
{
 priv_p VAR_3 = VAR_2;
 struct ifnet *VAR_4 = VAR_3->ifp;

 VAR_4->if_drv_flags |= VAR_1;
 VAR_4->if_drv_flags &= ~VAR_0;
}
