
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int apr_bucket ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (char const*,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static apr_bucket_brigade *FUNC_4(apr_bucket_alloc_t *VAR_1,
                                               const char *VAR_2,
                                               const char *VAR_3)
{
    apr_bucket_brigade *VAR_4 = FUNC_1(VAR_0, VAR_1);
    apr_bucket *VAR_5;

    VAR_5 = FUNC_2(VAR_2, FUNC_3(VAR_2), VAR_1);
    FUNC_0(VAR_4, VAR_5);

    VAR_5 = FUNC_2(VAR_3, FUNC_3(VAR_3), VAR_1);
    FUNC_0(VAR_4, VAR_5);

    return VAR_4;
}
