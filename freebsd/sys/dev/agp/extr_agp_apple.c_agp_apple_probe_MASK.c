
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (char*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{

 if (FUNC_6("agp", FUNC_1(VAR_4)))
  return (VAR_1);

 if (FUNC_3(VAR_4) != VAR_2
     || FUNC_5(VAR_4) != VAR_3)
  return (VAR_1);

 if (FUNC_0(VAR_4) == 0)
  return (VAR_1);

 if (FUNC_3(VAR_4) != VAR_2
     || FUNC_5(VAR_4) != VAR_3)
  return (VAR_1);

 switch (FUNC_4(VAR_4)) {
 case 0x0020106b:
 case 0x0027106b:
  FUNC_2(VAR_4, "Apple UniNorth AGP Bridge");
  return (VAR_0);
 case 0x002d106b:
  FUNC_2(VAR_4, "Apple UniNorth 1.5 AGP Bridge");
  return (VAR_0);
 case 0x0034106b:
  FUNC_2(VAR_4, "Apple UniNorth 2 AGP Bridge");
  return (VAR_0);
 case 0x004b106b:
 case 0x0058106b:
 case 0x0059106b:
  FUNC_2(VAR_4, "Apple U3 AGP Bridge");
  return (VAR_0);
 case 0x0066106b:
  FUNC_2(VAR_4, "Apple Intrepid AGP Bridge");
  return (VAR_0);
 }

 return (VAR_1);
}
