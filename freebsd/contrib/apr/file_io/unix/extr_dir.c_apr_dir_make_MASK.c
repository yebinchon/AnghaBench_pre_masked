
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_fileperms_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int ) ;

apr_status_t FUNC_2(const char *VAR_2, apr_fileperms_t VAR_3,
                          apr_pool_t *VAR_4)
{
    mode_t VAR_5 = FUNC_0(VAR_3);

    if (FUNC_1(VAR_2, VAR_5) == 0) {
        return VAR_0;
    }
    else {
        return VAR_1;
    }
}
