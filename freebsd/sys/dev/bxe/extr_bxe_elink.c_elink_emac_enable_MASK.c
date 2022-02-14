
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct elink_vars {int phy_flags; int flow_ctrl; int mac_type; } ;
struct elink_params {int port; int lane_config; int feature_config_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_4 (struct bxe_softc*,int) ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_6 (struct bxe_softc*,int,int) ;
 int FUNC_7 (struct bxe_softc*,int,int) ;
 int FUNC_8 (struct bxe_softc*,int,int) ;

__attribute__((used)) static elink_status_t FUNC_9(struct elink_params *VAR_49,
        struct elink_vars *VAR_50, uint8_t VAR_51)
{
 struct bxe_softc *VAR_52 = VAR_49->sc;
 uint8_t VAR_53 = VAR_49->port;
 uint32_t VAR_54 = VAR_53 ? VAR_29 : VAR_28;
 uint32_t VAR_55;

 FUNC_3(VAR_52, "enabling EMAC\n");


 FUNC_5(VAR_52, VAR_30 + VAR_31,
        (VAR_32 << VAR_53));


 FUNC_5(VAR_52, VAR_39 + VAR_53*4, 1);
 if (VAR_50->phy_flags & VAR_46) {
  uint32_t VAR_56 = ((VAR_49->lane_config &
     VAR_47) >>
    VAR_48);

  FUNC_3(VAR_52, "XGXS\n");

  FUNC_5(VAR_52, VAR_44 + VAR_53*4, VAR_56);

  FUNC_5(VAR_52, VAR_45 + VAR_53*4, 1);

 } else {
  FUNC_3(VAR_52, "SerDes\n");

  FUNC_5(VAR_52, VAR_45 + VAR_53*4, 0);
 }

 FUNC_7(VAR_52, VAR_54 + VAR_9,
        VAR_23);
 FUNC_7(VAR_52, VAR_54 + VAR_11,
        VAR_27);
  FUNC_6(VAR_52, VAR_54 + VAR_9,
          VAR_19);

  FUNC_6(VAR_52, VAR_54 + VAR_11,
          (VAR_25 |
    VAR_26));
  if (!(VAR_49->feature_config_flags &
        VAR_2)) {
   if (VAR_50->flow_ctrl & VAR_3)
    FUNC_7(VAR_52, VAR_54 +
           VAR_9,
           VAR_19);

   if (VAR_50->flow_ctrl & VAR_4)
    FUNC_7(VAR_52, VAR_54 +
           VAR_11,
           (VAR_25 |
            VAR_26));
  } else
   FUNC_7(VAR_52, VAR_54 + VAR_11,
          VAR_26);





 VAR_55 = FUNC_4(VAR_52, VAR_54 + VAR_9);
 VAR_55 |= VAR_21 | VAR_22;
 FUNC_8(VAR_52, VAR_54 + VAR_12, 0);
 if (VAR_49->feature_config_flags & VAR_2) {
  FUNC_3(VAR_52, "PFC is enabled\n");

  FUNC_8(VAR_52, VAR_54 + VAR_12,
   VAR_14 |
   VAR_15 |
   VAR_13);

  FUNC_8(VAR_52, VAR_54 + VAR_16,
   ((0x0101 <<
     VAR_17) |
    (0x00ff <<
     VAR_18)));
  VAR_55 |= VAR_20;
 }
 FUNC_8(VAR_52, VAR_54 + VAR_9, VAR_55);


 VAR_55 = FUNC_4(VAR_52, VAR_54 + VAR_8);
 if (VAR_51)
  VAR_55 |= 0x810;
 else
  VAR_55 &= ~0x810;
 FUNC_8(VAR_52, VAR_54 + VAR_8, VAR_55);


 FUNC_5(VAR_52, VAR_42 + VAR_53*4, 1);


 FUNC_8(VAR_52, VAR_54 + VAR_10,
  (VAR_24 |
   (VAR_0 + VAR_1)));


 FUNC_5(VAR_52, VAR_43 + VAR_53*4, 0x1);


 FUNC_5(VAR_52, VAR_34 + VAR_53*4, 0x0);
 FUNC_5(VAR_52, VAR_36 + VAR_53*4, 0x0);
 FUNC_5(VAR_52, VAR_35 + VAR_53*4, 0x0);


 FUNC_5(VAR_52, VAR_40 + VAR_53*4, 0x1);
 VAR_55 = 0;
 if ((VAR_49->feature_config_flags &
       VAR_2) ||
     (VAR_50->flow_ctrl & VAR_4))
  VAR_55 = 1;

 FUNC_5(VAR_52, VAR_41 + VAR_53*4, VAR_55);
 FUNC_5(VAR_52, VAR_38 + VAR_53*4, 0x1);
 FUNC_5(VAR_52, VAR_37 + VAR_53*4, 0x0);

 VAR_50->mac_type = VAR_5;
 return VAR_6;
}
