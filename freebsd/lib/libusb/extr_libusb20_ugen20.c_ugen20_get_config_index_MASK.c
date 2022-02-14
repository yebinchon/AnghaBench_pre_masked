
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb20_device {int file_ctrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_2(struct libusb20_device *VAR_2, uint8_t *VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_2->file_ctrl, FUNC_0(VAR_1), &VAR_4)) {
  return (VAR_0);
 }
 *VAR_3 = VAR_4;

 return (0);
}
