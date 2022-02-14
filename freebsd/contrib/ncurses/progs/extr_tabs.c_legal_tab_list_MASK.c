
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 char* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_4)
{
    bool VAR_5 = VAR_1;

    if (VAR_4 != 0 && *VAR_4 != '\0') {
 if (FUNC_1(VAR_4)) {
     int VAR_6, VAR_7;
     for (VAR_6 = 0; VAR_4[VAR_6] != '\0'; ++VAR_6) {
  VAR_7 = FUNC_0(VAR_4[VAR_6]);
  if (!(FUNC_3(VAR_7) || VAR_7 == ',' || VAR_7 == '+')) {
      FUNC_2(VAR_3,
       "%s: unexpected character found '%c'\n",
       VAR_2, VAR_7);
      VAR_5 = VAR_0;
      break;
  }
     }
 } else {
     FUNC_2(VAR_3, "%s: trailing comma found '%s'\n", VAR_2, VAR_4);
     VAR_5 = VAR_0;
 }
    } else {
 FUNC_2(VAR_3, "%s: no tab-list given\n", VAR_2);
 VAR_5 = VAR_0;
    }
    return VAR_5;
}
