
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
typedef int apr_pool_t ;
typedef int apr_os_dir_t ;
struct TYPE_3__ {int * dirstruct; int * pool; } ;
typedef TYPE_1__ apr_dir_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;

apr_status_t FUNC_1(apr_dir_t **VAR_1, apr_os_dir_t *VAR_2,
                          apr_pool_t *VAR_3)
{
    if ((*VAR_1) == ((void*)0)) {
        (*VAR_1) = (apr_dir_t *)FUNC_0(VAR_3, sizeof(apr_dir_t));
        (*VAR_1)->pool = VAR_3;
    }
    (*VAR_1)->dirstruct = VAR_2;
    return VAR_0;
}
