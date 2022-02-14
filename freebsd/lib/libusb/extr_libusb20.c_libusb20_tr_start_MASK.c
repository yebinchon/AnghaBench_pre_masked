
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_transfer {int is_restart; scalar_t__ is_cancel; scalar_t__ is_pending; int is_opened; } ;


 int FUNC_0 (struct libusb20_transfer*) ;

void
FUNC_1(struct libusb20_transfer *VAR_0)
{
 if (!VAR_0->is_opened) {

  return;
 }
 if (VAR_0->is_pending) {
  if (VAR_0->is_cancel) {

   VAR_0->is_restart = 1;
  }

  return;
 }

 FUNC_0(VAR_0);
 return;
}
