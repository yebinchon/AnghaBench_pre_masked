
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct bbb_transfer {int status_try; TYPE_1__* csw; } ;
struct bbb_csw {int dummy; } ;
struct TYPE_2__ {int bCSWStatus; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct bbb_transfer*,int ) ;
 int FUNC_3 (struct bbb_transfer*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int) ;
 struct bbb_transfer* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int*,int*,int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_5, usb_error_t VAR_6)
{
 struct bbb_transfer *VAR_7 = FUNC_7(VAR_5);
 int VAR_8;
 int VAR_9;

 FUNC_8(VAR_5, &VAR_8, &VAR_9, ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_5)) {
 case 128:



  if (VAR_8 < (int)sizeof(struct bbb_csw)) {
   FUNC_2(VAR_7, VAR_4);
  } else if (VAR_7->csw->bCSWStatus == VAR_0) {
   FUNC_2(VAR_7, 0);
  } else {
   FUNC_2(VAR_7, VAR_1);
  }
  break;

 case 129:
  FUNC_6(VAR_5, 0,
      sizeof(struct bbb_csw));
  FUNC_5(VAR_5);
  break;

 default:
  FUNC_0("Failed to read CSW: %s, try %d\n",
      FUNC_4(VAR_6), VAR_7->status_try);

  if (VAR_6 == VAR_3 || VAR_7->status_try) {
   FUNC_2(VAR_7, VAR_6);
  } else {
   VAR_7->status_try = 1;
   FUNC_3(VAR_7, VAR_2);
  }
  break;
 }
}
