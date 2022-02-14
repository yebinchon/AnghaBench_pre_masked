
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_dbd_t ;
typedef int apr_dbd_driver_t ;


 int FUNC_0 (int const*,int *,int*,char const*) ;

__attribute__((used)) static int FUNC_1(apr_pool_t* VAR_0, apr_dbd_t* VAR_1,
                      const apr_dbd_driver_t* VAR_2)
{
    int VAR_3 = 0;
    int VAR_4;
    const char *VAR_5 = "DROP TABLE apr_dbd_test" ;
    VAR_3 = FUNC_0(VAR_2, VAR_1, &VAR_4, VAR_5);
    return VAR_3;
}
