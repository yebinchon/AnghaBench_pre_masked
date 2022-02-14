
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_device {int dummy; } ;
typedef int * device_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;

__attribute__((used)) static void
FUNC_4(struct usb_device *VAR_0, device_t VAR_1, uint8_t VAR_2)
{
 int VAR_3;

 if (VAR_1 == ((void*)0)) {
  return;
 }
 if (!FUNC_2(VAR_1)) {
  return;
 }
 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_1);
 } else {
  VAR_3 = FUNC_0(VAR_1);
 }
 if (VAR_3) {
  FUNC_3(VAR_1, "%s failed\n",
      VAR_2 ? "Suspend" : "Resume");
 }
}
