
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int FUNC_3 (struct bxe_softc*,char*,int) ;
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
 int FUNC_4 (struct elink_phy*,struct elink_params*,int ) ;

__attribute__((used)) static void FUNC_5(struct elink_phy *VAR_14,
      struct elink_params *VAR_15)
{
 struct bxe_softc *VAR_16 = VAR_15->sc;
 uint16_t VAR_17, VAR_18, VAR_19;
 FUNC_2(VAR_16, "elink_check_fallback_to_cl37\n");

 FUNC_0(VAR_16, VAR_14,
     VAR_8,
     VAR_12,
     &VAR_17);
 if ((VAR_17 & VAR_13) !=
     (VAR_13)) {
  FUNC_3(VAR_16, "Signal is not detected. Restoring CL73."
        "rx_status(0x80b0) = 0x%x\n", VAR_17);
  FUNC_1(VAR_16, VAR_14,
      VAR_5,
      VAR_0,
      VAR_1);
  return;
 }

 FUNC_0(VAR_16, VAR_14,
     VAR_6,
     VAR_2,
     &VAR_18);
 if ((VAR_18 &
      (VAR_4 |
       VAR_3)) !=
     (VAR_4 |
       VAR_3)) {
  FUNC_3(VAR_16, "CL73 state-machine is not stable. "
        "ustat_val(0x8371) = 0x%x\n", VAR_18);
  return;
 }



 FUNC_0(VAR_16, VAR_14,
     VAR_7,
     VAR_9,
     &VAR_19);
 if ((VAR_19 &
      (VAR_11 |
      VAR_10)) !=
     (VAR_11 |
       VAR_10)) {
  FUNC_3(VAR_16, "No CL37 FSM were received. "
        "misc_rx_status(0x8330) = 0x%x\n",
    VAR_19);
  return;
 }







 FUNC_1(VAR_16, VAR_14,
     VAR_5,
     VAR_0,
     0);

 FUNC_4(VAR_14, VAR_15, 0);
 FUNC_2(VAR_16, "Disabling CL73, and restarting CL37 autoneg\n");
}
