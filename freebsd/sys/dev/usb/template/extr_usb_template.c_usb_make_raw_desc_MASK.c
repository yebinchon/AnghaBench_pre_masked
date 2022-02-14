
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_temp_setup {int size; scalar_t__ bInterfaceNumber; scalar_t__ buf; } ;
struct usb_interface_assoc_descriptor {int bFirstInterface; } ;
struct usb_cdc_union_descriptor {int * bSlaveInterface; int bMasterInterface; } ;
struct usb_cdc_cm_descriptor {int bDataInterface; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 void* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (void*,int const*,int) ;

__attribute__((used)) static void
FUNC_2(struct usb_temp_setup *VAR_4,
    const uint8_t *VAR_5)
{
 void *VAR_6;
 uint8_t VAR_7;




 if (VAR_5) {
  VAR_7 = VAR_5[0];
  if (VAR_4->buf) {
   VAR_6 = FUNC_0(VAR_4->buf, VAR_4->size);
   FUNC_1(VAR_6, VAR_5, VAR_7);



   if ((VAR_5[0] == sizeof(struct usb_cdc_union_descriptor)) &&
       (VAR_5[1] == VAR_2) &&
       (VAR_5[2] == VAR_1)) {
    struct usb_cdc_union_descriptor *VAR_8 = (void *)VAR_6;



    VAR_8->bMasterInterface +=
        VAR_4->bInterfaceNumber;
    VAR_8->bSlaveInterface[0] +=
        VAR_4->bInterfaceNumber;
   }



   if ((VAR_5[0] == sizeof(struct usb_interface_assoc_descriptor)) &&
       (VAR_5[1] == VAR_3)) {
    struct usb_interface_assoc_descriptor *VAR_9 = (void *)VAR_6;



    VAR_9->bFirstInterface +=
        VAR_4->bInterfaceNumber;
   }



   if ((VAR_5[0] == sizeof(struct usb_cdc_cm_descriptor)) &&
       (VAR_5[1] == VAR_2) &&
       (VAR_5[2] == VAR_0)) {
    struct usb_cdc_cm_descriptor *VAR_10 = (void *)VAR_6;



    VAR_10->bDataInterface +=
        VAR_4->bInterfaceNumber;
   }
  }
  VAR_4->size += VAR_7;
 }
}
