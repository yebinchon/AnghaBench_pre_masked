
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_device {int dev_poll; int * ctx; } ;
struct libusb20_device {int dummy; } ;
typedef int libusb_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct libusb20_device*) ;
 struct libusb_device* FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb_device*) ;

void
FUNC_5(struct libusb20_device *VAR_0)
{
 libusb_context *VAR_1;
 struct libusb_device *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = FUNC_3(VAR_0);
 VAR_1 = VAR_2->ctx;

 FUNC_0(VAR_1, &VAR_2->dev_poll);

 FUNC_2(VAR_0);


 FUNC_4(VAR_2);


 FUNC_1(VAR_1);
}
