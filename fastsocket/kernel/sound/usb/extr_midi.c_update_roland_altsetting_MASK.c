
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface_descriptor {int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_interface {struct usb_host_interface* altsetting; struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct snd_usb_midi {int list; int dev; TYPE_1__* roland_load_ctl; struct usb_interface* iface; } ;
struct TYPE_2__ {int private_value; } ;


 struct usb_interface_descriptor* FUNC_0 (struct usb_host_interface*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_usb_midi* VAR_0)
{
 struct usb_interface *VAR_1;
 struct usb_host_interface *VAR_2;
 struct usb_interface_descriptor *VAR_3;
 int VAR_4;

 VAR_1 = VAR_0->iface;
 VAR_4 = VAR_1->cur_altsetting != VAR_1->altsetting;
 if (VAR_0->roland_load_ctl->private_value == VAR_4)
  return;
 VAR_2 = &VAR_1->altsetting[VAR_0->roland_load_ctl->private_value];
 VAR_3 = FUNC_0(VAR_2);
 FUNC_2(&VAR_0->list);
 FUNC_3(VAR_0->dev, VAR_3->bInterfaceNumber,
     VAR_3->bAlternateSetting);
 FUNC_1(&VAR_0->list);
}
