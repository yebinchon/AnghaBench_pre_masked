
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint16_t ;
struct rum_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct rum_softc*,int ) ;
 int FUNC_3 (struct rum_softc*,int) ;
 scalar_t__ FUNC_4 (struct rum_softc*,int,int ) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct rum_softc *VAR_4, const uint8_t *VAR_5, size_t VAR_6)
{
 uint16_t VAR_7 = VAR_0;
 usb_error_t VAR_8;


 for (; VAR_6 >= 4; VAR_7 += 4, VAR_5 += 4, VAR_6 -= 4) {
  VAR_8 = FUNC_4(VAR_4, VAR_7, FUNC_0(VAR_5));
  if (VAR_8) {

   FUNC_1(VAR_4->sc_dev, "Firmware load "
       "failure! (ignored)\n");
   break;
  }
 }

 VAR_8 = FUNC_2(VAR_4, VAR_1);
 if (VAR_8 != VAR_2) {
  FUNC_1(VAR_4->sc_dev, "could not run firmware: %s\n",
      FUNC_5(VAR_8));
 }


 FUNC_3(VAR_4, VAR_3 / 8);
}
