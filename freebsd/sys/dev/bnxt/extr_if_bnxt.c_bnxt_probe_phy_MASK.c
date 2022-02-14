
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_link_info {scalar_t__ auto_mode; int autoneg; int force_link_speed; int req_link_speed; int auto_link_speed; int duplex_setting; int req_duplex; } ;
struct bnxt_softc {int dev; struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnxt_softc*,int) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct bnxt_softc *VAR_2)
{
 struct bnxt_link_info *VAR_3 = &VAR_2->link_info;
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_2, 0);
 if (VAR_4) {
  FUNC_1(VAR_2->dev,
      "Probe phy can't update link (rc: %x)\n", VAR_4);
  return (VAR_4);
 }


 if (VAR_3->auto_mode != VAR_1)
  VAR_3->autoneg |= VAR_0;

 VAR_3->req_duplex = VAR_3->duplex_setting;
 if (VAR_3->autoneg & VAR_0)
  VAR_3->req_link_speed = VAR_3->auto_link_speed;
 else
  VAR_3->req_link_speed = VAR_3->force_link_speed;
 return (VAR_4);
}
