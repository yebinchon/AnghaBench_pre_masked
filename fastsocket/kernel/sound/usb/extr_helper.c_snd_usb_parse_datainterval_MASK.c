
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_interface {int dummy; } ;
struct snd_usb_audio {int dev; } ;
struct TYPE_2__ {int bInterval; } ;




 TYPE_1__* FUNC_0 (struct usb_host_interface*,int ) ;
 int FUNC_1 (int ) ;

unsigned char FUNC_2(struct snd_usb_audio *VAR_0,
      struct usb_host_interface *VAR_1)
{
 switch (FUNC_1(VAR_0->dev)) {
 case 129:
 case 128:
  if (FUNC_0(VAR_1, 0)->bInterval >= 1 &&
      FUNC_0(VAR_1, 0)->bInterval <= 4)
   return FUNC_0(VAR_1, 0)->bInterval - 1;
  break;
 default:
  break;
 }
 return 0;
}
