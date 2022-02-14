
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum export { ____Placeholder_export } export ;
 int FUNC_0 (char*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_3(enum export VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3 = FUNC_1(VAR_1) ?"":".ko";

 switch (VAR_0) {
 case 133:
  FUNC_0("modpost: GPL-incompatible module %s%s "
        "uses GPL-only symbol '%s'\n", VAR_1, VAR_3, VAR_2);
  break;
 case 128:
  FUNC_0("modpost: GPL-incompatible module %s%s "
        "uses GPL-only symbol marked UNUSED '%s'\n", VAR_1, VAR_3, VAR_2);
  break;
 case 132:
  FUNC_2("modpost: GPL-incompatible module %s%s "
        "uses future GPL-only symbol '%s'\n", VAR_1, VAR_3, VAR_2);
  break;
 case 131:
 case 129:
 case 130:

  break;
 }
}
