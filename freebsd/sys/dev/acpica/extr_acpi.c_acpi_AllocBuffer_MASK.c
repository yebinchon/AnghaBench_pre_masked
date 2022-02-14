
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Length; void* Pointer; } ;
typedef TYPE_1__ ACPI_BUFFER ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ,int ) ;

ACPI_BUFFER *
FUNC_1(int VAR_2)
{
    ACPI_BUFFER *VAR_3;

    if ((VAR_3 = FUNC_0(VAR_2 + sizeof(*VAR_3), VAR_0, VAR_1)) == ((void*)0))
 return (((void*)0));
    VAR_3->Length = VAR_2;
    VAR_3->Pointer = (void *)(VAR_3 + 1);
    return (VAR_3);
}
