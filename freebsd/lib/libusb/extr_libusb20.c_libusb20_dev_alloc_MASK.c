
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb20_device {int file; int file_ctrl; int * methods; } ;


 int VAR_0 ;
 struct libusb20_device* FUNC_0 (int) ;
 int FUNC_1 (struct libusb20_device*,int ,int) ;

struct libusb20_device *
FUNC_2(void)
{
 struct libusb20_device *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1));
 if (VAR_1 == ((void*)0)) {
  return (((void*)0));
 }
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->file = -1;
 VAR_1->file_ctrl = -1;
 VAR_1->methods = &VAR_0;
 return (VAR_1);
}
