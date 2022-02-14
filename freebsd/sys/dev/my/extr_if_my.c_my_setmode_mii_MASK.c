
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct my_softc {int my_dev; scalar_t__ my_want_auto; scalar_t__ my_autoneg; int my_autoneg_timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct my_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct my_softc*,int ) ;
 int FUNC_5 (struct my_softc*,int ,int) ;
 int FUNC_6 (struct my_softc*,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8(struct my_softc * VAR_12, int VAR_13)
{
 u_int16_t VAR_14;

 FUNC_1(VAR_12);



 if (VAR_12->my_autoneg) {
  FUNC_3(VAR_12->my_dev, "canceling autoneg session\n");
  FUNC_2(&VAR_12->my_autoneg_timer);
  VAR_12->my_autoneg = VAR_12->my_want_auto = 0;
  VAR_14 = FUNC_4(VAR_12, VAR_6);
  VAR_14 &= ~VAR_8;
  FUNC_5(VAR_12, VAR_6, VAR_14);
 }
 FUNC_3(VAR_12->my_dev, "selecting MII, ");
 VAR_14 = FUNC_4(VAR_12, VAR_6);
 VAR_14 &= ~(VAR_8 | VAR_11 | VAR_7 |
    VAR_9 | VAR_10);
 if (FUNC_0(VAR_13) == VAR_1) {
  FUNC_7("100Mbps/T4, half-duplex\n");
  VAR_14 |= VAR_11;
  VAR_14 &= ~VAR_9;
 }
 if (FUNC_0(VAR_13) == VAR_2) {
  FUNC_7("100Mbps, ");
  VAR_14 |= VAR_11;
 }
 if (FUNC_0(VAR_13) == VAR_3) {
  FUNC_7("10Mbps, ");
  VAR_14 &= ~VAR_11;
 }
 if ((VAR_13 & VAR_5) == VAR_4) {
  FUNC_7("full duplex\n");
  VAR_14 |= VAR_9;
 } else {
  FUNC_7("half duplex\n");
  VAR_14 &= ~VAR_9;
 }
 FUNC_5(VAR_12, VAR_6, VAR_14);
 FUNC_6(VAR_12, VAR_14);
 return;
}
