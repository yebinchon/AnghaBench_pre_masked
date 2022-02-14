
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_uint32_t ;
typedef int apr_size_t ;
typedef scalar_t__ apr_int32_t ;


 int VAR_0 ;

__attribute__((used)) static char *FUNC_0(register apr_int32_t VAR_1, register int VAR_2,
                     register int *VAR_3, char *VAR_4,
                     register apr_size_t *VAR_5)
{
    register char *VAR_6 = VAR_4;
    register apr_uint32_t VAR_7 = VAR_1;

    if (VAR_2) {
        *VAR_3 = VAR_0;
    }
    else {
        *VAR_3 = (VAR_1 < 0);
        if (*VAR_3) {
            apr_int32_t VAR_8 = VAR_1 + 1;
            VAR_7 = ((apr_uint32_t) -VAR_8) + 1;
        }
    }




    do {
        register apr_uint32_t VAR_9 = VAR_7 / 10;

        *--VAR_6 = (char) (VAR_7 - VAR_9 * 10 + '0');
        VAR_7 = VAR_9;
    }
    while (VAR_7);

    *VAR_5 = VAR_4 - VAR_6;
    return (VAR_6);
}
