
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iic_msg {struct iic_msg* member_3; int member_2; int member_1; int member_0; } ;
typedef struct iic_msg uint8_t ;
typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct iic_msg*,int ) ;
 int FUNC_2 (struct iic_msg*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 uint16_t VAR_4 = FUNC_0(VAR_1);
 uint8_t VAR_5[] = { VAR_2, VAR_3 };
 struct iic_msg VAR_6[] = {
      { VAR_4, VAR_0, FUNC_2(VAR_5), VAR_5 },
 };

 return (FUNC_1(VAR_1, VAR_6, FUNC_2(VAR_6)));
}
