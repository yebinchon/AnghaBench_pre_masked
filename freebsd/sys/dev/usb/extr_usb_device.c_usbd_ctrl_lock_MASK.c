
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device {int ctrl_sx; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_device*) ;

uint8_t
FUNC_4(struct usb_device *VAR_0)
{
 if (FUNC_1(&VAR_0->ctrl_sx))
  return (0);
 FUNC_0(&VAR_0->ctrl_sx);





 if (FUNC_2(VAR_0))
  FUNC_3(VAR_0);
 return (1);
}
