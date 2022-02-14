
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,int) ;

__attribute__((used)) static elink_status_t FUNC_4(struct bxe_softc *VAR_8,
          struct elink_phy *VAR_9,
          uint16_t VAR_10, uint16_t *VAR_11)
{
 uint32_t VAR_12, VAR_13;
 uint16_t VAR_14;
 elink_status_t VAR_15 = VAR_0;


 VAR_13 = FUNC_2(VAR_8, VAR_9->mdio_ctrl + VAR_7);
 FUNC_3(VAR_8, VAR_9->mdio_ctrl + VAR_7,
        VAR_13 & ~VAR_5);


 VAR_12 = ((VAR_9->addr << 21) | (VAR_10 << 16) |
        VAR_2 |
        VAR_4);
 FUNC_3(VAR_8, VAR_9->mdio_ctrl + VAR_6, VAR_12);

 for (VAR_14 = 0; VAR_14 < 50; VAR_14++) {
  FUNC_0(10);

  VAR_12 = FUNC_2(VAR_8, VAR_9->mdio_ctrl + VAR_6);
  if (!(VAR_12 & VAR_4)) {
   *VAR_11 = (uint16_t)(VAR_12 & VAR_3);
   FUNC_0(5);
   break;
  }
 }
 if (VAR_12 & VAR_4) {
  FUNC_1(VAR_8, "read phy register failed\n");

  *VAR_11 = 0;
  VAR_15 = VAR_1;
 }
 FUNC_3(VAR_8, VAR_9->mdio_ctrl + VAR_7, VAR_13);
 return VAR_15;
}
