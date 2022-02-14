
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_adc_softc {int sc_last_state; int sc_tsc_wires; } ;


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
 int FUNC_0 (struct ti_adc_softc*,int ,int) ;
 int FUNC_1 (struct ti_adc_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ti_adc_softc *VAR_12)
{
 uint32_t VAR_13;

 FUNC_1(VAR_12);

 if (VAR_12->sc_last_state == 1)
  return;


 FUNC_0(VAR_12, VAR_8,
     VAR_10 | VAR_11 | VAR_9);

 VAR_13 = VAR_3 | VAR_2;
 if (VAR_12->sc_tsc_wires > 0) {
  VAR_13 |= VAR_7;
  switch (VAR_12->sc_tsc_wires) {
  case 4:
   VAR_13 |= VAR_4;
   break;
  case 5:
   VAR_13 |= VAR_5;
   break;
  case 8:
   VAR_13 |= VAR_6;
   break;
  default:
   break;
  }
 }
 VAR_13 |= VAR_1;

 FUNC_0(VAR_12, VAR_0, VAR_13);

 VAR_12->sc_last_state = 1;
}
