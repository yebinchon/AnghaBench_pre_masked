
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct snd_usb_audio {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_interface*) ;
 struct snd_usb_audio* FUNC_1 (int ,struct usb_interface*,struct usb_device_id const*) ;
 int FUNC_2 (struct usb_interface*,struct snd_usb_audio*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_1,
      const struct usb_device_id *VAR_2)
{
 struct snd_usb_audio *VAR_3;
 VAR_3 = FUNC_1(FUNC_0(VAR_1), VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_2(VAR_1, VAR_3);
  return 0;
 } else
  return -VAR_0;
}
