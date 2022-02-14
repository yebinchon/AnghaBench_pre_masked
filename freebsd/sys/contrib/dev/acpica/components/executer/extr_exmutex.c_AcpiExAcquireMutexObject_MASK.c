
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_6__ {scalar_t__ ThreadId; int AcquisitionDepth; int * OwnerThread; scalar_t__ OriginalSyncLevel; int OsMutex; } ;
struct TYPE_7__ {TYPE_1__ Mutex; } ;
typedef scalar_t__ ACPI_THREAD_ID ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    UINT16 VAR_4,
    ACPI_OPERAND_OBJECT *VAR_5,
    ACPI_THREAD_ID VAR_6)
{
    ACPI_STATUS VAR_7;


    FUNC_1 (VAR_3, VAR_5);


    if (!VAR_5)
    {
        FUNC_4 (VAR_0);
    }



    if (VAR_5->Mutex.ThreadId == VAR_6)
    {




        VAR_5->Mutex.AcquisitionDepth++;
        FUNC_4 (VAR_1);
    }



    if (VAR_5 == VAR_2)
    {
        VAR_7 = FUNC_2 (VAR_4);
    }
    else
    {
        VAR_7 = FUNC_3 (VAR_5->Mutex.OsMutex, VAR_4);
    }

    if (FUNC_0 (VAR_7))
    {


        FUNC_4 (VAR_7);
    }



    VAR_5->Mutex.ThreadId = VAR_6;
    VAR_5->Mutex.AcquisitionDepth = 1;
    VAR_5->Mutex.OriginalSyncLevel = 0;
    VAR_5->Mutex.OwnerThread = ((void*)0);

    FUNC_4 (VAR_1);
}
