
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ugold_softc {int sc_num_sensors; int* sc_valid; int * sc_calib; int * sc_sensor; } ;
typedef int buf ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int) ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int ,int ) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct ugold_softc* FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct ugold_softc *VAR_6 = FUNC_11(VAR_4);
 struct usb_page_cache *VAR_7;
 uint8_t VAR_8[8];
 int VAR_9;
 int VAR_10;

 FUNC_12(VAR_4, &VAR_10, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_2(VAR_4)) {
 case 128:
  FUNC_3(VAR_8, 0, sizeof(VAR_8));

  VAR_7 = FUNC_7(VAR_4, 0);
  FUNC_5(VAR_7, 0, VAR_8, FUNC_1(VAR_10, sizeof(VAR_8)));

  switch (VAR_8[0]) {
  case 130:
   if (VAR_6->sc_num_sensors)
    break;

   VAR_6->sc_num_sensors = FUNC_1(VAR_8[1], VAR_1) ;

   FUNC_0("%d sensor%s type ds75/12bit (temperature)\n",
       VAR_6->sc_num_sensors, (VAR_6->sc_num_sensors == 1) ? "" : "s");
   break;
  case 131:
   switch (VAR_8[1]) {
   case 4:
    VAR_9 = FUNC_4(VAR_8[4], VAR_8[5]);
    VAR_6->sc_sensor[VAR_2] = VAR_9 + VAR_6->sc_calib[VAR_2];
    VAR_6->sc_valid[VAR_2] = 1;

   case 2:
    VAR_9 = FUNC_4(VAR_8[2], VAR_8[3]);
    VAR_6->sc_sensor[VAR_0] = VAR_9 + VAR_6->sc_calib[VAR_0];
    VAR_6->sc_valid[VAR_0] = 1;
    break;
   default:
    FUNC_0("invalid data length (%d bytes)\n", VAR_8[1]);
   }
   break;
  default:
   FUNC_0("unknown command 0x%02x\n", VAR_8[0]);
   break;
  }

 case 129:
tr_setup:
  FUNC_9(VAR_4, 0, FUNC_8(VAR_4));
  FUNC_6(VAR_4);
  break;
 default:
  if (VAR_5 != VAR_3) {

   FUNC_10(VAR_4);
   goto tr_setup;
  }
  break;
 }
}
