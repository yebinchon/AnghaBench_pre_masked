
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int dummy; } ;
typedef scalar_t__ device_t ;
typedef int * devclass_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct usb_bus* FUNC_3 (scalar_t__) ;
 int * VAR_0 ;
 int FUNC_4 (struct usb_bus*,int) ;

void
FUNC_5(void)
{
 struct usb_bus *VAR_1;
 devclass_t VAR_2;
 device_t VAR_3;
 int VAR_4;

 FUNC_0(3, "\n");

 VAR_2 = VAR_0;
 if (VAR_2 == ((void*)0)) {
  FUNC_0(0, "no devclass\n");
  return;
 }



 VAR_4 = FUNC_2(VAR_2);
 while (VAR_4 >= 0) {
  VAR_3 = FUNC_1(VAR_2, VAR_4);
  if (VAR_3) {
   VAR_1 = FUNC_3(VAR_3);
   if (VAR_1) {
    FUNC_4(VAR_1, 1);
   }
  }
  VAR_4--;
 }
}
