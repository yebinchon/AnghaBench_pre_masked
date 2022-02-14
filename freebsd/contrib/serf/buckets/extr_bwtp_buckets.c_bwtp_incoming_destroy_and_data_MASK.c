
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int allocator; TYPE_2__* data; } ;
typedef TYPE_1__ serf_bucket_t ;
struct TYPE_6__ {scalar_t__ state; int * headers; int * body; int * stream; scalar_t__ phrase; } ;
typedef TYPE_2__ incoming_context_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(serf_bucket_t *VAR_1)
{
    incoming_context_t *VAR_2 = VAR_1->data;

    if (VAR_2->state != VAR_0 && VAR_2->phrase) {
        FUNC_1(VAR_1->allocator, (void*)VAR_2->phrase);
    }

    FUNC_0(VAR_2->stream);
    if (VAR_2->body != ((void*)0))
        FUNC_0(VAR_2->body);
    FUNC_0(VAR_2->headers);

    FUNC_2(VAR_1);
}
