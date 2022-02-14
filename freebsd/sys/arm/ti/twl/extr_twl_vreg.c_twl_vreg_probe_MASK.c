
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 if (FUNC_2(FUNC_0(VAR_1)))
  FUNC_1(VAR_1, "TI TWL4030 PMIC Voltage Regulators");
 else if (FUNC_3(FUNC_0(VAR_1)) ||
          FUNC_4(FUNC_0(VAR_1)))
  FUNC_1(VAR_1, "TI TWL6025/TWL6030 PMIC Voltage Regulators");
 else
  return (VAR_0);

 return (0);
}
