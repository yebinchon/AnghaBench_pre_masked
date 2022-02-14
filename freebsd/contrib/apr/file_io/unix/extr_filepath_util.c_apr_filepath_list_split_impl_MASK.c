
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (int *,char const*) ;
 char* FUNC_3 (char*,char*,char**) ;
 char* FUNC_4 (char*,char) ;

apr_status_t FUNC_5(apr_array_header_t **VAR_1,
                                          const char *VAR_2,
                                          char VAR_3,
                                          apr_pool_t *VAR_4)
{
    char *VAR_5, *VAR_6, *VAR_7;
    char VAR_8[2] = { '\0', '\0' };
    apr_array_header_t *VAR_9;
    int VAR_10;

    VAR_8[0] = VAR_3;


    VAR_5 = FUNC_2(VAR_4, VAR_2);
    for (VAR_10 = 0, VAR_7 = VAR_5; VAR_7 != ((void*)0); ++VAR_10)
    {
        VAR_7 = FUNC_4(VAR_7, VAR_3);
        if (VAR_7)
            ++VAR_7;
    }


    VAR_9 = FUNC_0(VAR_4, VAR_10, sizeof(char*));
    while ((VAR_6 = FUNC_3(VAR_5, VAR_8, &VAR_7)) != ((void*)0))
    {
        if (*VAR_6 == '\0')
            continue;

        *(char**)FUNC_1(VAR_9) = VAR_6;
        VAR_5 = ((void*)0);
    }

    *VAR_1 = VAR_9;
    return VAR_0;
}
