
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_type { ____Placeholder_reg_type } reg_type ;
__attribute__((used)) static const char * FUNC_0(enum reg_type VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "UNKNOWN";
 case 132:
  return "COUNTRY";
 case 128:
  return "WORLD";
 case 131:
  return "CUSTOM_WORLD";
 case 130:
  return "INTERSECTION";
 }
 return "?";
}
