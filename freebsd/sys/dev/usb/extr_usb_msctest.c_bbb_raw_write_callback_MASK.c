
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_frlength_t ;
typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct bbb_transfer {int data_rem; int data_ptr; int actlen; int data_timeout; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct bbb_transfer*,int ) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int ,int,int) ;
 int FUNC_6 (struct usb_xfer*,int ) ;
 struct bbb_transfer* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int*,int*,int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_0, usb_error_t VAR_1)
{
 struct bbb_transfer *VAR_2 = FUNC_7(VAR_0);
 usb_frlength_t VAR_3 = FUNC_4(VAR_0);
 int VAR_4, VAR_5;

 FUNC_8(VAR_0, &VAR_4, &VAR_5, ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_0)) {
 case 128:
  VAR_2->data_rem -= VAR_4;
  VAR_2->data_ptr += VAR_4;
  VAR_2->actlen += VAR_4;

  if (VAR_4 < VAR_5) {

   VAR_2->data_rem = 0;
  }
 case 129:
  FUNC_0("max_bulk=%d, data_rem=%d\n",
      VAR_3, VAR_2->data_rem);

  if (VAR_2->data_rem == 0) {
   FUNC_2(VAR_2, 0);
   break;
  }
  if (VAR_3 > VAR_2->data_rem) {
   VAR_3 = VAR_2->data_rem;
  }
  FUNC_6(VAR_0, VAR_2->data_timeout);
  FUNC_5(VAR_0, 0, VAR_2->data_ptr, VAR_3);
  FUNC_3(VAR_0);
  break;

 default:
  FUNC_2(VAR_2, VAR_1);
  break;
 }
}
