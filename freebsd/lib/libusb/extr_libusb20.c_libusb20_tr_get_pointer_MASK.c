
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct libusb20_transfer {int dummy; } ;
struct libusb20_device {scalar_t__ nTransfer; struct libusb20_transfer* pTransfer; } ;



struct libusb20_transfer *
FUNC_0(struct libusb20_device *VAR_0, uint16_t VAR_1)
{
 if (VAR_1 >= VAR_0->nTransfer) {
  return (((void*)0));
 }
 return (VAR_0->pTransfer + VAR_1);
}
