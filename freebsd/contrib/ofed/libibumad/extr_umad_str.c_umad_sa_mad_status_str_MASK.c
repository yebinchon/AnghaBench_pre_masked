
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int __be16 ;
 int VAR_0 ;
 int FUNC_0 (int ) ;

const char * FUNC_1(__be16 VAR_1)
{
 uint16_t VAR_2 = FUNC_0(VAR_1);
 switch((VAR_2 & VAR_0) >> 8) {
  case 129:
   return ("Success");
  case 133:
   return ("No Resources");
  case 130:
   return ("Request Invalid");
  case 134:
   return ("No Records");
  case 128:
   return ("Too Many Records");
  case 135:
   return ("Invalid GID");
  case 136:
   return ("Insufficient Components");
  case 131:
   return ("Request Denied");
  case 132:
   return ("Priority Suggested");
 }
 return ("Undefined Error");
}
