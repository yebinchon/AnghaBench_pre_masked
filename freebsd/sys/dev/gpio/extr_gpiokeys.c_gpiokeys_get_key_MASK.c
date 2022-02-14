
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gpiokeys_softc {int sc_flags; scalar_t__ sc_inputs; int* sc_input; size_t sc_inputhead; } ;
typedef int int32_t ;


 int FUNC_0 (struct gpiokeys_softc*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct gpiokeys_softc*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int32_t
FUNC_4(struct gpiokeys_softc *VAR_3, uint8_t VAR_4)
{
 int32_t VAR_5;

 FUNC_1((!VAR_2 && !FUNC_2())
     || (VAR_3->sc_flags & VAR_0) != 0,
     ("not polling in kdb or panic\n"));

 FUNC_0(VAR_3);

 if (VAR_3->sc_flags & VAR_0)
  FUNC_3(VAR_3, VAR_4);

 if (VAR_3->sc_inputs == 0) {
  VAR_5 = -1;
 } else {
  VAR_5 = VAR_3->sc_input[VAR_3->sc_inputhead];
  --(VAR_3->sc_inputs);
  ++(VAR_3->sc_inputhead);
  if (VAR_3->sc_inputhead >= VAR_1) {
   VAR_3->sc_inputhead = 0;
  }
 }

 return (VAR_5);
}
