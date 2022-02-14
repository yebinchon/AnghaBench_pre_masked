
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 char const* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 const char *VAR_2;






 if (FUNC_3("i2c", FUNC_2(VAR_1)) == 0) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 != ((void*)0) && FUNC_3("i2cpcf,8584", VAR_2) == 0) {
   FUNC_0(VAR_1, "PCF8584 I2C bus controller");
   return (0);
  }
 }
 return (VAR_0);
}
