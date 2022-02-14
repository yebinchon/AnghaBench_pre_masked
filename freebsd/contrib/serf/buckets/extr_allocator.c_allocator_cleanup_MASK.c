
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allocator; scalar_t__ own_allocator; scalar_t__ blocks; } ;
typedef TYPE_1__ serf_bucket_alloc_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static apr_status_t FUNC_2(void *VAR_1)
{
    serf_bucket_alloc_t *VAR_2 = VAR_1;


    if (VAR_2->blocks) {
        FUNC_1(VAR_2->allocator, VAR_2->blocks);
    }


    if (VAR_2->own_allocator) {
        FUNC_0(VAR_2->allocator);
    }

    return VAR_0;
}
