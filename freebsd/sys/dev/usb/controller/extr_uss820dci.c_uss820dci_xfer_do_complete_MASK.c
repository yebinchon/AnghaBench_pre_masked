
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uss820dci_td {int dummy; } ;
struct usb_xfer {struct uss820dci_td* td_transfer_cache; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct usb_xfer*) ;

__attribute__((used)) static uint8_t
FUNC_2(struct usb_xfer *VAR_0)
{
 struct uss820dci_td *VAR_1;

 FUNC_0(9, "\n");

 VAR_1 = VAR_0->td_transfer_cache;
 if (VAR_1 == ((void*)0)) {

  FUNC_1(VAR_0);
  return(1);
 }
 return (0);
}
