
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int buf ;
typedef char Char ;


 int VAR_0 ;
 char* FUNC_0 (int) ;

Char *
FUNC_1(int VAR_1, size_t VAR_2, Char VAR_3)
{
    Char VAR_4[8 * sizeof(int) / 3 + 1], *VAR_5, *VAR_6, *VAR_7;
    unsigned int VAR_8;
    int VAR_9 = (VAR_2 != 0);

    if (sizeof(VAR_4) - 1 < VAR_2)
 VAR_2 = sizeof(VAR_4) - 1;

    VAR_8 = VAR_1;
    if (VAR_1 < 0)
 VAR_8 = -VAR_1;

    VAR_6 = VAR_4;
    do {
 *VAR_6++ = VAR_8 % 10 + '0';
 VAR_8 /= 10;
    } while ((VAR_9 && (ssize_t)--VAR_2 > 0) || VAR_8 != 0);

    VAR_5 = FUNC_0((VAR_6 - VAR_4 + 2) * sizeof(*VAR_5));
    VAR_7 = VAR_5;
    if (VAR_1 < 0)
 *VAR_7++ = '-';
    while (VAR_6 > VAR_4)
 *VAR_7++ = *--VAR_6 | VAR_3;

    *VAR_7 = '\0';
    return VAR_5;
}
