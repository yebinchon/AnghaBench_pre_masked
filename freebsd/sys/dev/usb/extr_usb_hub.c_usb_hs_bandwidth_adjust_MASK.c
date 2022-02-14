
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_hub {int* uframe_usage; } ;
struct usb_device {TYPE_1__* parent_hs_hub; struct usb_bus* bus; } ;
struct usb_bus {int* uframe_usage; } ;
typedef int int16_t ;
typedef enum usb_dev_speed { ____Placeholder_usb_dev_speed } usb_dev_speed ;
struct TYPE_2__ {struct usb_hub* hub; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_bus*,int ) ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int*,int ,int,int) ;
 int FUNC_2 (struct usb_device*) ;

__attribute__((used)) static uint8_t
FUNC_3(struct usb_device *VAR_3, int16_t VAR_4,
    uint8_t VAR_5, uint8_t VAR_6)
{
 struct usb_bus *VAR_7 = VAR_3->bus;
 struct usb_hub *VAR_8;
 enum usb_dev_speed VAR_9;
 uint8_t VAR_10;

 FUNC_0(VAR_7, VAR_0);

 VAR_9 = FUNC_2(VAR_3);

 switch (VAR_9) {
 case 128:
 case 129:
  if (VAR_9 == 128) {
   VAR_4 *= 8;
  }







  VAR_8 = VAR_3->parent_hs_hub->hub;
  if (VAR_5 >= VAR_2) {
   VAR_5 = FUNC_1(VAR_8->uframe_usage,
       VAR_1, 6, VAR_6);
  }
  for (VAR_10 = VAR_5; VAR_10 < 8; VAR_10++) {
   if (VAR_6 & (1U << (VAR_10 - VAR_5))) {
    VAR_8->uframe_usage[VAR_10] += VAR_4;
    VAR_7->uframe_usage[VAR_10] += VAR_4;
   }
  }
  break;
 default:
  if (VAR_5 >= VAR_2) {
   VAR_5 = FUNC_1(VAR_7->uframe_usage, 0,
       VAR_2, VAR_6);
  }
  for (VAR_10 = VAR_5; VAR_10 < 8; VAR_10++) {
   if (VAR_6 & (1U << (VAR_10 - VAR_5))) {
    VAR_7->uframe_usage[VAR_10] += VAR_4;
   }
  }
  break;
 }
 return (VAR_5);
}
