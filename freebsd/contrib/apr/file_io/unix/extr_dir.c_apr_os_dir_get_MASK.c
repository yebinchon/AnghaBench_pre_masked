
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
typedef int apr_os_dir_t ;
struct TYPE_3__ {int * dirstruct; } ;
typedef TYPE_1__ apr_dir_t ;


 int VAR_0 ;
 int VAR_1 ;

apr_status_t FUNC_0(apr_os_dir_t **VAR_2, apr_dir_t *VAR_3)
{
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }
    *VAR_2 = VAR_3->dirstruct;
    return VAR_1;
}
