
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_3__ {int qla_initiate_recovery; int offline; scalar_t__ enable_error_recovery; struct ifnet* ifp; } ;
typedef TYPE_1__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(qla_host_t *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2->ifp;

 if (!VAR_1 && VAR_2->enable_error_recovery) {
  if (VAR_3)
   VAR_3->if_drv_flags &= ~VAR_0;
  VAR_2->qla_initiate_recovery = 1;
 } else
  VAR_2->offline = 1;
 return;
}
