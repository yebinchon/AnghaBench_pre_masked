
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb_device {int ctx; } ;
struct libusb20_transfer {int dummy; } ;
struct libusb20_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct libusb20_transfer* FUNC_2 (struct libusb20_device*,int ,int ) ;
 int FUNC_3 (struct libusb20_transfer*) ;
 int FUNC_4 (struct libusb20_transfer*) ;
 int FUNC_5 (struct libusb20_transfer*,int ,int,int ) ;
 struct libusb_device* FUNC_6 (struct libusb20_device*) ;

int
FUNC_7(struct libusb20_device *VAR_3, uint8_t VAR_4)
{
 struct libusb20_transfer *VAR_5;
 struct libusb_device *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_3, VAR_4, 0);
 if (VAR_5 == ((void*)0))
  return (VAR_1);

 VAR_6 = FUNC_6(VAR_3);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_0(VAR_6->ctx);
 VAR_7 = FUNC_5(VAR_5, 0, 1, VAR_4);
 FUNC_1(VAR_6->ctx);

 if (VAR_7 != 0 && VAR_7 != VAR_0)
  return (VAR_2);

 FUNC_3(VAR_5);


 if (VAR_7 == 0) {
  FUNC_0(VAR_6->ctx);
  FUNC_4(VAR_5);
  FUNC_1(VAR_6->ctx);
 }
 return (0);
}
