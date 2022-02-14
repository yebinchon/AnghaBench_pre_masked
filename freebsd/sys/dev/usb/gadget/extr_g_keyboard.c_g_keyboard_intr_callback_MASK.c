
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct g_keyboard_softc {int sc_state; TYPE_1__* sc_data; int sc_mode; } ;
struct TYPE_3__ {void** keycode; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_xfer*) ;


 void* FUNC_2 (struct g_keyboard_softc*,int ) ;
 int FUNC_3 (TYPE_1__**,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int,TYPE_1__*,int) ;
 int FUNC_7 (struct usb_xfer*,int) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct g_keyboard_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct g_keyboard_softc *VAR_6 = FUNC_9(VAR_4);
 int VAR_7;
 int VAR_8;

 FUNC_10(VAR_4, &VAR_7, ((void*)0), &VAR_8, ((void*)0));

 FUNC_0("st=%d aframes=%d actlen=%d bytes\n",
     FUNC_1(VAR_4), VAR_8, VAR_7);

 switch (FUNC_1(VAR_4)) {
 case 128:
  break;

 case 129:
tr_setup:
  if (VAR_6->sc_mode == VAR_2) {
   FUNC_3(&VAR_6->sc_data, 0, sizeof(VAR_6->sc_data));
   FUNC_6(VAR_4, 0, &VAR_6->sc_data[0], sizeof(VAR_6->sc_data[0]));
   FUNC_6(VAR_4, 1, &VAR_6->sc_data[1], sizeof(VAR_6->sc_data[1]));
   FUNC_7(VAR_4, 2);
   FUNC_5(VAR_4);

  } else if (VAR_6->sc_mode == VAR_1) {

   FUNC_3(&VAR_6->sc_data, 0, sizeof(VAR_6->sc_data));

   if ((VAR_6->sc_state < 0) || (VAR_6->sc_state >= VAR_0))
    VAR_6->sc_state = 0;

   switch (VAR_6->sc_state % 6) {
   case 0:
    VAR_6->sc_data[0].keycode[0] =
        FUNC_2(VAR_6, VAR_6->sc_state + 0);
   case 1:
    VAR_6->sc_data[0].keycode[1] =
        FUNC_2(VAR_6, VAR_6->sc_state + 1);
   case 2:
    VAR_6->sc_data[0].keycode[2] =
        FUNC_2(VAR_6, VAR_6->sc_state + 2);
   case 3:
    VAR_6->sc_data[0].keycode[3] =
        FUNC_2(VAR_6, VAR_6->sc_state + 3);
   case 4:
    VAR_6->sc_data[0].keycode[4] =
        FUNC_2(VAR_6, VAR_6->sc_state + 4);
   default:
    VAR_6->sc_data[0].keycode[5] =
        FUNC_2(VAR_6, VAR_6->sc_state + 5);
   }

   VAR_6->sc_state++;

   FUNC_6(VAR_4, 0, &VAR_6->sc_data[0], sizeof(VAR_6->sc_data[0]));
   FUNC_6(VAR_4, 1, &VAR_6->sc_data[1], sizeof(VAR_6->sc_data[1]));
   FUNC_7(VAR_4, 2);
   FUNC_5(VAR_4);
  }
  break;

 default:
  FUNC_0("error=%s\n", FUNC_4(VAR_5));

  if (VAR_5 != VAR_3) {

   FUNC_8(VAR_4);
   goto tr_setup;
  }
  break;
 }
}
