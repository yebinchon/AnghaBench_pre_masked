
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int speed_cap_mask; scalar_t__ type; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int FUNC_3 (struct bxe_softc*,char*,int,int) ;
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
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_4(struct elink_phy *VAR_15,
      struct elink_params *VAR_16)
{
 struct bxe_softc *VAR_17 = VAR_16->sc;
 uint16_t VAR_18;
 FUNC_0(VAR_17, VAR_15,
     VAR_5,
     VAR_7,
     &VAR_18);
 if (VAR_15->speed_cap_mask & VAR_13)
  VAR_18 |= VAR_8;
 else
  VAR_18 &= ~VAR_8;
 FUNC_3(VAR_17, "phy->speed_cap_mask = 0x%x, control2 = 0x%x\n",
  VAR_15->speed_cap_mask, VAR_18);
 FUNC_1(VAR_17, VAR_15,
     VAR_5,
     VAR_7,
     VAR_18);

 if ((VAR_15->type == VAR_14) &&
      (VAR_15->speed_cap_mask &
      VAR_12)) {
  FUNC_2(VAR_17, "XGXS\n");

  FUNC_1(VAR_17, VAR_15,
     VAR_4,
     VAR_2,
     VAR_3);

  FUNC_0(VAR_17, VAR_15,
      VAR_4,
      VAR_0,
      &VAR_18);


  VAR_18 |=
      VAR_1;

  FUNC_1(VAR_17, VAR_15,
      VAR_4,
      VAR_0,
      VAR_18);


  FUNC_1(VAR_17, VAR_15,
      VAR_6,
      VAR_9,
      VAR_10 |
      VAR_11);
 }
}
