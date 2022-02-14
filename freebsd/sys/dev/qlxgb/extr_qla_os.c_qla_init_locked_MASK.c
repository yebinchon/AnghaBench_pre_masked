
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ifnet {int if_hwassist; int if_drv_flags; } ;
struct TYPE_11__ {scalar_t__ qla_watchdog_pause; scalar_t__ stop_rcv; } ;
struct TYPE_10__ {int mac_addr; } ;
struct TYPE_12__ {TYPE_2__ flags; struct ifnet* ifp; TYPE_1__ hw; } ;
typedef TYPE_3__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_7(qla_host_t *VAR_6)
{
 struct ifnet *VAR_7 = VAR_6->ifp;

 FUNC_6(VAR_6);

 if (FUNC_3(VAR_6) != 0)
  return;

 if (FUNC_2(VAR_6) != 0)
  return;

 if (FUNC_4(VAR_6))
  return;

 FUNC_1(FUNC_0(VAR_6->ifp), VAR_6->hw.mac_addr, VAR_3);

 VAR_7->if_hwassist = VAR_0 | VAR_2 | VAR_1;

 VAR_6->flags.stop_rcv = 0;
 if (FUNC_5(VAR_6) == 0) {
  VAR_7 = VAR_6->ifp;
  VAR_7->if_drv_flags |= VAR_5;
  VAR_7->if_drv_flags &= ~VAR_4;
  VAR_6->flags.qla_watchdog_pause = 0;
 }

 return;
}
