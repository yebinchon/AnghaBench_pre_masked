
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sldns_rdf_type ;
 int FUNC_0 (int ) ;

size_t
FUNC_1(sldns_rdf_type VAR_0)
{
 switch(VAR_0) {
  case 135:
  case 137:
  case 132:
   return 1;
   break;
  case 134:
  case 128:
  case 136:
   return 2;
   break;
  case 133:
  case 130:
  case 139:
  case 131:
   return 4;
   break;
  case 129:
   return 6;
   break;
  case 138:
   return 16;
   break;
  default:
   FUNC_0(0);


 }
 return 0;
}
