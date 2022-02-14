
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iic_msg {int* member_3; int member_2; int member_1; int member_0; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct iic_msg*,int) ;
 int FUNC_1 (int*,int*,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4, uint8_t VAR_5, uint8_t *VAR_6, uint8_t VAR_7)
{
 uint8_t VAR_8[VAR_3 + 1];
 struct iic_msg VAR_9[1] = {
      { &VAR_0, VAR_2, VAR_7 + 1, VAR_8 },
 };

 if (VAR_7 > VAR_3)
  return (VAR_1);

 VAR_8[0] = VAR_5;
 FUNC_1(VAR_8 + 1, VAR_6, VAR_7);
 return (FUNC_0(VAR_4, VAR_9, 1));
}
