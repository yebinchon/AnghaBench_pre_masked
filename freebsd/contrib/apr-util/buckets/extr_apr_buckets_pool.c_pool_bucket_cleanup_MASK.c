
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int apr_status_t ;
struct TYPE_3__ {int alloc_len; int base; } ;
struct TYPE_4__ {int * pool; int * base; TYPE_1__ heap; int list; } ;
typedef TYPE_2__ apr_bucket_pool ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static apr_status_t FUNC_2(void *VAR_1)
{
    apr_bucket_pool *VAR_2 = VAR_1;
    VAR_2->heap.base = FUNC_0(VAR_2->heap.alloc_len, VAR_2->list);
    FUNC_1(VAR_2->heap.base, VAR_2->base, VAR_2->heap.alloc_len);
    VAR_2->base = ((void*)0);
    VAR_2->pool = ((void*)0);

    return VAR_0;
}
