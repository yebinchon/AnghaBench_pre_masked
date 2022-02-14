
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ apr_status_t ;
struct TYPE_2__ {scalar_t__ thread_mutex; int proc_mutex; } ;
typedef TYPE_1__ apr_global_mutex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static apr_status_t FUNC_2(void *VAR_1)
{
    apr_global_mutex_t *VAR_2 = (apr_global_mutex_t *)VAR_1;
    apr_status_t VAR_3;

    VAR_3 = FUNC_0(VAR_2->proc_mutex);
    return VAR_3;
}
