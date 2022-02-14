
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bDescriptorType; int bInterfaceNumber; int bAlternateSetting; int bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; } ;
typedef TYPE_1__ usb_interface_descriptor_t ;
typedef int usb_config_descriptor_t ;
struct usb_descriptor {int dummy; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 struct usb_descriptor* FUNC_0 (int *,struct usb_descriptor*) ;

__attribute__((used)) static usb_interface_descriptor_t *
FUNC_1(usb_config_descriptor_t *VAR_1,
    void *VAR_2, int32_t VAR_3, int32_t VAR_4, int32_t VAR_5,
    int32_t VAR_6, int32_t VAR_7)
{
 struct usb_descriptor *VAR_8 = ((void*)0);
 usb_interface_descriptor_t *VAR_9;

 while ((VAR_8 = FUNC_0(VAR_1, VAR_8)) != ((void*)0)) {
  VAR_9 = (usb_interface_descriptor_t *)VAR_8;
  if (VAR_9->bDescriptorType != VAR_0)
   continue;
  if (!(VAR_3 == -1 || VAR_9->bInterfaceNumber == VAR_3))
   continue;
  if (!(VAR_4 == -1 || VAR_9->bAlternateSetting == VAR_4))
   continue;
  if (!(VAR_5 == -1 || VAR_9->bInterfaceClass == VAR_5))
   continue;
  if (!(VAR_6 == -1 ||
      VAR_9->bInterfaceSubClass == VAR_6))
   continue;
  if (!(VAR_7 == -1 || VAR_9->bInterfaceProtocol == VAR_7))
   continue;
  return (VAR_9);
 }

 return (((void*)0));
}
