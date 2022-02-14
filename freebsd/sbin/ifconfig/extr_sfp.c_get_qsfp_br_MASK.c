
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct i2c_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_info*,int ,int ,int,int*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct i2c_info *VAR_3)
{
 uint8_t VAR_4;
 uint32_t VAR_5;

 VAR_4 = 0;
 FUNC_0(VAR_3, VAR_0, VAR_1, 1, &VAR_4);
 VAR_5 = VAR_4 * 100;
 if (VAR_4 == 0xFF) {
  FUNC_0(VAR_3, VAR_0, VAR_2, 1, &VAR_4);
  VAR_5 = VAR_4 * 250;
 }

 return (VAR_5);
}
