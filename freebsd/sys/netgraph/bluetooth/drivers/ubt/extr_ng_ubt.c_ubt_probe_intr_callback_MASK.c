
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ubt_hci_event {int dummy; } ;


 int FUNC_0 (struct ubt_hci_event*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct ubt_hci_event*,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct ubt_hci_event* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;
 int FUNC_12 (struct ubt_hci_event*) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct ubt_hci_event *VAR_3 = FUNC_10(VAR_1);
 struct usb_page_cache *VAR_4;
 int VAR_5;

 FUNC_11(VAR_1, &VAR_5, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_1)) {
 case 128:
  if (VAR_5 > FUNC_0(VAR_3))
   VAR_5 = FUNC_0(VAR_3);
  VAR_4 = FUNC_6(VAR_1, 0);
  FUNC_3(VAR_4, 0, VAR_3, VAR_5);

  FUNC_12(VAR_3);
  break;

        case 129:
submit_next:

  FUNC_9(VAR_1);
  FUNC_8(VAR_1, 0, FUNC_7(VAR_1));
  FUNC_5(VAR_1);
  break;

 default:
  if (VAR_2 != VAR_0) {
   FUNC_2("ng_ubt: interrupt transfer failed: %s\n",
    FUNC_4(VAR_2));
   goto submit_next;
  }
  break;
 }
}
