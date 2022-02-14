
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_adc_softc {int sc_pen_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ti_adc_softc*,int ) ;
 int FUNC_1 (struct ti_adc_softc*,int ,int) ;
 int FUNC_2 (struct ti_adc_softc*) ;
 int FUNC_3 (struct ti_adc_softc*) ;
 int FUNC_4 (struct ti_adc_softc*) ;
 int FUNC_5 (struct ti_adc_softc*,int) ;
 int FUNC_6 (struct ti_adc_softc*) ;
 int FUNC_7 (struct ti_adc_softc*,int) ;

__attribute__((used)) static void
FUNC_8(void *VAR_8)
{
 struct ti_adc_softc *VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_9 = (struct ti_adc_softc *)VAR_8;

 FUNC_2(VAR_9);

 VAR_11 = FUNC_0(VAR_9, VAR_2);
 VAR_10 = FUNC_0(VAR_9, VAR_1);

 if (VAR_11 & VAR_6) {
  VAR_9->sc_pen_down = 1;
  VAR_10 |= VAR_6;
  FUNC_1(VAR_9, VAR_0,
   VAR_6);



 }

 if (VAR_11 & VAR_7) {
  VAR_9->sc_pen_down = 0;
  VAR_10 |= VAR_7;



 }

 if (VAR_10 & VAR_4)
  FUNC_5(VAR_9, VAR_10);

 if (VAR_10 & VAR_5)
  FUNC_7(VAR_9, VAR_10);

 if (VAR_10) {

  FUNC_1(VAR_9, VAR_1, VAR_10);
 }


 if (VAR_10 & VAR_3)
  FUNC_6(VAR_9);

 FUNC_3(VAR_9);
}
