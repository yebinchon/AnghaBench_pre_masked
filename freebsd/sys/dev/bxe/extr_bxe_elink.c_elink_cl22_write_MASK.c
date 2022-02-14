
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {int addr; scalar_t__ mdio_ctrl; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;

__attribute__((used)) static elink_status_t FUNC_4(struct bxe_softc *VAR_7,
           struct elink_phy *VAR_8,
           uint16_t VAR_9, uint16_t VAR_10)
{
 uint32_t VAR_11, VAR_12;
 uint8_t VAR_13;
 elink_status_t VAR_14 = VAR_0;

 VAR_12 = FUNC_2(VAR_7, VAR_8->mdio_ctrl + VAR_6);
 FUNC_3(VAR_7, VAR_8->mdio_ctrl + VAR_6,
        VAR_12 & ~VAR_4);


 VAR_11 = ((VAR_8->addr << 21) | (VAR_9 << 16) | VAR_10 |
        VAR_2 |
        VAR_3);
 FUNC_3(VAR_7, VAR_8->mdio_ctrl + VAR_5, VAR_11);

 for (VAR_13 = 0; VAR_13 < 50; VAR_13++) {
  FUNC_0(10);

  VAR_11 = FUNC_2(VAR_7, VAR_8->mdio_ctrl + VAR_5);
  if (!(VAR_11 & VAR_3)) {
   FUNC_0(5);
   break;
  }
 }
 if (VAR_11 & VAR_3) {
  FUNC_1(VAR_7, "write phy register failed\n");
  VAR_14 = VAR_1;
 }
 FUNC_3(VAR_7, VAR_8->mdio_ctrl + VAR_6, VAR_12);
 return VAR_14;
}
