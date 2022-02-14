
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char const*,scalar_t__) ;
 char* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (char const*) ;

void FUNC_5(const char **VAR_0,
                              const char *VAR_1,
                              const char *VAR_2, apr_size_t VAR_3,
                              apr_pool_t *VAR_4)
{
    apr_size_t VAR_5, VAR_6;
    char *VAR_7;

    VAR_5 = FUNC_1(VAR_3);
    VAR_6 = FUNC_4(VAR_1);

    VAR_7 = FUNC_3(VAR_4, VAR_5 + VAR_6 + 1);
    *VAR_0 = VAR_7;

    FUNC_2(VAR_7, VAR_1, VAR_6 + 1);
    VAR_7 += VAR_6;
    *VAR_7++ = ' ';

    FUNC_0(VAR_7, VAR_2, VAR_3);
}
