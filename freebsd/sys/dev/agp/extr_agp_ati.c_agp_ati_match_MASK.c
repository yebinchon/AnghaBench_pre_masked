
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
 if (FUNC_1(VAR_2) != VAR_0 ||
     FUNC_3(VAR_2) != VAR_1)
  return ((void*)0);

 if (FUNC_0(VAR_2) == 0)
  return ((void*)0);

 switch (FUNC_2(VAR_2)) {
 case 0xcab01002:
  return ("ATI RS100 AGP bridge");
 case 0xcab21002:
  return ("ATI RS200 AGP bridge");
 case 0xcbb21002:
  return ("ATI RS200M AGP bridge");
 case 0xcab31002:
  return ("ATI RS250 AGP bridge");
 case 0x58301002:
  return ("ATI RS300_100 AGP bridge");
 case 0x58311002:
  return ("ATI RS300_133 AGP bridge");
 case 0x58321002:
  return ("ATI RS300_166 AGP bridge");
 case 0x58331002:
  return ("ATI RS300_200 AGP bridge");
 }

 return ((void*)0);
}
