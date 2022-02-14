
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int __be16 ;




 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (int ) ;

const char * FUNC_1(__be16 VAR_3)
{
 uint16_t VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 & VAR_0)
  return ("Busy");

 if (VAR_4 & VAR_2)
  return ("Redirection required");

 switch(VAR_4 & VAR_1) {
  case 130:
   return ("Bad Version");
  case 128:
   return ("Method not supported");
  case 131:
   return ("Method/Attribute combo not supported");
  case 129:
   return ("Invalid attribute/modifier field");
 }
 return ("Success");
}
