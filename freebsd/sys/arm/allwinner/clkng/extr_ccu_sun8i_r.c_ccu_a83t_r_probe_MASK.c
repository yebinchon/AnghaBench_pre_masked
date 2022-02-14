
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{

 if (!FUNC_2(VAR_2))
  return (VAR_1);

 if (!FUNC_1(VAR_2, "allwinner,sun8i-a83t-r-ccu"))
  return (VAR_1);

 FUNC_0(VAR_2, "Allwinner A83T_R Clock Control Unit NG");
 return (VAR_0);
}
