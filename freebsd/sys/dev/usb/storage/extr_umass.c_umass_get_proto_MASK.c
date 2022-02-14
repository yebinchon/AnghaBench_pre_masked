
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; } ;
struct usb_interface {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct usb_interface_descriptor* FUNC_0 (struct usb_interface*) ;

__attribute__((used)) static uint16_t
FUNC_1(struct usb_interface *VAR_8)
{
 struct usb_interface_descriptor *VAR_9;
 uint16_t VAR_10;

 VAR_10 = 0;


 VAR_9 = FUNC_0(VAR_8);
 if ((VAR_9 == ((void*)0)) ||
     (VAR_9->bInterfaceClass != VAR_0)) {
  goto done;
 }
 switch (VAR_9->bInterfaceSubClass) {
 case 131:
  VAR_10 |= VAR_6;
  break;
 case 128:
  VAR_10 |= VAR_7;
  break;
 case 132:
  VAR_10 |= VAR_5;
  break;
 case 130:
 case 129:
  VAR_10 |= VAR_1;
  break;
 default:
  goto done;
 }

 switch (VAR_9->bInterfaceProtocol) {
 case 134:
  VAR_10 |= VAR_3;
  break;
 case 133:
  VAR_10 |= VAR_4;
  break;
 case 135:
 case 136:
  VAR_10 |= VAR_2;
  break;
 default:
  goto done;
 }
done:
 return (VAR_10);
}
