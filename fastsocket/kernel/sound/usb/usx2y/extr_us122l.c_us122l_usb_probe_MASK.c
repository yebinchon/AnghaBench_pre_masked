
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct snd_card*,int *) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (struct usb_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct usb_device*,int ) ;
 int FUNC_8 (struct usb_device*,struct snd_card**) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_1,
       const struct usb_device_id *VAR_2,
       struct snd_card **VAR_3)
{
 struct usb_device *VAR_4 = FUNC_0(VAR_1);
 struct snd_card *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_3(VAR_5, &VAR_1->dev);
 if (!FUNC_4(VAR_5)) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_5);
  return VAR_6;
 }

 FUNC_6(FUNC_7(VAR_4, 0));
 FUNC_5(VAR_4);
 *VAR_3 = VAR_5;
 return 0;
}
