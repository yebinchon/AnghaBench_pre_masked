
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_2__ headers_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,char const**,int *) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_bucket_t *VAR_4,
                                      const char **VAR_5,
                                      apr_size_t *VAR_6)
{
    headers_context_t *VAR_7 = VAR_4->data;

    FUNC_0(VAR_7, VAR_5, VAR_6);


    if (VAR_7->state == VAR_2 || VAR_7->state == VAR_3)
        return VAR_0;

    return VAR_1;
}
