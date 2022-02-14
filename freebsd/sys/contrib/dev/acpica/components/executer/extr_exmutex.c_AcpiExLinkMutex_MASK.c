
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* Prev; TYPE_3__* Next; } ;
struct TYPE_8__ {TYPE_1__ Mutex; } ;
struct TYPE_7__ {TYPE_3__* AcquiredMutexList; } ;
typedef TYPE_2__ ACPI_THREAD_STATE ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;



__attribute__((used)) static void
FUNC_0 (
    ACPI_OPERAND_OBJECT *VAR_0,
    ACPI_THREAD_STATE *VAR_1)
{
    ACPI_OPERAND_OBJECT *VAR_2;


    VAR_2 = VAR_1->AcquiredMutexList;



    VAR_0->Mutex.Prev = ((void*)0);
    VAR_0->Mutex.Next = VAR_2;



    if (VAR_2)
    {
        VAR_2->Mutex.Prev = VAR_0;
    }



    VAR_1->AcquiredMutexList = VAR_0;
}
