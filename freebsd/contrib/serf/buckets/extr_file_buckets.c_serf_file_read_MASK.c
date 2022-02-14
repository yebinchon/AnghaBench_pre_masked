
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_5__ {int databuf; } ;
typedef TYPE_2__ file_context_t ;
typedef int apr_status_t ;
typedef int apr_size_t ;


 int FUNC_0 (int *,int ,char const**,int *) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_bucket_t *VAR_0,
                                   apr_size_t VAR_1,
                                   const char **VAR_2, apr_size_t *VAR_3)
{
    file_context_t *VAR_4 = VAR_0->data;

    return FUNC_0(&VAR_4->databuf, VAR_1, VAR_2, VAR_3);
}
