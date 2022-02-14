
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int u_char ;
struct iic_msg {int member_1; int member_2; char* member_3; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct iic_msg*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, u_char VAR_4, char VAR_5, short *VAR_6)
{
 uint8_t VAR_7[2];
 struct iic_msg VAR_8[] = {
      { VAR_4, VAR_2 | VAR_0, 1, &VAR_5 },
      { VAR_4, VAR_1, FUNC_2(VAR_7), VAR_7 },
 };
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_8);
 if (VAR_9 == 0)
  *VAR_6 = ((uint16_t)VAR_7[1] << 8) | VAR_7[0];
 return (FUNC_1(VAR_9));
}
