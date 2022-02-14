
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_type_t ;
const char *
FUNC_0 (ucl_type_t VAR_0)
{
 const char *VAR_1 = "unknown";

 switch (VAR_0) {
 case 131:
  VAR_1 = "object";
  break;
 case 136:
  VAR_1 = "array";
  break;
 case 133:
  VAR_1 = "integer";
  break;
 case 134:
 case 129:
  VAR_1 = "number";
  break;
 case 130:
  VAR_1 = "string";
  break;
 case 135:
  VAR_1 = "boolean";
  break;
 case 128:
  VAR_1 = "userdata";
  break;
 case 132:
  VAR_1 = "null";
  break;
 }

 return VAR_1;
}
