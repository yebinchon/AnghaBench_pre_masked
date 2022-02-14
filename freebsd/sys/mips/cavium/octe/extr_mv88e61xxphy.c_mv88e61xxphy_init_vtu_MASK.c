
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e61xxphy_softc {struct mv88e61xxphy_port_softc* sc_ports; } ;
struct mv88e61xxphy_port_softc {int sc_flags; scalar_t__ sc_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct mv88e61xxphy_softc*,int ,int ,int) ;
 int FUNC_1 (struct mv88e61xxphy_softc*,scalar_t__) ;
 int FUNC_2 (struct mv88e61xxphy_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mv88e61xxphy_softc *VAR_6)
{
 unsigned VAR_7;




 FUNC_2(VAR_6);
 FUNC_0(VAR_6, VAR_1, VAR_2,
     VAR_3 | VAR_4);




 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct mv88e61xxphy_port_softc *VAR_8;

  VAR_8 = &VAR_6->sc_ports[VAR_7];
  VAR_8->sc_flags &= ~VAR_0;
  if (VAR_8->sc_vlan == 0)
   continue;
  VAR_8->sc_flags |= VAR_0;
 }




 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  struct mv88e61xxphy_port_softc *VAR_9;

  VAR_9 = &VAR_6->sc_ports[VAR_7];
  if ((VAR_9->sc_flags & VAR_0) == 0)
   continue;
  FUNC_1(VAR_6, VAR_9->sc_vlan);
 }




 FUNC_2(VAR_6);
}
