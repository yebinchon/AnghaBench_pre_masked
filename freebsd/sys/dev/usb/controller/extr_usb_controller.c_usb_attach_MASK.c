
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int bus_roothold; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct usb_bus* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct usb_bus*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct usb_bus *VAR_3 = FUNC_1(VAR_2);

 FUNC_0("\n");

 if (VAR_3 == ((void*)0)) {
  FUNC_3(VAR_2, "USB device has no ivars\n");
  return (VAR_0);
 }







 FUNC_5(VAR_2, VAR_3);

 return (0);
}
