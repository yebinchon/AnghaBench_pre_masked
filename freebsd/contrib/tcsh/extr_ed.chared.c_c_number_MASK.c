
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;

__attribute__((used)) static Char *
FUNC_0(Char *VAR_1, int *VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5 = 1;

    if (*++VAR_1 == '^') {
 *VAR_2 = 1;
 return(VAR_1);
    }
    if (*VAR_1 == '$') {
 if (*++VAR_1 != '-') {
     *VAR_2 = VAR_0;
     return(--VAR_1);
 }
 VAR_5 = -1;
 ++VAR_1;
    }
    for (VAR_4 = 0; *VAR_1 >= '0' && *VAR_1 <= '9'; VAR_4 = 10 * VAR_4 + *VAR_1++ - '0')
 continue;
    *VAR_2 = (VAR_5 < 0 ? VAR_3 - VAR_4 : VAR_4);
    return(--VAR_1);
}
