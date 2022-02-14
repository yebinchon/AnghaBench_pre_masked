
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_cdc_cm_descriptor {int bLength; int bmCapabilities; } ;
struct usb_cdc_acm_descriptor {int bLength; int bmCapabilities; } ;
struct usb_attach_arg {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (struct usb_attach_arg*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct usb_attach_arg *VAR_5, uint8_t *VAR_6, uint8_t *VAR_7)
{
 struct usb_cdc_cm_descriptor *VAR_8;
 struct usb_cdc_acm_descriptor *VAR_9;

 VAR_8 = FUNC_1(VAR_5, VAR_2, VAR_1);
 if ((VAR_8 == ((void*)0)) || (VAR_8->bLength < sizeof(*VAR_8))) {
  FUNC_0("no CM desc (faking one)\n");
  *VAR_6 = VAR_3 | VAR_4;
 } else
  *VAR_6 = VAR_8->bmCapabilities;

 VAR_9 = FUNC_1(VAR_5, VAR_2, VAR_0);
 if ((VAR_9 == ((void*)0)) || (VAR_9->bLength < sizeof(*VAR_9))) {
  FUNC_0("no ACM desc\n");
  *VAR_7 = 0;
 } else
  *VAR_7 = VAR_9->bmCapabilities;
}
