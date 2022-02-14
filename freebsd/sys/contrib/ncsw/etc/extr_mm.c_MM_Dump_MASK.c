
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__** freeBlocks; TYPE_3__* busyBlocks; } ;
typedef TYPE_1__ t_MM ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {struct TYPE_5__* p_Next; int end; int base; } ;
typedef TYPE_2__ t_FreeBlock ;
struct TYPE_6__ {struct TYPE_6__* p_Next; int end; int base; int name; } ;
typedef TYPE_3__ t_BusyBlock ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

void FUNC_1(t_Handle VAR_1)
{
    t_MM *VAR_2 = (t_MM *)VAR_1;
    t_FreeBlock *VAR_3;
    t_BusyBlock *VAR_4;
    int VAR_5;

    VAR_4 = VAR_2->busyBlocks;
    FUNC_0("List of busy blocks:\n");
    while (VAR_4)
    {
        FUNC_0("\t0x%p: (%s: b=0x%llx, e=0x%llx)\n", VAR_4, VAR_4->name, VAR_4->base, VAR_4->end );
        VAR_4 = VAR_4->p_Next;
    }

    FUNC_0("\nLists of free blocks according to alignment:\n");
    for (VAR_5=0; VAR_5 <= VAR_0; VAR_5++)
    {
        FUNC_0("%d alignment:\n", (0x1 << VAR_5));
        VAR_3 = VAR_2->freeBlocks[VAR_5];
        while (VAR_3)
        {
            FUNC_0("\t0x%p: (b=0x%llx, e=0x%llx)\n", VAR_3, VAR_3->base, VAR_3->end);
            VAR_3 = VAR_3->p_Next;
        }
        FUNC_0("\n");
    }
}
