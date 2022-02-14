
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * data; int * type; int allocator; } ;
typedef TYPE_1__ serf_bucket_t ;
typedef int aggregate_context_t ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;

void FUNC_1(serf_bucket_t *VAR_1)
{
    aggregate_context_t *VAR_2;

    VAR_2 = FUNC_0(VAR_1->allocator);

    VAR_1->type = &VAR_0;
    VAR_1->data = VAR_2;


}
