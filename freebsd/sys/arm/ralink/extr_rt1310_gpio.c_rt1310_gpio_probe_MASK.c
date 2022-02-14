
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 phandle_t VAR_3;

 if (!FUNC_4(VAR_2))
  return (VAR_1);

 if (!FUNC_3(VAR_2, "ralink,rt1310-gpio"))
  return (VAR_1);

 VAR_3 = FUNC_2(VAR_2);
 if (!FUNC_0(VAR_3, "gpio-controller"))
  return (VAR_1);

 FUNC_1(VAR_2, "RT1310 GPIO");
 return (VAR_0);
}
