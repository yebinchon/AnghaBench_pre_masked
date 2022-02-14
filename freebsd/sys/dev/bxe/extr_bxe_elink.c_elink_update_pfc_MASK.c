
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_vars {scalar_t__ mac_type; int flow_ctrl; int link_up; int link_status; } ;
struct elink_params {scalar_t__ loopback_mode; int feature_config_flags; int port; struct bxe_softc* sc; } ;
struct elink_nig_brb_pfc_port_params {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct bxe_softc*,int ) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_5 (struct elink_params*,struct elink_vars*,int ) ;
 int FUNC_6 (struct elink_params*,int ) ;
 int FUNC_7 (struct elink_params*,struct elink_vars*) ;
 int FUNC_8 (struct elink_params*,struct elink_vars*,int) ;
 int FUNC_9 (struct elink_params*,struct elink_vars*,struct elink_nig_brb_pfc_port_params*) ;
 int FUNC_10 (struct elink_params*,struct elink_vars*,int ) ;

elink_status_t FUNC_11(struct elink_params *VAR_9,
        struct elink_vars *VAR_10,
        struct elink_nig_brb_pfc_port_params *VAR_11)
{




 uint32_t VAR_12;
 struct bxe_softc *VAR_13 = VAR_9->sc;
 uint8_t VAR_14 = (VAR_9->loopback_mode == VAR_2);

 if (VAR_9->feature_config_flags & VAR_0)
  VAR_10->link_status |= VAR_5;
 else
  VAR_10->link_status &= ~VAR_5;

 FUNC_6(VAR_9, VAR_10->link_status);


 FUNC_9(VAR_9, VAR_10, VAR_11);

 if (!VAR_10->link_up)
  return VAR_4;

 FUNC_2(VAR_13, "About to update PFC in BMAC\n");

 if (FUNC_1(VAR_13)) {
  if (VAR_10->mac_type == VAR_3)
   FUNC_10(VAR_9, VAR_10, 0);
 } else {
  VAR_12 = FUNC_3(VAR_13, VAR_7);
  if ((VAR_12 &
       (VAR_6 << VAR_9->port))
      == 0) {
   FUNC_2(VAR_13, "About to update PFC in EMAC\n");
   FUNC_5(VAR_9, VAR_10, 0);
   return VAR_4;
  }
  if (FUNC_0(VAR_13))
   FUNC_8(VAR_9, VAR_10, VAR_14);
  else
   FUNC_7(VAR_9, VAR_10);

  VAR_12 = 0;
  if ((VAR_9->feature_config_flags &
       VAR_0) ||
      (VAR_10->flow_ctrl & VAR_1))
   VAR_12 = 1;
  FUNC_4(VAR_13, VAR_8 + VAR_9->port*4, VAR_12);
 }
 return VAR_4;
}
