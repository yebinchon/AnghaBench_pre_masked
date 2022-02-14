
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int endpoint; } ;


 int FUNC_0 (int,char*,struct usb_xfer*,int ,int ) ;
 int FUNC_1 (struct usb_xfer*,int ) ;
 int FUNC_2 (struct usb_xfer*,int ) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0, usb_error_t VAR_1)
{
 FUNC_0(2, "xfer=%p, endpoint=%p, error=%d\n",
     VAR_0, VAR_0->endpoint, VAR_1);


 FUNC_2(VAR_0, VAR_1);


 FUNC_1(VAR_0, VAR_1);
}
