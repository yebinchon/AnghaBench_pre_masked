
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int link_up; int phy_flags; int mac_type; int flow_ctrl; int duplex; int line_speed; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_1 (struct elink_params*,struct elink_vars*,int) ;

__attribute__((used)) static void FUNC_2(struct elink_params *VAR_6,
         struct elink_vars *VAR_7)
{
 struct bxe_softc *VAR_8 = VAR_6->sc;
 VAR_7->link_up = 1;
 VAR_7->line_speed = VAR_3;
 VAR_7->duplex = VAR_0;
 VAR_7->flow_ctrl = VAR_1;
 VAR_7->mac_type = VAR_2;
 VAR_7->phy_flags = VAR_5;
 FUNC_1(VAR_6, VAR_7, 1);

 FUNC_0(VAR_8, VAR_4 + VAR_6->port*4, 0);
}
