
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int power_wdog; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct usb_bus*,int ) ;
 int FUNC_3 (struct usb_bus*) ;
 int VAR_1 ;
 int FUNC_4 (struct usb_bus*) ;
 int FUNC_5 (int *,int,void (*) (void*),void*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct usb_bus *VAR_3 = VAR_2;

 FUNC_2(VAR_3, VAR_0);

 FUNC_5(&VAR_3->power_wdog,
     4 * VAR_1, FUNC_7, VAR_2);
}
