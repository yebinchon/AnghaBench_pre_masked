
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_transfer {int (* callback ) (struct libusb20_transfer*) ;int status; scalar_t__ is_draining; scalar_t__ is_pending; scalar_t__ is_restart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct libusb20_transfer*) ;
 int FUNC_1 (struct libusb20_transfer*) ;

void
FUNC_2(struct libusb20_transfer *VAR_2)
{
 ;

repeat:

 if (!VAR_2->is_pending) {
  VAR_2->status = VAR_1;
 } else {
  VAR_2->is_pending = 0;
 }

 VAR_2->callback(VAR_2);

 if (VAR_2->is_restart) {
  VAR_2->is_restart = 0;
  goto repeat;
 }
 if (VAR_2->is_draining &&
     (!VAR_2->is_pending)) {
  VAR_2->is_draining = 0;
  VAR_2->status = VAR_0;
  VAR_2->callback(VAR_2);
 }
 return;
}
