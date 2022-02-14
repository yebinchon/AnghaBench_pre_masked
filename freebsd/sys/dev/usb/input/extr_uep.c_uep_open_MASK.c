
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fifo {int dummy; } ;
struct uep_softc {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct usb_fifo*,int ,int ) ;
 struct uep_softc* FUNC_1 (struct usb_fifo*) ;

__attribute__((used)) static int
FUNC_2(struct usb_fifo *VAR_6, int VAR_7)
{
 if (VAR_7 & VAR_2) {
  struct uep_softc *VAR_8 = FUNC_1(VAR_6);

  if (VAR_8->state & VAR_3)
   return (VAR_0);
  if (FUNC_0(VAR_6, VAR_4,
      VAR_5))
   return (VAR_1);

  VAR_8->state |= VAR_3;
 }

 return (0);
}
