
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
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int,int*) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int,int) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_phy *VAR_14,
          struct elink_params *VAR_15,
          uint8_t VAR_16, uint16_t VAR_17, uint8_t VAR_18,
          uint8_t *VAR_19, uint8_t VAR_20)
{
 struct bxe_softc *VAR_21 = VAR_15->sc;
 uint16_t VAR_22, VAR_23;

 if (VAR_18 > VAR_0) {
  FUNC_1(VAR_21,
     "Reading from eeprom is limited to 0xf\n");
  return VAR_1;
 }





 FUNC_4(VAR_21, VAR_14,
    VAR_4,
    VAR_7,
    ((VAR_16 << 8) | 1));


 FUNC_3(VAR_21, VAR_14,
   VAR_4,
   VAR_9,
   &VAR_22);


 FUNC_4(VAR_21, VAR_14,
    VAR_4,
    VAR_8,
    ((VAR_18 < 2) ? 2 : VAR_18));


 FUNC_4(VAR_21, VAR_14,
    VAR_4,
    VAR_11,
    VAR_17);

 FUNC_4(VAR_21, VAR_14,
    VAR_4,
    0x8004,
    VAR_5);


 FUNC_4(VAR_21, VAR_14,
    VAR_4,
    VAR_9,
    0x8002);



 FUNC_0(1000 * 1);


 for (VAR_23 = 0; VAR_23 < 100; VAR_23++) {
  FUNC_3(VAR_21, VAR_14,
    VAR_4,
    VAR_9, &VAR_22);
  if ((VAR_22 & VAR_10) ==
      VAR_12)
   break;
  FUNC_0(5);
 }

 if ((VAR_22 & VAR_10) !=
      VAR_12) {
  FUNC_2(VAR_21,
    "Got bad status 0x%x when reading from SFP+ EEPROM\n",
    (VAR_22 & VAR_10));
  return VAR_3;
 }


 for (VAR_23 = 0; VAR_23 < VAR_18; VAR_23++) {
  FUNC_3(VAR_21, VAR_14,
    VAR_4,
    VAR_5 + VAR_23, &VAR_22);
  VAR_19[VAR_23] = (uint8_t)(VAR_22 & VAR_6);
 }

 for (VAR_23 = 0; VAR_23 < 100; VAR_23++) {
  FUNC_3(VAR_21, VAR_14,
    VAR_4,
    VAR_9, &VAR_22);
  if ((VAR_22 & VAR_10) ==
      VAR_13)
   return VAR_2;
  FUNC_0(1000 * 1);
 }

 return VAR_1;
}
