
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int dummy; } ;
struct usb_fifo {int dummy; } ;
struct ubtbcmfw_softc {struct usb_xfer** sc_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (struct usb_fifo*,int ,int ) ;
 struct ubtbcmfw_softc* FUNC_1 (struct usb_fifo*) ;
 int FUNC_2 (struct usb_xfer*) ;

__attribute__((used)) static int
FUNC_3(struct usb_fifo *VAR_7, int VAR_8)
{
 struct ubtbcmfw_softc *VAR_9 = FUNC_1(VAR_7);
 struct usb_xfer *VAR_10;






 if (VAR_8 & VAR_2)
  VAR_10 = VAR_9->sc_xfer[VAR_6];
 else if (VAR_8 & VAR_3)
  VAR_10 = VAR_9->sc_xfer[VAR_4];
 else
  return (VAR_0);

 if (FUNC_0(VAR_7, FUNC_2(VAR_10),
   VAR_5) != 0)
  return (VAR_1);

 return (0);
}
