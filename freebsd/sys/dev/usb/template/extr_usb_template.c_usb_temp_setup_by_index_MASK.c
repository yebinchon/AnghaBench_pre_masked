
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint16_t ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static usb_error_t
FUNC_1(struct usb_device *VAR_13, uint16_t VAR_14)
{
 usb_error_t VAR_15;

 switch (VAR_14) {
 case 132:
  VAR_15 = FUNC_0(VAR_13, &VAR_8);
  break;
 case 138:
  VAR_15 = FUNC_0(VAR_13, &VAR_2);
  break;
 case 131:
  VAR_15 = FUNC_0(VAR_13, &VAR_9);
  break;
 case 134:
  VAR_15 = FUNC_0(VAR_13, &VAR_6);
  break;
 case 139:
  VAR_15 = FUNC_0(VAR_13, &VAR_1);
  break;
 case 136:
  VAR_15 = FUNC_0(VAR_13, &VAR_4);
  break;
 case 133:
  VAR_15 = FUNC_0(VAR_13, &VAR_7);
  break;
 case 129:
  VAR_15 = FUNC_0(VAR_13, &VAR_11);
  break;
 case 128:
  VAR_15 = FUNC_0(VAR_13, &VAR_12);
  break;
 case 135:
  VAR_15 = FUNC_0(VAR_13, &VAR_5);
  break;
 case 130:
  VAR_15 = FUNC_0(VAR_13, &VAR_10);
  break;
 case 137:
  VAR_15 = FUNC_0(VAR_13, &VAR_3);
  break;
 default:
  return (VAR_0);
 }

 return (VAR_15);
}
