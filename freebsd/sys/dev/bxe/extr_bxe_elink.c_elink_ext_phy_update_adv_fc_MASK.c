
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int dummy; } ;
struct elink_phy {scalar_t__ type; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 scalar_t__ FUNC_2 (struct elink_params*) ;
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
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int,int*) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*) ;
 int FUNC_6 (struct elink_phy*,struct elink_params*,struct elink_vars*,int) ;

__attribute__((used)) static void FUNC_7(struct elink_phy *VAR_11,
     struct elink_params *VAR_12,
     struct elink_vars *VAR_13)
{
 uint16_t VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;
 struct bxe_softc *VAR_17 = VAR_12->sc;
 if (VAR_11->type == VAR_10) {
  FUNC_3(VAR_17, VAR_11, 0x4, &VAR_14);
  FUNC_3(VAR_17, VAR_11, 0x5, &VAR_15);
 } else if (FUNC_0(VAR_17) &&
  FUNC_2(VAR_12)) {
  uint8_t VAR_18 = FUNC_5(VAR_11, VAR_12);
  uint16_t VAR_19, VAR_20;
  FUNC_4(VAR_17, VAR_11,
    VAR_0, VAR_7,
    &VAR_19);
  VAR_20 = (VAR_9 |
      VAR_8) <<
   VAR_18;
  if ((VAR_19 & VAR_20) == VAR_20) {
   FUNC_4(VAR_17, VAR_11, VAR_0,
     VAR_1, &VAR_14);
   FUNC_4(VAR_17, VAR_11, VAR_0,
     VAR_5, &VAR_15);
  } else {
   FUNC_4(VAR_17, VAR_11, VAR_0,
     VAR_3, &VAR_14);
   FUNC_4(VAR_17, VAR_11, VAR_0,
     VAR_4, &VAR_15);
   VAR_14 = ((VAR_14 &
         VAR_6)
        << 3);
   VAR_15 = ((VAR_15 &
         VAR_6)
        << 3);
  }
 } else {
  FUNC_4(VAR_17, VAR_11,
    VAR_0,
    VAR_1, &VAR_14);
  FUNC_4(VAR_17, VAR_11,
    VAR_0,
    VAR_5, &VAR_15);
 }
 VAR_16 = (VAR_14 &
   VAR_2) >> 8;
 VAR_16 |= (VAR_15 &
    VAR_2) >> 10;
 FUNC_1(VAR_17, "Ext PHY pause result 0x%x\n", VAR_16);
 FUNC_6(VAR_11, VAR_12, VAR_13, VAR_16);

}
