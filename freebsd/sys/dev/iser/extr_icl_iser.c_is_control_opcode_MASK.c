
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;







 int VAR_0 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static bool
FUNC_1(uint8_t VAR_1)
{
 bool VAR_2 = 0;

 switch (VAR_1 & VAR_0) {
  case 130:
  case 132:
  case 131:
  case 128:
   VAR_2 = 1;
   break;
  case 129:
   VAR_2 = 0;
   break;
  default:
   FUNC_0("unknown opcode %d", VAR_1);
 }

 return (VAR_2);
}
