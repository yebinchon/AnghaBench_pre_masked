
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct elink_vars {int link_up; scalar_t__ line_speed; int duplex; int flow_ctrl; } ;
struct elink_phy {int flags; int (* config_loopback ) (struct elink_phy*,struct elink_params*) ;} ;
struct elink_params {scalar_t__* req_line_speed; scalar_t__ loopback_mode; size_t num_phys; int port; struct elink_phy* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct bxe_softc*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct elink_params*,struct elink_vars*,int ,int) ;
 int FUNC_3 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_4 (struct elink_params*,struct elink_vars*) ;
 int FUNC_5 (struct elink_params*,struct elink_vars*) ;
 int FUNC_6 (struct elink_params*,struct elink_vars*,int ,scalar_t__) ;
 int FUNC_7 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_8 (struct elink_params*) ;
 int FUNC_9 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_10 (struct elink_phy*,struct elink_params*) ;
 int FUNC_11 (struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static void FUNC_12(struct elink_params *VAR_11,
         struct elink_vars *VAR_12)
{
 struct bxe_softc *VAR_13 = VAR_11->sc;
 struct elink_phy *VAR_14 = &VAR_11->phy[VAR_4];
 VAR_12->link_up = 1;
 VAR_12->flow_ctrl = VAR_3;
 VAR_12->duplex = VAR_0;
 if (VAR_11->req_line_speed[0] == VAR_7)
  VAR_12->line_speed = VAR_7;
 else if ((VAR_11->req_line_speed[0] == VAR_9) ||
   (VAR_14->flags & VAR_2))
  VAR_12->line_speed = VAR_9;
 else
  VAR_12->line_speed = VAR_8;

 if (!FUNC_1(VAR_13))
  FUNC_8(VAR_11);
 FUNC_5(VAR_11, VAR_12);

 if (VAR_11->req_line_speed[0] == VAR_7) {
  if (FUNC_1(VAR_13))
   FUNC_7(VAR_11, VAR_12, 0);
  else {
   FUNC_4(VAR_11, VAR_12);
   FUNC_3(VAR_11, VAR_12, 0);
  }
 } else {
  if (FUNC_1(VAR_13))
   FUNC_9(VAR_11, VAR_12, 0);
  else
   FUNC_2(VAR_11, VAR_12, 0, 1);
 }

 if (VAR_11->loopback_mode == VAR_6) {

  VAR_14->config_loopback(VAR_14, VAR_11);
 } else {

  uint8_t VAR_15;
  for (VAR_15 = VAR_1;
        VAR_15 < VAR_11->num_phys; VAR_15++)
   if (VAR_11->phy[VAR_15].config_loopback)
    VAR_11->phy[VAR_15].config_loopback(
     &VAR_11->phy[VAR_15],
     VAR_11);
 }
 FUNC_0(VAR_13, VAR_10 + VAR_11->port*4, 0);

 FUNC_6(VAR_11, VAR_12, VAR_5, VAR_12->line_speed);
}
