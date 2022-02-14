
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_bus {int do_probe; int * explore_msg; int bus_mtx; int ** devices; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *,int *) ;

void
FUNC_6(struct usb_bus *VAR_2, uint8_t VAR_3)
{
 uint8_t VAR_4;

 FUNC_0("\n");

 if (VAR_1 != 0) {
  FUNC_0("Cold\n");
  return;
 }

 if (VAR_2 == ((void*)0)) {
  FUNC_0("No bus pointer!\n");
  return;
 }
 if ((VAR_2->devices == ((void*)0)) ||
     (VAR_2->devices[VAR_0] == ((void*)0))) {
  FUNC_0("No root HUB\n");
  return;
 }
 if (FUNC_4(&VAR_2->bus_mtx)) {
  VAR_4 = 0;
 } else {
  FUNC_2(VAR_2);
  VAR_4 = 1;
 }
 if (VAR_3) {
  VAR_2->do_probe = 1;
 }
 if (FUNC_5(FUNC_1(VAR_2),
     &VAR_2->explore_msg[0], &VAR_2->explore_msg[1])) {

 }
 if (VAR_4) {
  FUNC_3(VAR_2);
 }
}
