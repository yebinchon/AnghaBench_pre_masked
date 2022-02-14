
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 int VAR_4;

 if (!FUNC_4(VAR_3))
  return (VAR_1);

 if (!FUNC_3(VAR_3, "fsl,ipu3"))
  return (VAR_1);

 FUNC_2(VAR_3, "i.MX5x Image Processing Unit v3 (FB)");

 VAR_4 = FUNC_5(FUNC_1(VAR_3),
     FUNC_0(VAR_3) | VAR_2);

 if (VAR_4 != 0)
  return (VAR_4);

 return (VAR_0);
}
