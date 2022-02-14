
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct iovec {int dummy; } ;
struct TYPE_6__ {int allocator; } ;
typedef TYPE_1__ serf_bucket_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (struct iovec*,int,int ) ;

void FUNC_2(
    serf_bucket_t *VAR_0,
    struct iovec *VAR_1,
    int VAR_2)
{
    serf_bucket_t *VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_2,
                                          VAR_0->allocator);

    FUNC_0(VAR_0, VAR_3);
}
