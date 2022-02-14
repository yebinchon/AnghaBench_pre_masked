
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tx; int rx; int autoneg; } ;
struct TYPE_3__ {int tx; int rx; int autoneg; } ;
struct bnxt_link_info {scalar_t__ link_up; scalar_t__ last_link_up; int link_speed; TYPE_2__ flow_ctrl; TYPE_1__ last_flow_ctrl; int duplex; int last_duplex; } ;
struct bnxt_softc {int media; int dev; struct bnxt_link_info link_info; int ctx; } ;


 int FUNC_0 (struct bnxt_link_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnxt_softc*) ;
 int FUNC_3 (struct bnxt_link_info*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

void
FUNC_8(struct bnxt_softc *VAR_5)
{
 struct bnxt_link_info *VAR_6 = &VAR_5->link_info;
 const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);

 if (VAR_6->link_up == VAR_6->last_link_up) {
  if (!VAR_6->link_up)
   return;
  if ((VAR_6->duplex == VAR_6->last_duplex) &&
                    (!(FUNC_0(VAR_6))))
   return;
 }

 if (VAR_6->link_up) {
  if (VAR_6->duplex ==
      VAR_0)
   VAR_7 = "full duplex";
  else
   VAR_7 = "half duplex";
  if (VAR_6->flow_ctrl.tx & VAR_6->flow_ctrl.rx)
   VAR_8 = "FC - receive & transmit";
  else if (VAR_6->flow_ctrl.tx)
   VAR_8 = "FC - transmit";
  else if (VAR_6->flow_ctrl.rx)
   VAR_8 = "FC - receive";
  else
   VAR_8 = "FC - none";
  FUNC_5(VAR_5->ctx, VAR_4,
      FUNC_1(100));
  FUNC_4(VAR_5->dev, "Link is UP %s, %s - %d Mbps \n", VAR_7,
      VAR_8, (VAR_6->link_speed * 100));
 } else {
  FUNC_5(VAR_5->ctx, VAR_3,
      FUNC_3(&VAR_5->link_info));
  FUNC_4(VAR_5->dev, "Link is Down\n");
 }

 VAR_6->last_link_up = VAR_6->link_up;
 VAR_6->last_duplex = VAR_6->duplex;
 VAR_6->last_flow_ctrl.tx = VAR_6->flow_ctrl.tx;
 VAR_6->last_flow_ctrl.rx = VAR_6->flow_ctrl.rx;
 VAR_6->last_flow_ctrl.autoneg = VAR_6->flow_ctrl.autoneg;

 FUNC_6(VAR_5->media);
 FUNC_2(VAR_5);
 FUNC_7(VAR_5->media, VAR_2 | VAR_1);
}
