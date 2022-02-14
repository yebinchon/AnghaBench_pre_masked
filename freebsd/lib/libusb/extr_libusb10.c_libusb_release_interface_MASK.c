
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct libusb20_device {scalar_t__ auto_detach; } ;
struct TYPE_3__ {int claimed_interfaces; int ctx; } ;
typedef TYPE_1__ libusb_device ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct libusb20_device*,int) ;
 TYPE_1__* FUNC_3 (struct libusb20_device*) ;

int
FUNC_4(struct libusb20_device *VAR_2, int VAR_3)
{
 libusb_device *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 if (VAR_3 < 0 || VAR_3 > 31)
  return (VAR_0);

 if (VAR_2->auto_detach != 0) {
  VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (VAR_5 != 0)
   goto done;
 }

 FUNC_0(VAR_4->ctx);
 if (!(VAR_4->claimed_interfaces & (1 << VAR_3)))
  VAR_5 = VAR_1;
 else
  VAR_4->claimed_interfaces &= ~(1 << VAR_3);
 FUNC_1(VAR_4->ctx);
done:
 return (VAR_5);
}
