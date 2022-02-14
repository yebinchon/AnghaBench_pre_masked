
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int Ascii; } ;
struct TYPE_6__ {size_t Type; TYPE_1__ Name; } ;
struct TYPE_5__ {int * Types; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT_INFO ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_HANDLE ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;

__attribute__((used)) static ACPI_STATUS
FUNC_1 (
    ACPI_HANDLE VAR_2,
    UINT32 VAR_3,
    void *VAR_4,
    void **VAR_5)
{
    ACPI_OBJECT_INFO *VAR_6 = (ACPI_OBJECT_INFO *) VAR_4;
    ACPI_NAMESPACE_NODE *VAR_7 = (ACPI_NAMESPACE_NODE *) VAR_2;


    if (VAR_7->Type > VAR_0)
    {
        FUNC_0 ("[%4.4s]: Unknown object type %X\n",
            VAR_7->Name.Ascii, VAR_7->Type);
    }
    else
    {
        VAR_6->Types[VAR_7->Type]++;
    }

    return (VAR_1);
}
