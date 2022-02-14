
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int member_2; int* member_3; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct iic_msg*,int) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, int VAR_3, int VAR_4)
{

 uint8_t VAR_5[2];
 struct iic_msg VAR_6[1] = {
      { VAR_0, &VAR_1, 2, VAR_5 },
 };
 VAR_5[0] = VAR_3;
 VAR_5[1] = VAR_4 & 0xff;
 return FUNC_0(VAR_2, VAR_6, 1);
}
