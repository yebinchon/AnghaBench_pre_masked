
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static const char*
FUNC_4(device_t VAR_2)
{
 if (FUNC_1(VAR_2) != VAR_0
     || FUNC_3(VAR_2) != VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_2) == 0)
  return ((void*)0);

 switch (FUNC_2(VAR_2)) {
 case 0x167110b9:
  return ("Ali M1671 host to AGP bridge");
 case 0x154110b9:
  return ("Ali M1541 host to AGP bridge");
 case 0x162110b9:
  return ("Ali M1621 host to AGP bridge");
 }

 return ((void*)0);
}
