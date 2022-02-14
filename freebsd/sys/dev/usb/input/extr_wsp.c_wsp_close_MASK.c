
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsp_softc {int dummy; } ;
struct usb_fifo {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_fifo*) ;
 struct wsp_softc* FUNC_1 (struct usb_fifo*) ;
 int FUNC_2 (struct wsp_softc*) ;

__attribute__((used)) static void
FUNC_3(struct usb_fifo *VAR_1, int VAR_2)
{
 if (VAR_2 & VAR_0) {
  struct wsp_softc *VAR_3 = FUNC_1(VAR_1);

  FUNC_2(VAR_3);
  FUNC_0(VAR_1);
 }
}
