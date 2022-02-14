
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mv88e61xxphy_softc {struct mv88e61xxphy_port_softc* sc_ports; } ;
struct mv88e61xxphy_port_softc {int sc_vlan; scalar_t__ sc_port; int sc_flags; } ;


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
 unsigned int VAR_11 ;
 int FUNC_0 (struct mv88e61xxphy_softc*,int ,int ,int) ;
 int FUNC_1 (struct mv88e61xxphy_softc*,unsigned int,int ) ;
 int FUNC_2 (struct mv88e61xxphy_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mv88e61xxphy_softc *VAR_12, uint16_t VAR_13)
{
 unsigned VAR_14;




 FUNC_2(VAR_12);




 FUNC_0(VAR_12, VAR_4, VAR_8,
     VAR_9 | VAR_13);




 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++) {
  struct mv88e61xxphy_port_softc *VAR_15;

  VAR_15 = &VAR_12->sc_ports[VAR_14];
  if (VAR_15->sc_vlan == VAR_13) {



   VAR_15->sc_flags &= ~VAR_0;
   FUNC_1(VAR_12, VAR_14, VAR_3);
  } else if (VAR_15->sc_port == VAR_10) {



   FUNC_1(VAR_12, VAR_14, VAR_2);
  } else {



   FUNC_1(VAR_12, VAR_14, VAR_1);
  }
 }




 FUNC_0(VAR_12, VAR_4, VAR_5,
     VAR_6 |
     VAR_7);
}
