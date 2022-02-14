
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct libusb_transfer {int status; int dev_handle; } ;
struct libusb_super_transfer {int state; } ;
struct libusb_device {TYPE_1__* ctx; } ;
struct libusb20_transfer {int dummy; } ;
struct TYPE_2__ {int tr_done; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct libusb_super_transfer*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct libusb20_transfer*,int *) ;
 struct libusb_device* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct libusb20_transfer *VAR_2,
    struct libusb_super_transfer *VAR_3, int VAR_4)
{
 struct libusb_transfer *VAR_5;
 struct libusb_device *VAR_6;

 VAR_5 = (struct libusb_transfer *)(
     ((uint8_t *)VAR_3) + sizeof(*VAR_3));

 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, ((void*)0));


 VAR_5->status = VAR_4;


 VAR_3->state = VAR_0;

 VAR_6 = FUNC_2(VAR_5->dev_handle);

 FUNC_0(&VAR_6->ctx->tr_done, VAR_3, VAR_1);
}
