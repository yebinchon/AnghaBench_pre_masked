
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_xfer {struct saf1761_otg_td* td_transfer_cache; } ;
struct saf1761_otg_td {int dummy; } ;
struct saf1761_otg_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct usb_xfer*) ;

__attribute__((used)) static uint8_t
FUNC_2(struct saf1761_otg_softc *VAR_0, struct usb_xfer *VAR_1)
{
 struct saf1761_otg_td *VAR_2;

 FUNC_0(9, "\n");

 VAR_2 = VAR_1->td_transfer_cache;
 if (VAR_2 == ((void*)0)) {

  FUNC_1(VAR_1);
  return (1);
 }
 return (0);
}
