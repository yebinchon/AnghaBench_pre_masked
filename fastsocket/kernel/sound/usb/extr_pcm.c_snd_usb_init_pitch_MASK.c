
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface_descriptor {int bInterfaceProtocol; } ;
struct usb_host_interface {int dummy; } ;
struct snd_usb_audio {int dummy; } ;
struct audioformat {int attributes; } ;


 int VAR_0 ;


 struct usb_interface_descriptor* FUNC_0 (struct usb_host_interface*) ;
 int FUNC_1 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*) ;
 int FUNC_2 (struct snd_usb_audio*,int,struct usb_host_interface*,struct audioformat*) ;

int FUNC_3(struct snd_usb_audio *VAR_1, int VAR_2,
         struct usb_host_interface *VAR_3,
         struct audioformat *VAR_4)
{
 struct usb_interface_descriptor *VAR_5 = FUNC_0(VAR_3);


 if (!(VAR_4->attributes & VAR_0))
  return 0;

 switch (VAR_5->bInterfaceProtocol) {
 case 129:
 default:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);

 case 128:
  return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 }
}
