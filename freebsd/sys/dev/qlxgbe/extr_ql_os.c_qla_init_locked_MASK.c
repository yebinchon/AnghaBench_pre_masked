
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ifnet {int if_hwassist; int if_drv_flags; } ;
struct TYPE_11__ {int sp_log_stop_events; int sp_log_stop; int mac_addr; } ;
struct TYPE_12__ {int qla_interface_up; scalar_t__ qla_watchdog_pause; TYPE_1__ hw; scalar_t__ tx_tso_frames; scalar_t__ hw_vlan_tx_frames; struct ifnet* ifp; scalar_t__ stop_rcv; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ifnet*) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(qla_host_t *VAR_8)
{
 struct ifnet *VAR_9 = VAR_8->ifp;

 FUNC_3(VAR_8, 14, 0, 0, 0, 0, 0, 0);

 FUNC_8(VAR_8);

 if (FUNC_6(VAR_8) != 0)
  return;

 FUNC_7(VAR_8);

 if (FUNC_5(VAR_8) != 0)
  return;

 FUNC_1(FUNC_0(VAR_8->ifp), VAR_8->hw.mac_addr, VAR_5);

 VAR_9->if_hwassist = VAR_0 | VAR_3 | VAR_2;
 VAR_9->if_hwassist |= VAR_1 | VAR_4;

 VAR_8->stop_rcv = 0;
  if (FUNC_2(VAR_8) == 0) {
  VAR_9 = VAR_8->ifp;
  VAR_9->if_drv_flags |= VAR_6;
  VAR_8->hw_vlan_tx_frames = 0;
  VAR_8->tx_tso_frames = 0;
  VAR_8->qla_interface_up = 1;
  FUNC_4(VAR_8);
 } else {
  if (VAR_8->hw.sp_log_stop_events & VAR_7)
   VAR_8->hw.sp_log_stop = -1;
 }

 VAR_8->qla_watchdog_pause = 0;

 return;
}
