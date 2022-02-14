
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e61xxphy_softc {int dummy; } ;
struct mv88e61xxphy_port_softc {int sc_port; int sc_domain; int sc_priority; int sc_vlan; struct mv88e61xxphy_softc* sc_switch; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct mv88e61xxphy_port_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct mv88e61xxphy_port_softc *VAR_16)
{
 struct mv88e61xxphy_softc *VAR_17;
 unsigned VAR_18;

 VAR_17 = VAR_16->sc_switch;


 if (VAR_16->sc_port != VAR_1) {

  FUNC_0(VAR_16, VAR_11, 0x0003);
 } else {

  FUNC_0(VAR_16, VAR_11, 0x003e);
 }


 FUNC_0(VAR_16, VAR_12, 0x0000);


 if (VAR_16->sc_port != VAR_1) {
  FUNC_0(VAR_16, VAR_3, 0x04bc);
 } else {




  FUNC_0(VAR_16, VAR_3, 0x063f);
 }

 if (VAR_16->sc_port != VAR_1) {

  FUNC_0(VAR_16, VAR_4, 0x0000);
 } else {

  FUNC_0(VAR_16, VAR_4, 0x8000);
 }
 if (VAR_16->sc_port != VAR_1) {
  VAR_18 = 1 << VAR_1;
 } else {
  VAR_18 = (1 << VAR_2) - 1;
  VAR_18 &= ~(1 << VAR_1);
 }
 FUNC_0(VAR_16, VAR_15,
     (VAR_16->sc_domain << 12) | VAR_18);


 FUNC_0(VAR_16, VAR_14,
     (VAR_16->sc_priority << 14) | VAR_16->sc_vlan);

 if (VAR_16->sc_port == VAR_1) {

  FUNC_0(VAR_16, VAR_13,
      VAR_0);


  FUNC_0(VAR_16, VAR_5,
      VAR_0);


  FUNC_0(VAR_16, VAR_6,
      VAR_10 |
      VAR_7 |
      VAR_9);
 } else {

  FUNC_0(VAR_16, VAR_6,
      VAR_10 |
      VAR_8);
 }
}
