
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ServerOpCodes ;


 char const* FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 char const* FUNC_1 (int) ;

__attribute__((used)) static const char *
FUNC_2(ServerOpCodes VAR_5, int VAR_6)
{
 if (VAR_6 == -1)
  return "unset";
 switch (VAR_5) {
 case 134:
  return FUNC_0(VAR_6, VAR_0);
 case 128:
  return FUNC_0(VAR_6, VAR_3);
 case 129:
  return FUNC_0(VAR_6, VAR_2);
 case 131:
  return FUNC_0(VAR_6, VAR_1);
 case 132:
  return FUNC_0(VAR_6, VAR_4);
 case 133:
  return FUNC_0(VAR_6, VAR_4);
 case 130:
  return FUNC_1(VAR_6);
 default:
  switch (VAR_6) {
  case 0:
   return "no";
  case 1:
   return "yes";
  default:
   return "UNKNOWN";
  }
 }
}
