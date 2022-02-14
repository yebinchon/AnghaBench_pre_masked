
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ukbd_softc {int sc_flags; scalar_t__ sc_inputs; int* sc_input; size_t sc_inputhead; int * sc_xfer; } ;
typedef int int32_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct ukbd_softc*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int32_t
FUNC_5(struct ukbd_softc *VAR_5, uint8_t VAR_6)
{
 int32_t VAR_7;

 FUNC_1();
 FUNC_0((FUNC_2() == 0) ||
     (VAR_5->sc_flags & VAR_1) != 0,
     ("not polling in kdb or panic\n"));

 if (VAR_5->sc_inputs == 0 &&
     (VAR_5->sc_flags & VAR_0) == 0) {

  FUNC_4(VAR_5->sc_xfer[VAR_2]);
  FUNC_4(VAR_5->sc_xfer[VAR_3]);
 }

 if (VAR_5->sc_flags & VAR_1)
  FUNC_3(VAR_5, VAR_6);

 if (VAR_5->sc_inputs == 0) {
  VAR_7 = -1;
 } else {
  VAR_7 = VAR_5->sc_input[VAR_5->sc_inputhead];
  --(VAR_5->sc_inputs);
  ++(VAR_5->sc_inputhead);
  if (VAR_5->sc_inputhead >= VAR_4) {
   VAR_5->sc_inputhead = 0;
  }
 }
 return (VAR_7);
}
