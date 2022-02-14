
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct ifnet {int if_drv_flags; int if_hwassist; } ;
struct TYPE_9__ {scalar_t__ qla_watchdog_pause; } ;
struct TYPE_10__ {TYPE_1__ flags; struct ifnet* ifp; int mac_addr; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(qla_host_t *VAR_7)
{
 struct ifnet *VAR_8 = VAR_7->ifp;

 FUNC_6(VAR_7);

 FUNC_4(VAR_7);

 if (FUNC_2(VAR_7) != 0)
  return;

 if (FUNC_3(VAR_7))
  return;

 FUNC_1(FUNC_0(VAR_7->ifp), VAR_7->mac_addr, VAR_4);

 VAR_8->if_hwassist = VAR_0;
 VAR_8->if_hwassist |= VAR_1;
 VAR_8->if_hwassist |= VAR_3;
 VAR_8->if_hwassist |= VAR_2;

  if (FUNC_5(VAR_7) == 0) {
  VAR_8 = VAR_7->ifp;
  VAR_8->if_drv_flags |= VAR_6;
  VAR_8->if_drv_flags &= ~VAR_5;
  VAR_7->flags.qla_watchdog_pause = 0;
 }

 return;
}
