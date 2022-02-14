
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint64_t ;
typedef int apr_uint32_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 char* FUNC_0 (int ,int,char,char*,int*) ;

__attribute__((used)) static char *FUNC_1(apr_uint64_t VAR_1, register int VAR_2,
                     char VAR_3, char *VAR_4, register apr_size_t *VAR_5)
{
    register int VAR_6 = (1 << VAR_2) - 1;
    register char *VAR_7 = VAR_4;
    static const char VAR_8[] = "0123456789abcdef";
    static const char VAR_9[] = "0123456789ABCDEF";
    register const char *VAR_10 = (VAR_3 == 'X') ? VAR_9 : VAR_8;

    if (VAR_1 <= VAR_0)
        return(FUNC_0((apr_uint32_t)VAR_1, VAR_2, VAR_3, VAR_4, VAR_5));

    do {
        *--VAR_7 = VAR_10[VAR_1 & VAR_6];
        VAR_1 >>= VAR_2;
    }
    while (VAR_1);

    *VAR_5 = VAR_4 - VAR_7;
    return (VAR_7);
}
