
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_adc_softc {int sc_xp_bit; int sc_tsc_wires; int sc_yp_inp; int sc_xn_bit; int sc_yn_bit; int sc_yp_bit; int sc_coord_readouts; int sc_xp_inp; int sc_charge_delay; int sc_yn_inp; int sc_tsc_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_adc_softc*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct ti_adc_softc*,int ,int) ;
 int VAR_8 ;
 int FUNC_6 (struct ti_adc_softc*) ;
 int FUNC_7 (struct ti_adc_softc*) ;

__attribute__((used)) static void
FUNC_8(struct ti_adc_softc *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 uint32_t VAR_13, VAR_14;

 FUNC_6(VAR_9);


 VAR_13 = VAR_4 | (4 << VAR_3) |
     VAR_5 | VAR_9->sc_xp_bit;
 if (VAR_9->sc_tsc_wires == 4)
  VAR_13 |= FUNC_4(VAR_9->sc_yp_inp) | VAR_9->sc_xn_bit;
 else if (VAR_9->sc_tsc_wires == 5)
  VAR_13 |= FUNC_4(4) |
   VAR_9->sc_xn_bit | VAR_9->sc_yn_bit | VAR_9->sc_yp_bit;
 else if (VAR_9->sc_tsc_wires == 8)
  VAR_13 |= FUNC_4(VAR_9->sc_yp_inp) | VAR_9->sc_xn_bit;

 VAR_11 = VAR_2 - VAR_9->sc_coord_readouts + 1;
 VAR_12 = VAR_11 + VAR_9->sc_coord_readouts - 1;
 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
  FUNC_5(VAR_9, FUNC_1(VAR_10), VAR_13);
  FUNC_5(VAR_9, FUNC_2(VAR_10), VAR_8);
 }


 VAR_13 = VAR_4 | (4 << VAR_3) |
     VAR_5 | VAR_9->sc_yn_bit |
     FUNC_3(8);
 if (VAR_9->sc_tsc_wires == 4)
  VAR_13 |= FUNC_4(VAR_9->sc_xp_inp) | VAR_9->sc_yp_bit;
 else if (VAR_9->sc_tsc_wires == 5)
  VAR_13 |= FUNC_4(4) |
   VAR_9->sc_xp_bit | VAR_9->sc_xn_bit | VAR_9->sc_yp_bit;
 else if (VAR_9->sc_tsc_wires == 8)
  VAR_13 |= FUNC_4(VAR_9->sc_xp_inp) | VAR_9->sc_yp_bit;

 VAR_11 = VAR_2 - (VAR_9->sc_coord_readouts*2 + 2) + 1;
 VAR_12 = VAR_11 + VAR_9->sc_coord_readouts - 1;
 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
  FUNC_5(VAR_9, FUNC_1(VAR_10), VAR_13);
  FUNC_5(VAR_9, FUNC_2(VAR_10), VAR_8);
 }


 VAR_14 = FUNC_0(VAR_9, VAR_1);
 FUNC_5(VAR_9, VAR_7, VAR_14);
 FUNC_5(VAR_9, VAR_6, VAR_9->sc_charge_delay);


 VAR_11 = VAR_2 - (VAR_9->sc_coord_readouts + 2) + 1;
 VAR_13 = VAR_4 | (4 << VAR_3) |
     VAR_5 | VAR_9->sc_yp_bit |
     VAR_9->sc_xn_bit | FUNC_4(VAR_9->sc_xp_inp) |
     FUNC_3(8);
 FUNC_5(VAR_9, FUNC_1(VAR_11), VAR_13);
 FUNC_5(VAR_9, FUNC_2(VAR_11), VAR_8);
 VAR_11++;
 VAR_13 |= FUNC_4(VAR_9->sc_yn_inp);
 FUNC_5(VAR_9, FUNC_1(VAR_11), VAR_13);
 FUNC_5(VAR_9, FUNC_2(VAR_11), VAR_8);

 FUNC_5(VAR_9, VAR_0, (VAR_9->sc_coord_readouts*2 + 2) - 1);

 VAR_9->sc_tsc_enabled = 1;
 VAR_11 = VAR_2 - (VAR_9->sc_coord_readouts*2 + 2) + 1;
 VAR_12 = VAR_2;
 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
  VAR_9->sc_tsc_enabled |= (1 << VAR_10);
 }


 FUNC_7(VAR_9);
}
