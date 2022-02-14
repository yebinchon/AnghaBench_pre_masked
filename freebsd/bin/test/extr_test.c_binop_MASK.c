
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum token { ____Placeholder_token } token ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*,char*) ;
 char** VAR_1 ;

__attribute__((used)) static int
FUNC_7(enum token VAR_2)
{
 const char *VAR_3, *VAR_4, *VAR_5;

 VAR_3 = *VAR_1;
 VAR_4 = VAR_0 > 0 ? (--VAR_0, *++VAR_1) : ((void*)0);

 if ((VAR_5 = VAR_0 > 0 ? (--VAR_0, *++VAR_1) : ((void*)0)) == ((void*)0))
  FUNC_6(VAR_4, "argument expected");

 switch (VAR_2) {
 case 131:
  return FUNC_5(VAR_3, VAR_5) == 0;
 case 128:
  return FUNC_5(VAR_3, VAR_5) != 0;
 case 129:
  return FUNC_5(VAR_3, VAR_5) < 0;
 case 130:
  return FUNC_5(VAR_3, VAR_5) > 0;
 case 137:
  return FUNC_2(VAR_3, VAR_5) == 0;
 case 132:
  return FUNC_2(VAR_3, VAR_5) != 0;
 case 136:
  return FUNC_2(VAR_3, VAR_5) >= 0;
 case 135:
  return FUNC_2(VAR_3, VAR_5) > 0;
 case 134:
  return FUNC_2(VAR_3, VAR_5) <= 0;
 case 133:
  return FUNC_2(VAR_3, VAR_5) < 0;
 case 139:
  return FUNC_3 (VAR_3, VAR_5);
 case 138:
  return FUNC_4 (VAR_3, VAR_5);
 case 140:
  return FUNC_1 (VAR_3, VAR_5);
 default:
  FUNC_0();

 }
}
