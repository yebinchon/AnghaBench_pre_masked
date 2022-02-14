
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb20_device {int file_ctrl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int
FUNC_2(struct libusb20_device *VAR_8, uint8_t VAR_9)
{
 int VAR_10;

 switch (VAR_9) {
 case 132:
  VAR_10 = VAR_2;
  break;
 case 131:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_5;
  break;
 case 128:
  VAR_10 = VAR_6;
  break;
 case 130:
  VAR_10 = VAR_4;
  break;
 default:
  return (VAR_0);
 }
 if (FUNC_1(VAR_8->file_ctrl, FUNC_0(VAR_7), &VAR_10)) {
  return (VAR_1);
 }
 return (0);
}
