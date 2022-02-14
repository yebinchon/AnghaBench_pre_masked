
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct gpiokeys_softc {int sc_flags; scalar_t__ sc_inputs; } ;


 int FUNC_0 (struct gpiokeys_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct gpiokeys_softc *VAR_3, uint8_t VAR_4)
{

 FUNC_1((VAR_3->sc_flags & VAR_0) != 0,
     ("gpiokeys_do_poll called when not polling\n"));

 FUNC_0(VAR_3);

 if (!VAR_2 && !FUNC_2()) {
  while (VAR_3->sc_inputs == 0) {
   FUNC_3(VAR_1);
   if (!VAR_4)
    break;
  }
  return;
 }

 while ((VAR_3->sc_inputs == 0) && VAR_4) {
  FUNC_4("POLL!\n");
 }
}
