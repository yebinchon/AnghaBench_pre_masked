
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int serf_bucket_alloc_t ;
typedef int apr_size_t ;


 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (int *,int) ;

char *FUNC_2(serf_bucket_alloc_t *VAR_0,
                      const char *VAR_1,
                      apr_size_t VAR_2)
{
    char *VAR_3 = FUNC_1(VAR_0, VAR_2 + 1);
    FUNC_0(VAR_3, VAR_1, VAR_2);
    VAR_3[VAR_2] = '\0';
    return VAR_3;
}
