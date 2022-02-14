
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_3__ {scalar_t__ Integer; } ;
struct TYPE_4__ {TYPE_1__ Name; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ACPI_STATUS
FUNC_0 (
    ACPI_HANDLE VAR_2,
    UINT32 VAR_3,
    void *VAR_4,
    void **VAR_5)
{
    ACPI_NAMESPACE_NODE *VAR_6 = (ACPI_NAMESPACE_NODE *) VAR_2;




    if (*((UINT32 *) (VAR_4)) == VAR_6->Name.Integer)
    {


        return (VAR_0);
    }

    return (VAR_1);
}
