
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
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

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_8,
      struct elink_params *VAR_9,
      uint8_t VAR_10)
{
 struct bxe_softc *VAR_11 = VAR_9->sc;
 uint16_t VAR_12;

 FUNC_2(VAR_11, "elink_restart_autoneg\n");


 if (VAR_10) {
  FUNC_0(VAR_11, VAR_8,
      VAR_6,
      VAR_0,
      &VAR_12);

  FUNC_1(VAR_11, VAR_8,
      VAR_6,
      VAR_0,
      (VAR_12 |
      VAR_1 |
      VAR_2));
 } else {

  FUNC_0(VAR_11, VAR_8,
      VAR_7,
      VAR_3,
      &VAR_12);
  FUNC_3(VAR_11,
    "elink_restart_autoneg mii_control before = 0x%x\n",
    VAR_12);
  FUNC_1(VAR_11, VAR_8,
      VAR_7,
      VAR_3,
      (VAR_12 |
       VAR_4 |
       VAR_5));
 }
}
