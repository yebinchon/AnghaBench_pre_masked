
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_interface {int dummy; } ;
struct snd_device {struct usb_mixer_interface* device_data; } ;


 int FUNC_0 (struct usb_mixer_interface*) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct usb_mixer_interface *VAR_1 = VAR_0->device_data;
 FUNC_0(VAR_1);
 return 0;
}
