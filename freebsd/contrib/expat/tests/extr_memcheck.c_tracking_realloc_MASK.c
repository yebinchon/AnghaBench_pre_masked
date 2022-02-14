
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* allocation; size_t num_bytes; struct TYPE_7__* next; struct TYPE_7__* prev; } ;
typedef TYPE_1__ AllocationEntry ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 void* FUNC_4 (void*,size_t) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (size_t) ;

void *
FUNC_7(void *VAR_2, size_t VAR_3)
{
    AllocationEntry *VAR_4;

    if (VAR_2 == ((void*)0)) {

        return FUNC_6(VAR_3);
    }
    if (VAR_3 == 0) {

        FUNC_5(VAR_2);
        return ((void*)0);
    }


    VAR_4 = FUNC_0(VAR_2);
    if (VAR_4 == ((void*)0)) {
        FUNC_3("Attempting to realloc unallocated memory at %p\n", VAR_2);
        VAR_4 = FUNC_2(sizeof(AllocationEntry));
        if (VAR_4 == ((void*)0)) {
            FUNC_3("Reallocator failure\n");
            return ((void*)0);
        }
        VAR_4->allocation = FUNC_4(VAR_2, VAR_3);
        if (VAR_4->allocation == ((void*)0)) {
            FUNC_1(VAR_4);
            return ((void*)0);
        }


        VAR_4->next = ((void*)0);
        if (VAR_0 == ((void*)0)) {
            VAR_4->prev = ((void*)0);
            VAR_0 = VAR_1 = VAR_4;
        } else {
            VAR_4->prev = VAR_1;
            VAR_1->next = VAR_4;
            VAR_1 = VAR_4;
        }
    } else {
        VAR_4->allocation = FUNC_4(VAR_2, VAR_3);
        if (VAR_4->allocation == ((void*)0)) {

            VAR_4->allocation = VAR_2;
            return ((void*)0);
        }
    }

    VAR_4->num_bytes = VAR_3;
    return VAR_4->allocation;
}
