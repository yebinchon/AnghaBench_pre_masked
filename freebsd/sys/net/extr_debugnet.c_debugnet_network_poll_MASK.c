
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {TYPE_1__* if_debugnet_methods; } ;
struct debugnet_pcb {struct ifnet* dp_ifp; } ;
struct TYPE_2__ {int (* dn_poll ) (struct ifnet*,int) ;} ;


 int FUNC_0 (struct ifnet*,int) ;

void
FUNC_1(struct debugnet_pcb *VAR_0)
{
 struct ifnet *VAR_1;

 VAR_1 = VAR_0->dp_ifp;
 VAR_1->if_debugnet_methods->dn_poll(VAR_1, 1000);
}
