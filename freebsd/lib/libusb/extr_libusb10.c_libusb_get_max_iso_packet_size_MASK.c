
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int os_priv; } ;
typedef TYPE_1__ libusb_device ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(libusb_device *VAR_0, uint8_t VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);

 switch (FUNC_0(VAR_0->os_priv)) {
 case 128:
 case 129:
  break;
 default:
  if (VAR_3 > -1) {
   VAR_2 = (1 + ((VAR_3 >> 11) & 3));
   if (VAR_2 > 3)
    VAR_2 = 3;
   VAR_3 = (VAR_3 & 0x7FF) * VAR_2;
  }
  break;
 }
 return (VAR_3);
}
