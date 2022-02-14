
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_transfer {int flags; struct libusb_super_transfer* buffer; } ;
struct libusb_super_transfer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct libusb_super_transfer*) ;

void
FUNC_1(struct libusb_transfer *VAR_1)
{
 struct libusb_super_transfer *VAR_2;

 if (VAR_1 == ((void*)0))
  return;


 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_1->buffer);

 VAR_2 = (struct libusb_super_transfer *)(
     (uint8_t *)VAR_1 - sizeof(*VAR_2));

 FUNC_0(VAR_2);
}
