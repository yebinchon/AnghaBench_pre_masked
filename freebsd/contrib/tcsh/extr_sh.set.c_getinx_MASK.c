
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static Char *
FUNC_2(Char *VAR_2, int *VAR_3)
{
    *VAR_3 = 0;
    *VAR_2++ = 0;
    while (*VAR_2 && FUNC_0(*VAR_2))
 *VAR_3 = *VAR_3 * 10 + *VAR_2++ - '0';
    if (*VAR_2++ != ']')
 FUNC_1(VAR_0 | VAR_1);
    return (VAR_2);
}
