
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OpCodes ;


 char const* FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char const* FUNC_1 (int) ;

__attribute__((used)) static const char *
FUNC_2(OpCodes VAR_8, int VAR_9)
{
 if (VAR_9 == -1)
  return "unset";
 switch (VAR_8) {
 case 136:
  return FUNC_0(VAR_9, VAR_0);
 case 128:
 case 129:
  return FUNC_0(VAR_9, VAR_6);
 case 131:
  return FUNC_0(VAR_9, VAR_4);
 case 134:
  return FUNC_0(VAR_9, VAR_2);
 case 130:
  return FUNC_0(VAR_9, VAR_5);
 case 132:
  return FUNC_0(VAR_9, VAR_3);
 case 135:
  return FUNC_0(VAR_9, VAR_1);
 case 137:
  return FUNC_0(VAR_9, VAR_7);
 case 133:
  return FUNC_1(VAR_9);
 default:
  switch (VAR_9) {
  case 0:
   return "no";
  case 1:
   return "yes";
  default:
   return "UNKNOWN";
  }
 }
}
