
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;

__attribute__((used)) static elink_status_t FUNC_4(struct bxe_softc *VAR_12,
     uint8_t VAR_13,
     uint16_t VAR_14,
     uint8_t VAR_15,
     uint8_t VAR_16,
     uint32_t *VAR_17)
{
 uint32_t VAR_18, VAR_19;
 elink_status_t VAR_20 = VAR_1;

 if (VAR_16 > 16) {
  FUNC_1(VAR_12, "invalid xfer_cnt %d. Max is 16 bytes\n",
     VAR_16);
  return VAR_0;
 }

 VAR_16 = 16 - VAR_15;


 VAR_18 = FUNC_2(VAR_12, VAR_9);
 VAR_18 |= VAR_3;
 FUNC_3(VAR_12, VAR_9, VAR_18);


 VAR_18 = (VAR_13 << 16) | VAR_14;
 FUNC_3(VAR_12, VAR_11, VAR_18);


 VAR_18 = (VAR_3) |
       (VAR_8 <<
  VAR_5) |
  (VAR_15 << VAR_7) | (0);
 FUNC_3(VAR_12, VAR_9, VAR_18);


 VAR_19 = 0;
 VAR_18 = FUNC_2(VAR_12, VAR_9);
 while (((VAR_18 >> VAR_4) & 0x3) != 1) {
  FUNC_0(10);
  VAR_18 = FUNC_2(VAR_12, VAR_9);
  if (VAR_19++ > 1000) {
   FUNC_1(VAR_12, "wr 0 byte timed out after %d try\n",
        VAR_19);
   VAR_20 = VAR_2;
   break;
  }
 }
 if (VAR_20 == VAR_2)
  return VAR_20;


 VAR_18 = (VAR_3) |
  (VAR_6 <<
  VAR_5) |
  (VAR_15 << VAR_7) |
    (VAR_16);
 FUNC_3(VAR_12, VAR_9, VAR_18);


 VAR_19 = 0;
 VAR_18 = FUNC_2(VAR_12, VAR_9);
 while (((VAR_18 >> VAR_4) & 0x3) != 1) {
  FUNC_0(10);
  VAR_18 = FUNC_2(VAR_12, VAR_9);
  if (VAR_19++ > 1000) {
   FUNC_1(VAR_12, "rd op timed out after %d try\n", VAR_19);
   VAR_20 = VAR_2;
   break;
  }
 }
 if (VAR_20 == VAR_2)
  return VAR_20;

 for (VAR_19 = (VAR_15 >> 2); VAR_19 < 4; VAR_19++) {
  VAR_17[VAR_19] = FUNC_2(VAR_12, (VAR_10 + VAR_19*4));






 }
 return VAR_20;
}
