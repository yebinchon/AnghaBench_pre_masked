
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_2__ {int Type; int Code; int Argument; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_SIGNAL_FATAL_INFO ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,int,int) ;

ACPI_STATUS
FUNC_2(UINT32 VAR_3, void *VAR_4)
{
    ACPI_SIGNAL_FATAL_INFO *VAR_5;

    switch (VAR_3) {
    case 128:
 VAR_5 = (ACPI_SIGNAL_FATAL_INFO *)VAR_4;
 FUNC_1("ACPI fatal signal, type 0x%x code 0x%x argument 0x%x",
       VAR_5->Type, VAR_5->Code, VAR_5->Argument);



 break;

    case 129:



 break;

    default:
 return (VAR_0);
    }

    return (VAR_1);
}
