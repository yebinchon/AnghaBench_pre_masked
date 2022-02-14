
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_6__ {scalar_t__ RuntimeCount; TYPE_1__* RegisterInfo; } ;
struct TYPE_5__ {int EnableForRun; int EnableMask; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GPE_REGISTER_INFO ;
typedef TYPE_2__ ACPI_GPE_EVENT_INFO ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_GPE_EVENT_INFO *VAR_3)
{
    ACPI_GPE_REGISTER_INFO *VAR_4;
    UINT32 VAR_5;


    FUNC_1 (VAR_2);


    VAR_4 = VAR_3->RegisterInfo;
    if (!VAR_4)
    {
        FUNC_4 (VAR_0);
    }

    VAR_5 = FUNC_3 (VAR_3);



    FUNC_0 (VAR_4->EnableForRun, VAR_5);



    if (VAR_3->RuntimeCount)
    {
        FUNC_2 (VAR_4->EnableForRun, (UINT8) VAR_5);
    }

    VAR_4->EnableMask = VAR_4->EnableForRun;
    FUNC_4 (VAR_1);
}
