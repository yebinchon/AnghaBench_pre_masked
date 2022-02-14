
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bhnd_nvram_type ;
 int FUNC_0 (char*,int) ;

const char *
FUNC_1(bhnd_nvram_type VAR_0)
{
 switch (VAR_0) {
 case 129:
  return ("uint8");
 case 135:
  return ("uint16");
 case 133:
  return ("uint32");
 case 131:
  return ("uint64");
 case 149:
  return ("char");
 case 140:
  return ("int8");
 case 146:
  return ("int16");
 case 144:
  return ("int32");
 case 142:
  return ("int64");
 case 137:
  return ("string");
 case 151:
  return ("bool");
 case 138:
  return ("null");
 case 147:
  return ("data");
 case 128:
  return ("uint8[]");
 case 134:
  return ("uint16[]");
 case 132:
  return ("uint32[]");
 case 130:
  return ("uint64[]");
 case 139:
  return ("int8[]");
 case 145:
  return ("int16[]");
 case 143:
  return ("int32[]");
 case 141:
  return ("int64[]");
 case 148:
  return ("char[]");
 case 136:
  return ("string[]");
 case 150:
  return ("bool[]");
 }


 FUNC_0("bhnd nvram type %u unknown", VAR_0);
}
