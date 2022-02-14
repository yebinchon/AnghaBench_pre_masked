
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_fileperms_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;
 char* FUNC_2 (char const*,int *) ;

apr_status_t FUNC_3(const char *VAR_2, apr_fileperms_t VAR_3,
                                           apr_pool_t *VAR_4)
{
    apr_status_t VAR_5 = 0;

    VAR_5 = FUNC_1 (VAR_2, VAR_3, VAR_4);

    if (VAR_5 == VAR_1) {
        char *VAR_6;

        VAR_6 = FUNC_2(VAR_2, VAR_4);

        if (VAR_6[0] == '\0') {
            return VAR_5;
        }

        VAR_5 = FUNC_3(VAR_6, VAR_3, VAR_4);

        if (!VAR_5)
            VAR_5 = FUNC_1 (VAR_2, VAR_3, VAR_4);
    }






    if (FUNC_0(VAR_5))
        return VAR_0;

    return VAR_5;
}
