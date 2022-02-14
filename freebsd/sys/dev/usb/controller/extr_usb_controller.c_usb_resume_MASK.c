
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int * resume_msg; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*) ;
 int FUNC_3 (struct usb_bus*) ;
 struct usb_bus* FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 struct usb_bus *VAR_1 = FUNC_4(VAR_0);

 FUNC_0("\n");

 if (VAR_1 == ((void*)0)) {

  return (0);
 }

 FUNC_2(VAR_1);
 FUNC_5(FUNC_1(VAR_1),
     &VAR_1->resume_msg[0], &VAR_1->resume_msg[1]);
 FUNC_3(VAR_1);

 return (0);
}
