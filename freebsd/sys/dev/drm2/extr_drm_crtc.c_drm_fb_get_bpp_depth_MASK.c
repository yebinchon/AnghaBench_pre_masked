
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;
void FUNC_1(uint32_t VAR_0, unsigned int *VAR_1,
     int *VAR_2)
{
 switch (VAR_0) {
 case 143:
 case 142:
 case 152:
  *VAR_1 = 8;
  *VAR_2 = 8;
  break;
 case 130:
 case 133:
 case 135:
 case 145:
 case 155:
 case 158:
 case 138:
 case 148:
  *VAR_1 = 15;
  *VAR_2 = 16;
  break;
 case 141:
 case 151:
  *VAR_1 = 16;
  *VAR_2 = 16;
  break;
 case 140:
 case 150:
  *VAR_1 = 24;
  *VAR_2 = 24;
  break;
 case 128:
 case 131:
 case 134:
 case 144:
  *VAR_1 = 24;
  *VAR_2 = 32;
  break;
 case 129:
 case 132:
 case 136:
 case 146:
 case 154:
 case 157:
 case 139:
 case 149:
  *VAR_1 = 30;
  *VAR_2 = 32;
  break;
 case 153:
 case 156:
 case 137:
 case 147:
  *VAR_1 = 32;
  *VAR_2 = 32;
  break;
 default:
  FUNC_0("unsupported pixel format\n");
  *VAR_1 = 0;
  *VAR_2 = 0;
  break;
 }
}
