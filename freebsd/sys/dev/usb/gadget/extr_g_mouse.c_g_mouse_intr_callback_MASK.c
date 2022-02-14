
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct TYPE_2__ {int dx; int dy; int buttons; } ;
struct g_mouse_softc {int sc_tick; int sc_radius; int sc_curr_y_state; int sc_curr_x_state; int sc_last_x_state; int sc_last_y_state; TYPE_1__ sc_data; int sc_mode; int sc_do_button_update; int sc_do_cursor_update; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;




 int VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*,int ,TYPE_1__*,int) ;
 int FUNC_5 (struct usb_xfer*,int) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct g_mouse_softc* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int*,int *,int*,int *) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct g_mouse_softc *VAR_4 = FUNC_7(VAR_2);
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_8(VAR_2, &VAR_5, ((void*)0), &VAR_6, ((void*)0));

 FUNC_0("st=%d aframes=%d actlen=%d bytes\n",
     FUNC_1(VAR_2), VAR_6, VAR_5);

 switch (FUNC_1(VAR_2)) {
 case 128:
  if (!(VAR_4->sc_do_cursor_update || VAR_4->sc_do_button_update))
   break;

 case 129:
tr_setup:

   if (VAR_4->sc_do_cursor_update) {
  VAR_4->sc_do_cursor_update = 0;
  VAR_4->sc_tick += 80;
  if ((VAR_4->sc_tick < 0) || (VAR_4->sc_tick > 7999))
   VAR_4->sc_tick = 0;
   }

   if (VAR_4->sc_do_button_update) {
   VAR_4->sc_do_button_update = 0;
   VAR_4->sc_data.buttons ^= VAR_0;
   }

   VAR_9 = VAR_4->sc_radius;

  switch (VAR_4->sc_mode) {
  case 131:
   VAR_4->sc_data.buttons = 0;
   break;
  case 130:
   VAR_9 = (VAR_9 * (8000-VAR_4->sc_tick)) / 8000;
  case 132:

   VAR_4->sc_curr_y_state = 0;
   VAR_4->sc_curr_x_state = 0;
   break;
  case 133:
   if (VAR_4->sc_tick < 2000) {
    VAR_4->sc_curr_x_state = (VAR_4->sc_tick * VAR_9) / 2000;
    VAR_4->sc_curr_y_state = 0;
   } else if (VAR_4->sc_tick < 4000) {
    VAR_4->sc_curr_x_state = VAR_9;
    VAR_4->sc_curr_y_state = -(((VAR_4->sc_tick - 2000) * VAR_9) / 2000);
   } else if (VAR_4->sc_tick < 6000) {
    VAR_4->sc_curr_x_state = VAR_9 - (((VAR_4->sc_tick - 4000) * VAR_9) / 2000);
    VAR_4->sc_curr_y_state = -VAR_9;
   } else {
    VAR_4->sc_curr_x_state = 0;
    VAR_4->sc_curr_y_state = -VAR_9 + (((VAR_4->sc_tick - 6000) * VAR_9) / 2000);
   }
   break;
  default:
   break;
  }

  VAR_7 = VAR_4->sc_curr_x_state - VAR_4->sc_last_x_state;
  VAR_8 = VAR_4->sc_curr_y_state - VAR_4->sc_last_y_state;

  if (VAR_7 < -63)
    VAR_7 = -63;
  else if (VAR_7 > 63)
    VAR_7 = 63;

  if (VAR_8 < -63)
    VAR_8 = -63;
  else if (VAR_8 > 63)
    VAR_8 = 63;

  VAR_4->sc_last_x_state += VAR_7;
  VAR_4->sc_last_y_state += VAR_8;

  VAR_4->sc_data.dx = VAR_7;
  VAR_4->sc_data.dy = VAR_8;

  FUNC_4(VAR_2, 0, &VAR_4->sc_data, sizeof(VAR_4->sc_data));
  FUNC_5(VAR_2, 1);
  FUNC_3(VAR_2);
  break;

 default:
  FUNC_0("error=%s\n", FUNC_2(VAR_3));

  if (VAR_3 != VAR_1) {

   FUNC_6(VAR_2);
   goto tr_setup;
  }
  break;
 }
}
