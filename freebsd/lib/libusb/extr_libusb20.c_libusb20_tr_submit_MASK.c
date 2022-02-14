
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libusb20_transfer {int is_pending; TYPE_2__* pdev; scalar_t__ is_restart; scalar_t__ is_cancel; int is_opened; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int (* tr_submit ) (struct libusb20_transfer*) ;} ;


 int FUNC_0 (struct libusb20_transfer*) ;

void
FUNC_1(struct libusb20_transfer *VAR_0)
{
 if (!VAR_0->is_opened) {

  return;
 }
 if (VAR_0->is_pending) {

  return;
 }
 VAR_0->is_pending = 1;
 VAR_0->is_cancel = 0;
 VAR_0->is_restart = 0;

 VAR_0->pdev->methods->tr_submit(VAR_0);
 return;
}
