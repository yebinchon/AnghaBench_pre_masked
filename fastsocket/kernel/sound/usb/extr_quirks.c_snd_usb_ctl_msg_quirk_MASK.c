
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

void FUNC_2(struct usb_device *VAR_2, unsigned int VAR_3,
      __u8 VAR_4, __u8 VAR_5, __u16 VAR_6,
      __u16 VAR_7, void *VAR_8, __u16 VAR_9)
{




 if ((FUNC_0(VAR_2->descriptor.idVendor) == 0x23ba) &&
     (VAR_5 & VAR_1) == VAR_0)
  FUNC_1(20);
}
