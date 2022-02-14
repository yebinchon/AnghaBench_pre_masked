
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_transfer {int * callback; } ;
typedef int libusb20_tr_callback_t ;



void
FUNC_0(struct libusb20_transfer *VAR_0, libusb20_tr_callback_t *VAR_1)
{
 VAR_0->callback = VAR_1;
 return;
}
