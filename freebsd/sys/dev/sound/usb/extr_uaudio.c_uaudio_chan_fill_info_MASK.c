
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct usb_device {int dummy; } ;
struct uaudio_softc {int sc_sndstat_valid; int sc_sndstat; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int,int ) ;
 int FUNC_2 (struct uaudio_softc*,struct usb_device*,scalar_t__,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_3 (struct usb_device*) ;

__attribute__((used)) static void
FUNC_4(struct uaudio_softc *VAR_6, struct usb_device *VAR_7)
{
 uint32_t VAR_8 = VAR_4;
 uint8_t VAR_9;
 uint8_t VAR_10 = VAR_2;
 uint8_t VAR_11;
 uint8_t VAR_12 = VAR_3;
 uint8_t VAR_13;

 VAR_10 -= (VAR_10 % 8);
 if ((VAR_10 == 0) || (VAR_10 > 32)) {

  VAR_10 = 32;
 }
 if (VAR_12 == 0) {
  switch (FUNC_3(VAR_7)) {
  case 128:
  case 129:






   VAR_12 = 4;
   break;
  default:
   VAR_12 = VAR_1;
   break;
  }
 } else if (VAR_12 > VAR_1)
  VAR_12 = VAR_1;

 if (FUNC_1(&VAR_6->sc_sndstat, ((void*)0), 4096, VAR_0))
  VAR_6->sc_sndstat_valid = 1;



 for (VAR_13 = VAR_12; VAR_13; VAR_13--) {
  for (VAR_11 = VAR_10; VAR_11; VAR_11 -= 8) {


   if (VAR_8 != 0)
    FUNC_2(VAR_6, VAR_7, VAR_8, VAR_13, VAR_11);


   for (VAR_9 = 0; VAR_5[VAR_9]; VAR_9++)
    FUNC_2(VAR_6, VAR_7, VAR_5[VAR_9], VAR_13, VAR_11);
  }
 }
 if (VAR_6->sc_sndstat_valid)
  FUNC_0(&VAR_6->sc_sndstat);
}
