
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char FUNC_1 (char const) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3)
{
    int VAR_4;

    if (FUNC_1(VAR_3[0]) == 'S') {
 VAR_4 = VAR_3[1] - '0';
 if (VAR_4 >= VAR_0 && VAR_4 <= VAR_1 &&
     VAR_3[2] == '\0')
     return (VAR_4);
    } else if (FUNC_0(VAR_3, "NONE") == 0)
 return (VAR_2);
    return (-1);
}
