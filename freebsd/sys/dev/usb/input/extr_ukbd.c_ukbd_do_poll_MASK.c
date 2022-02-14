
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ukbd_softc {int sc_flags; scalar_t__ sc_inputs; int sc_time_ms; int sc_xfer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct ukbd_softc*) ;
 int FUNC_7 (struct ukbd_softc*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9(struct ukbd_softc *VAR_3, uint8_t VAR_4)
{

 FUNC_3();
 FUNC_2((VAR_3->sc_flags & VAR_1) != 0,
     ("ukbd_do_poll called when not polling\n"));
 FUNC_1(2, "polling\n");

 if (FUNC_4() == 0) {







  while (VAR_3->sc_inputs == 0) {




   FUNC_5(VAR_0);
   if (!VAR_4)
    break;
  }
  return;
 }

 while (VAR_3->sc_inputs == 0) {

  FUNC_8(VAR_3->sc_xfer, VAR_2);


  if (FUNC_6(VAR_3)) {

   FUNC_0(1000);


   VAR_3->sc_time_ms += 1;
  }

  FUNC_7(VAR_3);

  if (!VAR_4)
   break;
 }
}
