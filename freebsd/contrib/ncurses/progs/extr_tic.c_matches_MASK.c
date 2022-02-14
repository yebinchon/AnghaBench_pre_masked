
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,char*) ;

__attribute__((used)) static bool
FUNC_1(char **VAR_2, const char *VAR_3)

{
    bool VAR_4 = VAR_0;
    size_t VAR_5;

    if (VAR_2 != 0) {
 for (VAR_5 = 0; VAR_2[VAR_5] != 0; VAR_5++) {
     if (FUNC_0(VAR_3, VAR_2[VAR_5], "|")) {
  VAR_4 = VAR_1;
  break;
     }
 }
    } else
 VAR_4 = VAR_1;
    return (VAR_4);
}
