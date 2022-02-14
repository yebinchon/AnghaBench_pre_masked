
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct libusb_transfer {int dummy; } ;
struct libusb_super_transfer {int stream_id; } ;



void
FUNC_0(struct libusb_transfer *VAR_0, uint32_t VAR_1)
{
 struct libusb_super_transfer *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = (struct libusb_super_transfer *)(
     ((uint8_t *)VAR_0) - sizeof(*VAR_2));


 VAR_2->stream_id = VAR_1;
}
