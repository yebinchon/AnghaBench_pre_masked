
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static bool
FUNC_1(const char *VAR_3)
{
    bool VAR_4 = VAR_2;

    if (VAR_3 != VAR_0) {
 int VAR_5 = 0;
 while (VAR_3[VAR_5] != '\0') {
     if (FUNC_0(VAR_3[VAR_5]) &&
  VAR_3[VAR_5] != VAR_3[VAR_5 + 1]) {
  VAR_4 = VAR_1;
  break;
     }
     VAR_5 += 2;
 }
    }
    return VAR_4;
}
