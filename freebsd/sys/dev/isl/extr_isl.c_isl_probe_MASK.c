
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 uint32_t VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 != 0x88)
  return (VAR_1);
 if (FUNC_2(VAR_2, 1) != 0)
  return (VAR_1);
 FUNC_0(VAR_2, "ISL Digital Ambient Light Sensor");
 return (VAR_0);
}
