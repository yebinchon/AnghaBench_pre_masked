
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (int *,struct snd_card*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ,struct usb_interface*,struct usb_device_id const*,struct snd_card**) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_0, const struct usb_device_id *VAR_1)
{
 struct snd_card *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(FUNC_1(VAR_0), VAR_0, VAR_1, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_0(&VAR_0->dev, VAR_2);
 return 0;
}
