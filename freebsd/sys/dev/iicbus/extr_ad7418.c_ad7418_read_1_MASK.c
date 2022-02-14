
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int member_2; int* member_3; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, int VAR_4)
{
 uint8_t VAR_5 = VAR_4;
 uint8_t VAR_6[1];
 struct iic_msg VAR_7[2] = {
      { VAR_0, &VAR_2, 1, VAR_5 },
      { VAR_0, &VAR_1, 1, VAR_6 },
 };
 return FUNC_0(VAR_3, VAR_7, 2) != 0 ? -1 : VAR_6[0];
}
