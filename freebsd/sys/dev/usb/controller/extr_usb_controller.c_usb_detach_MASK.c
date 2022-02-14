
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int * cleanup_msg; int * detach_msg; int power_wdog; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 int FUNC_4 (struct usb_bus*) ;
 int FUNC_5 (struct usb_bus*) ;
 int FUNC_6 (struct usb_bus*) ;
 int FUNC_7 (struct usb_bus*) ;
 struct usb_bus* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (struct usb_bus*) ;
 int FUNC_14 (struct usb_bus*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_0)
{
 struct usb_bus *VAR_1 = FUNC_8(VAR_0);

 FUNC_0("\n");

 if (VAR_1 == ((void*)0)) {

  return (0);
 }

 FUNC_9(&VAR_1->power_wdog);






 FUNC_4(VAR_1);


 FUNC_11(FUNC_2(VAR_1),
     &VAR_1->detach_msg[0], &VAR_1->detach_msg[1]);


 FUNC_12(FUNC_2(VAR_1),
     &VAR_1->detach_msg[0], &VAR_1->detach_msg[1]);






 FUNC_7(VAR_1);
 return (0);
}
