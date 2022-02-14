
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsp_softc {int sc_state; } ;
struct usb_fifo {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct usb_fifo*,int ,int ) ;
 int FUNC_2 (struct usb_fifo*) ;
 struct wsp_softc* FUNC_3 (struct usb_fifo*) ;
 int FUNC_4 (struct wsp_softc*) ;

__attribute__((used)) static int
FUNC_5(struct usb_fifo *VAR_7, int VAR_8)
{
 FUNC_0(VAR_6, "\n");

 if (VAR_8 & VAR_2) {
  struct wsp_softc *VAR_9 = FUNC_3(VAR_7);
  int VAR_10;

  if (VAR_9->sc_state & VAR_3)
   return (VAR_0);

  if (FUNC_1(VAR_7,
      VAR_4, VAR_5)) {
   return (VAR_1);
  }
  VAR_10 = FUNC_4(VAR_9);
  if (VAR_10 != 0) {
   FUNC_2(VAR_7);
   return (VAR_10);
  }
 }
 return (0);
}
