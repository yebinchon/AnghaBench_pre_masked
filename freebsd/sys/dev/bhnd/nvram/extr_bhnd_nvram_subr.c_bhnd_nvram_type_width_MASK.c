
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int bhnd_nvram_type ;
typedef int bhnd_nvram_bool_t ;
 int FUNC_0 (char*,int) ;

size_t
FUNC_1(bhnd_nvram_type VAR_0)
{
 switch (VAR_0) {
 case 137:
 case 136:
 case 147:
  return (0);

 case 138:
  return (0);

 case 151:
 case 150:
  return (sizeof(bhnd_nvram_bool_t));

 case 149:
 case 148:
 case 129:
 case 128:
 case 140:
 case 139:
  return (sizeof(uint8_t));

 case 135:
 case 134:
 case 146:
 case 145:
  return (sizeof(uint16_t));

 case 133:
 case 132:
 case 144:
 case 143:
  return (sizeof(uint32_t));

 case 131:
 case 130:
 case 142:
 case 141:
  return (sizeof(uint64_t));
 }


 FUNC_0("bhnd nvram type %u unknown", VAR_0);
}
