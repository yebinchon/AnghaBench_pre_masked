
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(char *VAR_1, int VAR_2, FILE * VAR_3)
{
    char *VAR_4 = VAR_1;
    int VAR_5;

    if (FUNC_0(VAR_3))
 return -1;
    while (VAR_2-- && ((VAR_5 = FUNC_1(VAR_3)) != VAR_0) && (VAR_5 != '\n'))
 *VAR_4++ = VAR_5;
    *VAR_4++ = '\0';
    return (int) (VAR_4 - VAR_1);
}
