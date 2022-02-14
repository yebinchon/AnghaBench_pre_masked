
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ phandle_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static bool
FUNC_5(device_t VAR_0)
{
 phandle_t VAR_1, VAR_2;

 VAR_1 = FUNC_3(VAR_0);

 if (FUNC_0(VAR_1, "allwinner,use-internal-phy"))
  return (1);

 VAR_2 = FUNC_2(VAR_0);
 return (VAR_2 != 0 && FUNC_4(FUNC_1(VAR_2),
     "allwinner,sun8i-h3-mdio-internal") != 0);
}
