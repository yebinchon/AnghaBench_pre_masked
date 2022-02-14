
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpiokeys_softc {size_t sc_inputs; size_t sc_inputtail; int sc_dev; int * sc_input; } ;


 int FUNC_0 (struct gpiokeys_softc*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct gpiokeys_softc *VAR_1, uint32_t VAR_2)
{

 FUNC_0(VAR_1);

 if (VAR_1->sc_inputs < VAR_0) {
  VAR_1->sc_input[VAR_1->sc_inputtail] = VAR_2;
  ++(VAR_1->sc_inputs);
  ++(VAR_1->sc_inputtail);
  if (VAR_1->sc_inputtail >= VAR_0) {
   VAR_1->sc_inputtail = 0;
  }
 } else {
  FUNC_1(VAR_1->sc_dev, "input buffer is full\n");
 }
}
