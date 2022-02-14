
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_xfer {int stream_id; int endpoint; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,struct usb_xfer*) ;
 int FUNC_2 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_3(struct usb_xfer *VAR_0)
{
 FUNC_0("\n");


 FUNC_2(VAR_0);

 FUNC_1(VAR_0->endpoint,
     VAR_0->stream_id, VAR_0);
}
