
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ur ;
typedef int u_long ;
struct usb_fifo {int dummy; } ;
struct TYPE_2__ {int bmRequestType; int wLength; int wIndex; int wValue; int bRequest; } ;
struct usb_ctl_request {int ucr_data; TYPE_1__ ucr_request; } ;
struct RioCommand {int requesttype; int buffer; int length; int index; int value; int request; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct usb_ctl_request*,int ,int) ;
 int FUNC_3 (struct usb_fifo*,struct usb_ctl_request*) ;

__attribute__((used)) static int
FUNC_4(struct usb_fifo *VAR_5, u_long VAR_6, void *VAR_7,
    int VAR_8)
{
 struct usb_ctl_request VAR_9;
 struct RioCommand *VAR_10;
 int VAR_11;

 switch (VAR_6) {
 case 129:
  if (!(VAR_8 & VAR_2)) {
   VAR_11 = VAR_1;
   goto done;
  }
  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_10 = VAR_7;
  VAR_9.ucr_request.bmRequestType =
      VAR_10->requesttype | VAR_3;
  break;

 case 128:
  if (!(VAR_8 & VAR_2)) {
   VAR_11 = VAR_1;
   goto done;
  }
  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_10 = VAR_7;
  VAR_9.ucr_request.bmRequestType =
      VAR_10->requesttype | VAR_4;
  break;

 default:
  VAR_11 = VAR_0;
  goto done;
 }

 FUNC_0(2, "Sending command\n");


 VAR_9.ucr_request.bRequest = VAR_10->request;
 FUNC_1(VAR_9.ucr_request.wValue, VAR_10->value);
 FUNC_1(VAR_9.ucr_request.wIndex, VAR_10->index);
 FUNC_1(VAR_9.ucr_request.wLength, VAR_10->length);
 VAR_9.ucr_data = VAR_10->buffer;


 VAR_11 = FUNC_3(VAR_5, &VAR_9);

done:
 return (VAR_11);
}
