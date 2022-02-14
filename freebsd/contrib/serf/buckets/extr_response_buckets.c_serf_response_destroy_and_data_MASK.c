
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int allocator; TYPE_3__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
struct TYPE_6__ {scalar_t__ reason; } ;
struct TYPE_8__ {scalar_t__ state; int * headers; int * body; int * stream; TYPE_1__ sl; } ;
typedef TYPE_3__ response_context_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(serf_bucket_t *VAR_1)
{
    response_context_t *VAR_2 = VAR_1->data;

    if (VAR_2->state != VAR_0) {
        FUNC_1(VAR_1->allocator, (void*)VAR_2->sl.reason);
    }

    FUNC_0(VAR_2->stream);
    if (VAR_2->body != ((void*)0))
        FUNC_0(VAR_2->body);
    FUNC_0(VAR_2->headers);

    FUNC_2(VAR_1);
}
