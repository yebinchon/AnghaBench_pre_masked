
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int elt_size; int nelts; scalar_t__ elts; } ;
typedef TYPE_1__ apr_array_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

apr_status_t FUNC_3(char **VAR_2,
                                          apr_array_header_t *VAR_3,
                                          char VAR_4,
                                          apr_pool_t *VAR_5)
{
    apr_size_t VAR_6 = 0;
    char *VAR_7;
    int VAR_8;



    if (VAR_3->elt_size != sizeof(char*))
        return VAR_0;


    for (VAR_8 = 0; VAR_8 < VAR_3->nelts; ++VAR_8)
        VAR_6 += FUNC_2(((char**)VAR_3->elts)[VAR_8]);

    if (VAR_6 == 0)
    {
        *VAR_2 = ((void*)0);
        return VAR_1;
    }

    if (VAR_8 > 0)
        VAR_6 += (VAR_8 - 1);


    VAR_7 = *VAR_2 = FUNC_0(VAR_5, VAR_6 + 1);
    for (VAR_8 = 0; VAR_8 < VAR_3->nelts; ++VAR_8)
    {


        const char *VAR_9 = ((char**)VAR_3->elts)[VAR_8];
        apr_size_t VAR_10 = FUNC_2(VAR_9);
        if (VAR_10 == 0)
            continue;

        if (VAR_8 > 0)
            *VAR_7++ = VAR_4;
        FUNC_1(VAR_7, VAR_9, VAR_10);
        VAR_7 += VAR_10;
    }
    *VAR_7 = '\0';
    return VAR_1;
}
