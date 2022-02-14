
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int bdev; int * shutdown_msg; } ;
typedef int device_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 int FUNC_4 (int ) ;
 struct usb_bus* FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 struct usb_bus *VAR_2 = FUNC_5(VAR_1);

 FUNC_0("\n");

 if (VAR_2 == ((void*)0)) {

  return (0);
 }

 FUNC_0("%s: Controller shutdown\n", FUNC_4(VAR_2->bdev));

 FUNC_2(VAR_2);
 FUNC_6(FUNC_1(VAR_2),
     &VAR_2->shutdown_msg[0], &VAR_2->shutdown_msg[1]);
 if (VAR_0 == 0) {

  FUNC_7(FUNC_1(VAR_2),
      &VAR_2->shutdown_msg[0], &VAR_2->shutdown_msg[1]);
 }
 FUNC_3(VAR_2);

 FUNC_0("%s: Controller shutdown complete\n",
     FUNC_4(VAR_2->bdev));

 return (0);
}
