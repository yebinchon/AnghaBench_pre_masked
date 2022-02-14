
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct libusb20_device {int dummy; } ;
struct TYPE_4__ {int claimed_interfaces; int dev_poll; int ctx; } ;
typedef TYPE_1__ libusb_device ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,struct libusb20_device*,int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct libusb20_device*) ;
 int FUNC_6 (struct libusb20_device*,int,int) ;
 TYPE_1__* FUNC_7 (struct libusb20_device*) ;

int
FUNC_8(struct libusb20_device *VAR_7,
    int VAR_8, int VAR_9)
{
 libusb_device *VAR_10;
 int VAR_11 = 0;

 VAR_10 = FUNC_7(VAR_7);
 if (VAR_10 == ((void*)0))
  return (VAR_0);

 if (VAR_8 < 0 || VAR_8 > 31)
  return (VAR_0);

 FUNC_0(VAR_10->ctx);
 if (!(VAR_10->claimed_interfaces & (1 << VAR_8)))
  VAR_11 = VAR_1;
 FUNC_1(VAR_10->ctx);

 if (VAR_11)
  return (VAR_11);

 FUNC_3(VAR_10);

 FUNC_4(VAR_10->ctx, &VAR_10->dev_poll);

 VAR_11 = FUNC_6(VAR_7,
     VAR_8, VAR_9);

 FUNC_2(VAR_10->ctx, &VAR_10->dev_poll,
     VAR_7, FUNC_5(VAR_7),
     VAR_3 | VAR_4 | VAR_5 | VAR_6);

 return (VAR_11 ? VAR_2 : 0);
}
