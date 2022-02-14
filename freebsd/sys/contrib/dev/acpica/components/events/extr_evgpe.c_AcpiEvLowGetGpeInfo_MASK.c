
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {scalar_t__ BlockBaseNumber; scalar_t__ GpeCount; int * EventInfo; } ;
typedef int ACPI_GPE_EVENT_INFO ;
typedef TYPE_1__ ACPI_GPE_BLOCK_INFO ;



ACPI_GPE_EVENT_INFO *
FUNC_0 (
    UINT32 VAR_0,
    ACPI_GPE_BLOCK_INFO *VAR_1)
{
    UINT32 VAR_2;






    if (!VAR_1 ||
        (VAR_0 < VAR_1->BlockBaseNumber))
    {
        return (((void*)0));
    }

    VAR_2 = VAR_0 - VAR_1->BlockBaseNumber;
    if (VAR_2 >= VAR_1->GpeCount)
    {
        return (((void*)0));
    }

    return (&VAR_1->EventInfo[VAR_2]);
}
