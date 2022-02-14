
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t num_bytes; void* allocation; struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ AllocationEntry ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (char*) ;

void *
FUNC_3(size_t VAR_2)
{
    AllocationEntry *VAR_3 = FUNC_1(sizeof(AllocationEntry));

    if (VAR_3 == ((void*)0)) {
        FUNC_2("Allocator failure\n");
        return ((void*)0);
    }
    VAR_3->num_bytes = VAR_2;
    VAR_3->allocation = FUNC_1(VAR_2);
    if (VAR_3->allocation == ((void*)0)) {
        FUNC_0(VAR_3);
        return ((void*)0);
    }
    VAR_3->next = ((void*)0);


    if (VAR_0 == ((void*)0)) {
        VAR_3->prev = ((void*)0);
        VAR_0 = VAR_1 = VAR_3;
    } else {
        VAR_3->prev = VAR_1;
        VAR_1->next = VAR_3;
        VAR_1 = VAR_3;
    }

    return VAR_3->allocation;
}
