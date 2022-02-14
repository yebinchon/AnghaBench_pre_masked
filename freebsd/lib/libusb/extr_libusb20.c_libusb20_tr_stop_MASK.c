
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libusb20_transfer {int is_cancel; TYPE_2__* pdev; int is_pending; int is_opened; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int (* tr_cancel_async ) (struct libusb20_transfer*) ;} ;


 int FUNC_0 (struct libusb20_transfer*) ;

void
FUNC_1(struct libusb20_transfer *VAR_0)
{
 if (!VAR_0->is_opened) {

  return;
 }
 if (!VAR_0->is_pending) {

  return;
 }
 if (VAR_0->is_cancel) {

  return;
 }
 VAR_0->is_cancel = 1;

 VAR_0->pdev->methods->tr_cancel_async(VAR_0);
 return;
}
