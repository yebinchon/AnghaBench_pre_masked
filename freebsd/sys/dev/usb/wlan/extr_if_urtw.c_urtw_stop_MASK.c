
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct urtw_softc {scalar_t__ (* sc_rf_stop ) (struct urtw_softc*) ;int sc_watchdog_ch; int sc_led_ch; int sc_dev; int sc_flags; } ;


 int FUNC_0 (struct urtw_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (struct urtw_softc*) ;
 int FUNC_4 (struct urtw_softc*) ;
 scalar_t__ FUNC_5 (struct urtw_softc*) ;
 int FUNC_6 (struct urtw_softc*,int ,int*) ;
 scalar_t__ FUNC_7 (struct urtw_softc*,int ) ;
 int FUNC_8 (struct urtw_softc*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void
FUNC_11(struct urtw_softc *VAR_8)
{
 uint8_t VAR_9;
 usb_error_t VAR_10;

 FUNC_0(VAR_8);

 VAR_8->sc_flags &= ~VAR_7;

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  goto fail;
 FUNC_6(VAR_8, VAR_0, &VAR_9);
 VAR_9 &= ~(VAR_1 | VAR_2);
 FUNC_8(VAR_8, VAR_0, VAR_9);

 VAR_10 = VAR_8->sc_rf_stop(VAR_8);
 if (VAR_10 != 0)
  goto fail;

 VAR_10 = FUNC_7(VAR_8, VAR_5);
 if (VAR_10)
  goto fail;
 FUNC_6(VAR_8, VAR_3, &VAR_9);
 FUNC_8(VAR_8, VAR_3, VAR_9 | VAR_4);
 VAR_10 = FUNC_7(VAR_8, VAR_6);
 if (VAR_10)
  goto fail;
fail:
 if (VAR_10)
  FUNC_2(VAR_8->sc_dev, "failed to stop (%s)\n",
      FUNC_10(VAR_10));

 FUNC_9(&VAR_8->sc_led_ch);
 FUNC_1(&VAR_8->sc_watchdog_ch);

 FUNC_4(VAR_8);
}
