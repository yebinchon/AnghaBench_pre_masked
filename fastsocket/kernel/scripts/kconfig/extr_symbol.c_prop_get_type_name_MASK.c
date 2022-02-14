
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum prop_type { ____Placeholder_prop_type } prop_type ;
const char *FUNC_0(enum prop_type VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "prompt";
 case 133:
  return "env";
 case 135:
  return "comment";
 case 132:
  return "menu";
 case 134:
  return "default";
 case 136:
  return "choice";
 case 129:
  return "select";
 case 130:
  return "range";
 case 128:
  break;
 }
 return "unknown";
}
