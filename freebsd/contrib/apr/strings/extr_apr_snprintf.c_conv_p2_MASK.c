
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;
typedef int apr_size_t ;



__attribute__((used)) static char *FUNC_0(register apr_uint32_t VAR_0, register int VAR_1,
                     char VAR_2, char *VAR_3, register apr_size_t *VAR_4)
{
    register int VAR_5 = (1 << VAR_1) - 1;
    register char *VAR_6 = VAR_3;
    static const char VAR_7[] = "0123456789abcdef";
    static const char VAR_8[] = "0123456789ABCDEF";
    register const char *VAR_9 = (VAR_2 == 'X') ? VAR_8 : VAR_7;

    do {
        *--VAR_6 = VAR_9[VAR_0 & VAR_5];
        VAR_0 >>= VAR_1;
    }
    while (VAR_0);

    *VAR_4 = VAR_3 - VAR_6;
    return (VAR_6);
}
