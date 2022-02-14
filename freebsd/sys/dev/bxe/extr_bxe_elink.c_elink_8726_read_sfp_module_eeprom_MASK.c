
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int FUNC_2 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,scalar_t__,int*) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,scalar_t__,int) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_phy *VAR_12,
          struct elink_params *VAR_13,
          uint8_t VAR_14, uint16_t VAR_15, uint8_t VAR_16,
          uint8_t *VAR_17, uint8_t VAR_18)
{
 struct bxe_softc *VAR_19 = VAR_13->sc;
 uint16_t VAR_20 = 0;
 uint16_t VAR_21;
 if (VAR_16 > VAR_0) {
  FUNC_1(VAR_19,
     "Reading from eeprom is limited to 0xf\n");
  return VAR_1;
 }

 FUNC_4(VAR_19, VAR_12,
    VAR_3, VAR_6,
    (VAR_16 | (VAR_14 << 8)));


 FUNC_4(VAR_19, VAR_12,
    VAR_3, VAR_9,
    VAR_15);


 FUNC_4(VAR_19, VAR_12,
    VAR_3, VAR_7,
    0x2c0f);


 for (VAR_21 = 0; VAR_21 < 100; VAR_21++) {
  FUNC_3(VAR_19, VAR_12,
    VAR_3,
    VAR_7, &VAR_20);
  if ((VAR_20 & VAR_8) ==
      VAR_10)
   break;
  FUNC_0(5);
 }

 if ((VAR_20 & VAR_8) !=
      VAR_10) {
  FUNC_2(VAR_19,
    "Got bad status 0x%x when reading from SFP+ EEPROM\n",
    (VAR_20 & VAR_8));
  return VAR_1;
 }


 for (VAR_21 = 0; VAR_21 < VAR_16; VAR_21++) {
  FUNC_3(VAR_19, VAR_12,
    VAR_3,
    VAR_4 + VAR_21, &VAR_20);
  VAR_17[VAR_21] = (uint8_t)(VAR_20 & VAR_5);
 }

 for (VAR_21 = 0; VAR_21 < 100; VAR_21++) {
  FUNC_3(VAR_19, VAR_12,
    VAR_3,
    VAR_7, &VAR_20);
  if ((VAR_20 & VAR_8) ==
      VAR_11)
   return VAR_2;
  FUNC_0(1000 * 1);
 }
 return VAR_1;
}
