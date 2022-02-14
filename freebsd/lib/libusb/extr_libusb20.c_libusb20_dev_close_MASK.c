
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct libusb20_transfer {int is_opened; } ;
struct libusb20_device {scalar_t__ nTransfer; scalar_t__ auto_detach; scalar_t__ claimed_interface; scalar_t__ is_opened; int * methods; TYPE_1__* beMethods; struct libusb20_transfer* pTransfer; } ;
struct TYPE_2__ {int (* close_device ) (struct libusb20_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct libusb20_transfer*) ;
 int VAR_1 ;
 int FUNC_1 (struct libusb20_transfer*) ;
 int FUNC_2 (struct libusb20_transfer*) ;
 int FUNC_3 (struct libusb20_device*) ;

int
FUNC_4(struct libusb20_device *VAR_2)
{
 struct libusb20_transfer *VAR_3;
 uint16_t VAR_4;
 int VAR_5 = 0;

 if (!VAR_2->is_opened) {
  return (VAR_0);
 }
 for (VAR_4 = 0; VAR_4 != VAR_2->nTransfer; VAR_4++) {
  VAR_3 = VAR_2->pTransfer + VAR_4;

  if (!VAR_3->is_opened) {

   continue;
  }

  FUNC_2(VAR_3);

  FUNC_1(VAR_3);
 }

 if (VAR_2->pTransfer != ((void*)0)) {
  FUNC_0(VAR_2->pTransfer);
  VAR_2->pTransfer = ((void*)0);
 }
 VAR_5 = VAR_2->beMethods->close_device(VAR_2);

 VAR_2->methods = &VAR_1;

 VAR_2->is_opened = 0;





 VAR_2->claimed_interface = 0;





 VAR_2->auto_detach = 0;

 return (VAR_5);
}
