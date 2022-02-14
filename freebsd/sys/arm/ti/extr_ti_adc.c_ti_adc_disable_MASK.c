
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_adc_softc {scalar_t__ sc_last_state; } ;


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
 int FUNC_0 (struct ti_adc_softc*,int ) ;
 int VAR_12 ;
 int FUNC_1 (struct ti_adc_softc*,int ,int) ;
 int FUNC_2 (struct ti_adc_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ti_adc_softc *VAR_13)
{
 int VAR_14;
 uint32_t VAR_15;

 FUNC_2(VAR_13);

 if (VAR_13->sc_last_state == 0)
  return;


 FUNC_1(VAR_13, VAR_12, 0);


 FUNC_1(VAR_13, VAR_0, FUNC_0(VAR_13, VAR_0) & ~VAR_1);


 FUNC_1(VAR_13, VAR_7,
     VAR_10 | VAR_11 | VAR_9);


 FUNC_1(VAR_13, VAR_8, FUNC_0(VAR_13, VAR_8));


 VAR_14 = FUNC_0(VAR_13, VAR_2) & VAR_6;
 while (VAR_14 > 0) {
  VAR_15 = FUNC_0(VAR_13, VAR_3);
  VAR_14 = FUNC_0(VAR_13, VAR_2) & VAR_6;
 }

 VAR_14 = FUNC_0(VAR_13, VAR_4) & VAR_6;
 while (VAR_14 > 0) {
  VAR_15 = FUNC_0(VAR_13, VAR_5);
  VAR_14 = FUNC_0(VAR_13, VAR_4) & VAR_6;
 }

 VAR_13->sc_last_state = 0;
}
