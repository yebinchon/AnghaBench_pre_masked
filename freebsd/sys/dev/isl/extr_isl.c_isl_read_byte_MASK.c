
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iic_msg {int member_1; int member_2; int * member_3; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int ) ;
 int FUNC_2 (struct iic_msg*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, uint8_t VAR_4, uint8_t *VAR_5)
{
 uint16_t VAR_6 = FUNC_0(VAR_3);
 struct iic_msg VAR_7[] = {
      { VAR_6, VAR_2 | VAR_0, 1, VAR_4 },
      { VAR_6, VAR_1, 1, *VAR_5 },
 };

 return (FUNC_1(VAR_3, VAR_7, FUNC_2(VAR_7)));
}
