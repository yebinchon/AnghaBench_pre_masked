
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int notify_buf ;
struct TYPE_3__ {int * Pointer; int Length; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,char const*,int *,char*) ;
 int FUNC_4 (char*,int,char*,int) ;

void
FUNC_5(const char *VAR_2, ACPI_HANDLE VAR_3, uint8_t VAR_4)
{
    char VAR_5[16];
    ACPI_BUFFER VAR_6;
    ACPI_STATUS VAR_7;

    if (VAR_2 == ((void*)0))
 return;

    VAR_6.Pointer = ((void*)0);
    VAR_6.Length = VAR_0;
    VAR_7 = FUNC_1(VAR_3, &VAR_6, VAR_1);
    if (FUNC_0(VAR_7))
 return;
    FUNC_4(VAR_5, sizeof(VAR_5), "notify=0x%02x", VAR_4);
    FUNC_3("ACPI", VAR_2, VAR_6.Pointer, VAR_5);
    FUNC_2(VAR_6.Pointer);
}
