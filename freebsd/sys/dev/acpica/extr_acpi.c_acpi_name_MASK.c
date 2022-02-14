
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int data ;
struct TYPE_3__ {int Length; char* Pointer; } ;
typedef scalar_t__ ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,TYPE_1__*) ;

char *
FUNC_2(ACPI_HANDLE VAR_1)
{
    ACPI_BUFFER VAR_2;
    static char VAR_3[256];

    VAR_2.Length = sizeof(VAR_3);
    VAR_2.Pointer = VAR_3;

    if (VAR_1 && FUNC_0(FUNC_1(VAR_1, VAR_0, &VAR_2)))
 return (VAR_3);
    return ("(unknown)");
}
