
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int dummy; } ;
struct elink_phy {scalar_t__ req_line_speed; int speed_cap_mask; int* tx_preemphasis; } ;
struct elink_params {int feature_config_flags; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_2 (struct elink_phy*,struct elink_params*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct elink_params*,struct elink_phy*,struct elink_vars*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*) ;
 int FUNC_6 (struct bxe_softc*,struct elink_phy*,struct elink_params*) ;

__attribute__((used)) static elink_status_t FUNC_7(struct elink_phy *VAR_19,
      struct elink_params *VAR_20,
      struct elink_vars *VAR_21)
{
 struct bxe_softc *VAR_22 = VAR_20->sc;
 FUNC_0(VAR_22, "Initializing BCM8726\n");

 FUNC_3(VAR_22, VAR_19, VAR_10, VAR_16, 1<<15);
 FUNC_6(VAR_22, VAR_19, VAR_20);

 FUNC_2(VAR_19, VAR_20);






 FUNC_5(VAR_19, VAR_20);

 if (VAR_19->req_line_speed == VAR_1) {
  FUNC_0(VAR_22, "Setting 1G force\n");
  FUNC_3(VAR_22, VAR_19,
     VAR_10, VAR_16, 0x40);
  FUNC_3(VAR_22, VAR_19,
     VAR_10, VAR_13, 0xD);
  FUNC_3(VAR_22, VAR_19,
     VAR_10, VAR_11, 0x5);
  FUNC_3(VAR_22, VAR_19,
     VAR_10, VAR_12,
     0x400);
 } else if ((VAR_19->req_line_speed == VAR_2) &&
     (VAR_19->speed_cap_mask &
        VAR_18) &&
     ((VAR_19->speed_cap_mask &
        VAR_17) !=
      VAR_17)) {
  FUNC_0(VAR_22, "Setting 1G clause37\n");

  FUNC_4(VAR_20, VAR_19, VAR_21);
  FUNC_3(VAR_22, VAR_19,
     VAR_4, VAR_5, 0x20);
  FUNC_3(VAR_22, VAR_19,
     VAR_4, VAR_7, 0x040c);
  FUNC_3(VAR_22, VAR_19,
     VAR_4, VAR_8, 0x0020);
  FUNC_3(VAR_22, VAR_19,
     VAR_4, VAR_6, 0x1000);
  FUNC_3(VAR_22, VAR_19,
    VAR_4, VAR_9, 0x1200);



  FUNC_3(VAR_22, VAR_19,
     VAR_10, VAR_11, 0x4);
  FUNC_3(VAR_22, VAR_19,
     VAR_10, VAR_12,
     0x400);

 } else {
  FUNC_3(VAR_22, VAR_19,
     VAR_10, VAR_11, 1);
 }


 if ((VAR_20->feature_config_flags &
      VAR_0)) {
  FUNC_1(VAR_22,
     "Setting TX_CTRL1 0x%x, TX_CTRL2 0x%x\n",
    VAR_19->tx_preemphasis[0],
    VAR_19->tx_preemphasis[1]);
  FUNC_3(VAR_22, VAR_19,
     VAR_10,
     VAR_14,
     VAR_19->tx_preemphasis[0]);

  FUNC_3(VAR_22, VAR_19,
     VAR_10,
     VAR_15,
     VAR_19->tx_preemphasis[1]);
 }

 return VAR_3;

}
