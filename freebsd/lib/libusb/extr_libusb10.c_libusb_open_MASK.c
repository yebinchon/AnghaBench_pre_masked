
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct libusb20_device {int dummy; } ;
typedef struct libusb20_device libusb_device_handle ;
struct TYPE_6__ {int dev_poll; struct libusb20_device* os_priv; int * ctx; } ;
typedef TYPE_1__ libusb_device ;
typedef int libusb_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *,struct libusb20_device*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct libusb20_device*) ;
 int FUNC_3 (struct libusb20_device*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(libusb_device *VAR_7, libusb_device_handle **VAR_8)
{
 libusb_context *VAR_9 = VAR_7->ctx;
 struct libusb20_device *VAR_10 = VAR_7->os_priv;
 int VAR_11;

 if (VAR_8 == ((void*)0))
  return (VAR_0);


 *VAR_8 = ((void*)0);

 VAR_7 = FUNC_4(VAR_7);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 VAR_11 = FUNC_3(VAR_10, VAR_2);
 if (VAR_11) {
  FUNC_5(VAR_7);
  return (VAR_1);
 }
 FUNC_0(VAR_9, &VAR_7->dev_poll, VAR_10, FUNC_2(VAR_10), VAR_3 |
     VAR_4 | VAR_5 | VAR_6);


 FUNC_1(VAR_9);

 *VAR_8 = VAR_10;

 return (0);
}
