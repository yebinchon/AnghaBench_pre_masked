
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{

 if (!FUNC_2(VAR_1))
  return (VAR_0);
 if (!FUNC_1(VAR_1, "ti,omap4-i2c"))
  return (VAR_0);
 FUNC_0(VAR_1, "TI I2C Controller");

 return (0);
}
