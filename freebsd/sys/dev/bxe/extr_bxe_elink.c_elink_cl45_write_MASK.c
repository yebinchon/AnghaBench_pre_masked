
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {int flags; int addr; scalar_t__ mdio_ctrl; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_5 (struct bxe_softc*,scalar_t__,int ) ;
 int FUNC_6 (struct bxe_softc*,int ) ;
 int FUNC_7 (struct bxe_softc*,struct elink_phy*,int,int,int*) ;
 int FUNC_8 (struct bxe_softc*,int,scalar_t__) ;

__attribute__((used)) static elink_status_t FUNC_9(struct bxe_softc *VAR_15, struct elink_phy *VAR_16,
       uint8_t VAR_17, uint16_t VAR_18, uint16_t VAR_19)
{
 uint32_t VAR_20;
 uint8_t VAR_21;
 elink_status_t VAR_22 = VAR_5;
 uint32_t VAR_23;
 if (VAR_16->flags & VAR_3) {
  VAR_23 = (FUNC_2(VAR_15, VAR_13) << 16) |
     ((FUNC_2(VAR_15, VAR_14) & 0xf) << 12);
  FUNC_8(VAR_15, VAR_23, VAR_16->mdio_ctrl);
 }

 if (VAR_16->flags & VAR_2)
  FUNC_5(VAR_15, VAR_16->mdio_ctrl + VAR_12,
         VAR_10);


 VAR_20 = ((VAR_16->addr << 21) | (VAR_17 << 16) | VAR_18 |
        VAR_7 |
        VAR_9);
 FUNC_3(VAR_15, VAR_16->mdio_ctrl + VAR_11, VAR_20);

 for (VAR_21 = 0; VAR_21 < 50; VAR_21++) {
  FUNC_0(10);

  VAR_20 = FUNC_2(VAR_15, VAR_16->mdio_ctrl + VAR_11);
  if (!(VAR_20 & VAR_9)) {
   FUNC_0(5);
   break;
  }
 }
 if (VAR_20 & VAR_9) {
  FUNC_1(VAR_15, "write phy register failed\n");
  FUNC_6(VAR_15, VAR_4);

  VAR_22 = VAR_6;
 } else {

  VAR_20 = ((VAR_16->addr << 21) | (VAR_17 << 16) | VAR_19 |
         VAR_8 |
         VAR_9);
  FUNC_3(VAR_15, VAR_16->mdio_ctrl + VAR_11, VAR_20);

  for (VAR_21 = 0; VAR_21 < 50; VAR_21++) {
   FUNC_0(10);

   VAR_20 = FUNC_2(VAR_15, VAR_16->mdio_ctrl +
         VAR_11);
   if (!(VAR_20 & VAR_9)) {
    FUNC_0(5);
    break;
   }
  }
  if (VAR_20 & VAR_9) {
   FUNC_1(VAR_15, "write phy register failed\n");
   FUNC_6(VAR_15, VAR_4);

   VAR_22 = VAR_6;
  }
 }

 if (VAR_16->flags & VAR_1) {
  VAR_16->flags ^= VAR_0;
  if (VAR_16->flags & VAR_0) {
   uint16_t VAR_24;
   FUNC_7(VAR_15, VAR_16, VAR_17, 0xf, &VAR_24);
  }
 }
 if (VAR_16->flags & VAR_2)
  FUNC_4(VAR_15, VAR_16->mdio_ctrl + VAR_12,
          VAR_10);
 return VAR_22;
}
