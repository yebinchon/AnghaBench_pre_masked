
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_pool_t ;


 char const VAR_0 ;
 char const* FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2 (const char *VAR_1, apr_pool_t *VAR_2)
{


    apr_size_t VAR_3 = FUNC_1 (VAR_1);
    apr_size_t VAR_4 = VAR_3;

    while ((VAR_3 > 0) && (VAR_1[VAR_3 - 1] == VAR_0))
        VAR_3--;

    if (VAR_3 != VAR_4)
        return FUNC_0 (VAR_2, VAR_1, VAR_3);
    else
        return VAR_1;
}
