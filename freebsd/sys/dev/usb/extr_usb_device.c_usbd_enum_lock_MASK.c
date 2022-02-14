
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_device {int sr_sx; int enum_sx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

uint8_t
FUNC_3(struct usb_device *VAR_1)
{
 if (FUNC_2(&VAR_1->enum_sx))
  return (0);

 FUNC_1(&VAR_1->enum_sx);
 FUNC_1(&VAR_1->sr_sx);





 FUNC_0(&VAR_0);
 return (1);
}
