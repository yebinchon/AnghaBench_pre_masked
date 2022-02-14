
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int apr_status_t ;
typedef int apr_size_t ;
typedef int apr_read_type_e ;
struct TYPE_5__ {char* base; } ;
struct TYPE_6__ {char* base; TYPE_1__ heap; int * pool; } ;
typedef TYPE_2__ apr_bucket_pool ;
struct TYPE_7__ {int start; int length; int * type; TYPE_2__* data; } ;
typedef TYPE_3__ apr_bucket ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static apr_status_t FUNC_0(apr_bucket *VAR_2, const char **VAR_3,
                                     apr_size_t *VAR_4, apr_read_type_e VAR_5)
{
    apr_bucket_pool *VAR_6 = VAR_2->data;
    const char *VAR_7 = VAR_6->base;

    if (VAR_6->pool == ((void*)0)) {




        VAR_2->type = &VAR_1;
        VAR_7 = VAR_6->heap.base;
    }
    *VAR_3 = VAR_7 + VAR_2->start;
    *VAR_4 = VAR_2->length;
    return VAR_0;
}
