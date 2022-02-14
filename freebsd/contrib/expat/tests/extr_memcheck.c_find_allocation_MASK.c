
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* allocation; struct TYPE_4__* next; } ;
typedef TYPE_1__ AllocationEntry ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static AllocationEntry *
FUNC_0(void *VAR_1)
{
    AllocationEntry *VAR_2;

    for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
        if (VAR_2->allocation == VAR_1) {
            return VAR_2;
        }
    }
    return ((void*)0);
}
