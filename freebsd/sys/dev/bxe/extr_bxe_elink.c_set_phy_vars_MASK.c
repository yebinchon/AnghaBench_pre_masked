
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct elink_vars {int link_status; } ;
struct elink_params {scalar_t__ multi_phy_config; scalar_t__ num_phys; scalar_t__* req_line_speed; TYPE_1__* phy; int * req_duplex; int * speed_cap_mask; int * req_flow_ctrl; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ req_line_speed; int speed_cap_mask; int req_flow_ctrl; int req_duplex; } ;


 int FUNC_0 (struct bxe_softc*,char*,int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void FUNC_2(struct elink_params *VAR_6,
    struct elink_vars *VAR_7)
{
 struct bxe_softc *VAR_8 = VAR_6->sc;
 uint8_t VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12 = VAR_6->multi_phy_config &
   VAR_5;
 for (VAR_10 = VAR_2; VAR_10 < VAR_6->num_phys;
       VAR_10++) {
  VAR_11 = FUNC_1(VAR_10);
  VAR_9 = VAR_10;
  if (VAR_12) {
   if (VAR_10 == VAR_0)
    VAR_9 = VAR_1;
   else if (VAR_10 == VAR_1)
    VAR_9 = VAR_0;
  }
  VAR_6->phy[VAR_9].req_flow_ctrl =
   VAR_6->req_flow_ctrl[VAR_11];

  VAR_6->phy[VAR_9].req_line_speed =
   VAR_6->req_line_speed[VAR_11];

  VAR_6->phy[VAR_9].speed_cap_mask =
   VAR_6->speed_cap_mask[VAR_11];

  VAR_6->phy[VAR_9].req_duplex =
   VAR_6->req_duplex[VAR_11];

  if (VAR_6->req_line_speed[VAR_11] ==
      VAR_3)
   VAR_7->link_status |= VAR_4;

  FUNC_0(VAR_8, "req_flow_ctrl %x, req_line_speed %x,"
      " speed_cap_mask %x\n",
      VAR_6->phy[VAR_9].req_flow_ctrl,
      VAR_6->phy[VAR_9].req_line_speed,
      VAR_6->phy[VAR_9].speed_cap_mask);
 }
}
