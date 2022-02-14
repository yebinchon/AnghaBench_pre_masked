
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct elink_params*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*,scalar_t__,int,int ,scalar_t__,int *) ;
 int FUNC_4 (struct elink_params*,int) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_phy *VAR_5,
       struct elink_params *VAR_6,
       uint8_t VAR_7,
       uint16_t VAR_8, uint8_t VAR_9,
       uint8_t *VAR_10, uint8_t VAR_11)
{
 elink_status_t VAR_12 = VAR_2;
 uint8_t VAR_13, VAR_14 = 0, VAR_15 = 0;
 uint32_t VAR_16[4];
 uint16_t VAR_17;
 struct bxe_softc *VAR_18 = VAR_6->sc;

 if (VAR_9 > VAR_0) {
  FUNC_1(VAR_18,
     "Reading from eeprom is limited to 16 bytes\n");
  return VAR_1;
 }


 VAR_17 = VAR_8 & (~0x3);
 do {
  if ((!VAR_11) && (VAR_15 == VAR_3)) {
   FUNC_4(VAR_6, 0);

   FUNC_0(1000 * 1);
   FUNC_4(VAR_6, 1);
  }

  FUNC_2(VAR_6);
  VAR_12 = FUNC_3(VAR_18, VAR_7, VAR_17, 0, VAR_9,
        VAR_16);
 } while ((VAR_12 != VAR_2) && (++VAR_15 < VAR_4));

 if (VAR_12 == VAR_2) {
  for (VAR_13 = (VAR_8 - VAR_17); VAR_13 < VAR_9 + (VAR_8 - VAR_17); VAR_13++) {
   VAR_10[VAR_14] = *((uint8_t *)VAR_16 + VAR_13);
   VAR_14++;
  }
 }

 return VAR_12;
}
