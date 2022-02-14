
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serf_bucket_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static apr_status_t FUNC_3(serf_bucket_t *VAR_2)
{
    serf_bucket_t *VAR_3;
    const char *VAR_4;

    VAR_3 = FUNC_1(VAR_2);
    VAR_4 = FUNC_0(VAR_3, "Connection");
    if (VAR_4 && FUNC_2("close", VAR_4) == 0)
        {
            return VAR_1;
        }

    return VAR_0;
}
