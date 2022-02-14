
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_transfer {int * buffer; } ;


 int VAR_0 ;

uint8_t *
FUNC_0(struct libusb_transfer *VAR_1)
{
 if (VAR_1->buffer == ((void*)0))
  return (((void*)0));

 return (VAR_1->buffer + VAR_0);
}
