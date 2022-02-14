
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int sc_pps_mode; int sc_dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct uart_softc *VAR_3)
{

 FUNC_0(VAR_3->sc_dev, "PPS capture mode: ");
 switch(VAR_3->sc_pps_mode & VAR_2) {
 case 128:
  FUNC_1("disabled");
  break;
 case 130:
  FUNC_1("CTS");
  break;
 case 129:
  FUNC_1("DCD");
  break;
 default:
  FUNC_1("invalid");
  break;
 }
 if (VAR_3->sc_pps_mode & VAR_0)
  FUNC_1("-Inverted");
 if (VAR_3->sc_pps_mode & VAR_1)
  FUNC_1("-NarrowPulse");
 FUNC_1("\n");
}
