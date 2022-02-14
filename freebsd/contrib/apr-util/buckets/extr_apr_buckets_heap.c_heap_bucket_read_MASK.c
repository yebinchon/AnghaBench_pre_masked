
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int apr_status_t ;
typedef int apr_size_t ;
typedef int apr_read_type_e ;
struct TYPE_4__ {char* base; } ;
typedef TYPE_1__ apr_bucket_heap ;
struct TYPE_5__ {int start; int length; TYPE_1__* data; } ;
typedef TYPE_2__ apr_bucket ;


 int VAR_0 ;

__attribute__((used)) static apr_status_t FUNC_0(apr_bucket *VAR_1, const char **VAR_2,
                                     apr_size_t *VAR_3, apr_read_type_e VAR_4)
{
    apr_bucket_heap *VAR_5 = VAR_1->data;

    *VAR_2 = VAR_5->base + VAR_1->start;
    *VAR_3 = VAR_1->length;
    return VAR_0;
}
