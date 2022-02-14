
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {scalar_t__ sc_ledpin; scalar_t__ sc_led_pwr_pin; scalar_t__ sc_led_net_pin; int sc_ah; scalar_t__ sc_hardled; int sc_ledon; scalar_t__ sc_softled; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (struct ath_softc*) ;
 int FUNC_5 (struct ath_softc*,int ) ;

void
FUNC_6(struct ath_softc *VAR_4)
{

 FUNC_0(VAR_4);
 FUNC_5(VAR_4, VAR_3);
 FUNC_1(VAR_4);


 if (VAR_4->sc_softled) {
  FUNC_2(VAR_4->sc_ah, VAR_4->sc_ledpin,
      VAR_0);
  FUNC_3(VAR_4->sc_ah, VAR_4->sc_ledpin, !VAR_4->sc_ledon);
 }


 if (VAR_4->sc_hardled) {






  if (VAR_4->sc_led_pwr_pin > 0)
   FUNC_2(VAR_4->sc_ah, VAR_4->sc_led_pwr_pin,
       VAR_2);
  if (VAR_4->sc_led_net_pin > 0)
   FUNC_2(VAR_4->sc_ah, VAR_4->sc_led_net_pin,
       VAR_1);
 }

 FUNC_0(VAR_4);
 FUNC_4(VAR_4);
 FUNC_1(VAR_4);
}
