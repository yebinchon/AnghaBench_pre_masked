
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct usb_bus {int isoc_time_last; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_bus*,int ) ;
 int VAR_1 ;

uint16_t
FUNC_1(struct usb_bus *VAR_2, uint16_t VAR_3)
{
 uint16_t VAR_4;

 FUNC_0(VAR_2, VAR_0);

 VAR_4 = VAR_2->isoc_time_last & (VAR_1 - 1);

 VAR_3 &= (VAR_1 - 1);

 if (VAR_3 < VAR_4) {

  VAR_2->isoc_time_last += VAR_1;
 }


 VAR_2->isoc_time_last &= ~(VAR_1 - 1);
 VAR_2->isoc_time_last |= VAR_3;

 return (VAR_2->isoc_time_last);
}
