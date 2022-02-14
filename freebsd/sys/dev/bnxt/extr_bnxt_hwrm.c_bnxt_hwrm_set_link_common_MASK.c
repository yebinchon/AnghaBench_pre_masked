
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct hwrm_port_phy_cfg_input {int flags; int force_link_speed; int enables; int auto_mode; } ;
struct TYPE_2__ {int autoneg; int req_link_speed; } ;
struct bnxt_softc {TYPE_1__ link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bnxt_softc *VAR_6,
    struct hwrm_port_phy_cfg_input *VAR_7)
{
 uint8_t VAR_8 = VAR_6->link_info.autoneg;
 uint16_t VAR_9 = VAR_6->link_info.req_link_speed;

 if (VAR_8 & VAR_0) {
  VAR_7->auto_mode |=
      VAR_1;

  VAR_7->enables |=
      FUNC_1(VAR_2);
  VAR_7->flags |=
      FUNC_1(VAR_5);
 } else {
  VAR_7->force_link_speed = FUNC_0(VAR_9);
  VAR_7->flags |= FUNC_1(VAR_3);
 }


 VAR_7->flags |= FUNC_1(VAR_4);
}
