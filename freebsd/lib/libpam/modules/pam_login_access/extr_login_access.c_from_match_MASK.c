
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, const char *VAR_3)
{
    int VAR_4;
    int VAR_5;
    if (VAR_2[0] == '@') {
 return (FUNC_0(VAR_2 + 1, VAR_3, (char *) 0));
    } else if (FUNC_3(VAR_2, VAR_3)) {
 return (VAR_1);
    } else if (VAR_2[0] == '.') {
 if ((VAR_5 = FUNC_4(VAR_3)) > (VAR_4 = FUNC_4(VAR_2))
     && FUNC_1(VAR_2, VAR_3 + VAR_5 - VAR_4) == 0)
     return (VAR_1);
    } else if (FUNC_1(VAR_2, "LOCAL") == 0) {
 if (FUNC_2(VAR_3, '.') == 0)
     return (VAR_1);
    } else if (VAR_2[(VAR_4 = FUNC_4(VAR_2)) - 1] == '.'
        && FUNC_5(VAR_2, VAR_3, VAR_4) == 0) {
 return (VAR_1);
    }
    return (VAR_0);
}
