
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_frlength_t ;
typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct bbb_transfer {int data_rem; int data_ptr; int actlen; int data_timeout; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct bbb_transfer*,int ) ;
 int FUNC_3 (struct bbb_transfer*,int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int,int) ;
 int FUNC_7 (struct usb_xfer*,int ) ;
 struct bbb_transfer* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int*,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct bbb_transfer *VAR_5 = FUNC_8(VAR_3);
 usb_frlength_t VAR_6 = FUNC_5(VAR_3);
 int VAR_7, VAR_8;

 FUNC_9(VAR_3, &VAR_7, &VAR_8, ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_3)) {
 case 128:
  VAR_5->data_rem -= VAR_7;
  VAR_5->data_ptr += VAR_7;
  VAR_5->actlen += VAR_7;

  if (VAR_7 < VAR_8) {

   VAR_5->data_rem = 0;
  }
 case 129:
  FUNC_0("max_bulk=%d, data_rem=%d\n",
      VAR_6, VAR_5->data_rem);

  if (VAR_5->data_rem == 0) {
   FUNC_3(VAR_5, VAR_1);
   break;
  }
  if (VAR_6 > VAR_5->data_rem) {
   VAR_6 = VAR_5->data_rem;
  }
  FUNC_7(VAR_3, VAR_5->data_timeout);
  FUNC_6(VAR_3, 0, VAR_5->data_ptr, VAR_6);
  FUNC_4(VAR_3);
  break;

 default:
  if (VAR_4 == VAR_2) {
   FUNC_2(VAR_5, VAR_4);
  } else {
   FUNC_3(VAR_5, VAR_0);
  }
  break;
 }
}
