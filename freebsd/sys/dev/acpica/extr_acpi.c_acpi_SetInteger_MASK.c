
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {int Value; } ;
struct TYPE_7__ {TYPE_1__ Integer; int Type; } ;
struct TYPE_6__ {int Count; TYPE_3__* Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT_LIST ;
typedef TYPE_3__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,TYPE_2__*,int *) ;

ACPI_STATUS
FUNC_1(ACPI_HANDLE VAR_1, char *VAR_2, UINT32 VAR_3)
{
    ACPI_OBJECT VAR_4;
    ACPI_OBJECT_LIST VAR_5;

    VAR_4 = VAR_0;
    VAR_4 = VAR_3;
    VAR_5.Count = 1;
    VAR_5.Pointer = &VAR_4;

    return (FUNC_0(VAR_1, VAR_2, &VAR_5, ((void*)0)));
}
