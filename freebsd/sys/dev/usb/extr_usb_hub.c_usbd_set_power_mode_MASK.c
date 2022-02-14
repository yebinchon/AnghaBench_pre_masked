
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct usb_device {int bus; scalar_t__ power_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct usb_device*,scalar_t__) ;

void
FUNC_3(struct usb_device *VAR_3, uint8_t VAR_4)
{

 if ((VAR_4 != VAR_1) &&
     (VAR_4 != VAR_0))
  VAR_4 = VAR_2;

 VAR_4 = FUNC_2(VAR_3, VAR_4);

 VAR_3->power_mode = VAR_4;




 FUNC_1(VAR_3->bus, 0 );

}
