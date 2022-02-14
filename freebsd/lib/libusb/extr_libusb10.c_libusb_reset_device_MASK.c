
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct libusb20_device {int dummy; } ;
struct TYPE_4__ {int dev_poll; int ctx; } ;
typedef TYPE_1__ libusb_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,struct libusb20_device*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct libusb20_device*) ;
 int FUNC_4 (struct libusb20_device*) ;
 TYPE_1__* FUNC_5 (struct libusb20_device*) ;

int
FUNC_6(struct libusb20_device *VAR_6)
{
 libusb_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_7);

 FUNC_2(VAR_7->ctx, &VAR_7->dev_poll);

 VAR_8 = FUNC_4(VAR_6);

 FUNC_0(VAR_7->ctx, &VAR_7->dev_poll,
     VAR_6, FUNC_3(VAR_6),
     VAR_2 | VAR_3 | VAR_4 | VAR_5);

 return (VAR_8 ? VAR_1 : 0);
}
