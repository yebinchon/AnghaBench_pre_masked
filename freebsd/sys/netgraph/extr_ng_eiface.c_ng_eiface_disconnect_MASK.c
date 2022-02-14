
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int hook_p ;
struct TYPE_5__ {int if_vnet; } ;
struct TYPE_4__ {TYPE_2__* ifp; int link_status; int * ether; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_2)
{
 const priv_p VAR_3 = FUNC_3(FUNC_2(VAR_2));

 VAR_3->ether = ((void*)0);
 VAR_3->link_status &= ~VAR_0;
 FUNC_1(VAR_3->ifp->if_vnet);
 FUNC_4(VAR_3->ifp, VAR_1);
 FUNC_0();
 return (0);
}
