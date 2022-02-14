
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int allocation; scalar_t__ num_bytes; struct TYPE_3__* next; } ;
typedef TYPE_1__ AllocationEntry ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,unsigned long,int ) ;

int
FUNC_1(void)
{
    AllocationEntry *VAR_1;

    if (VAR_0 == ((void*)0))
        return 1;


    for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
    {
        FUNC_0("Allocated %lu bytes at %p\n",
                (long unsigned)VAR_1->num_bytes, VAR_1->allocation);
    }
    return 0;
}
