
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT32 ;
struct TYPE_5__ {scalar_t__ Address; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,TYPE_1__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    UINT32 *VAR_1,
    ACPI_GENERIC_ADDRESS *VAR_2,
    ACPI_GENERIC_ADDRESS *VAR_3)
{
    UINT32 VAR_4 = 0;
    UINT32 VAR_5 = 0;
    UINT64 VAR_6;
    ACPI_STATUS VAR_7;




    VAR_7 = FUNC_1 (&VAR_6, VAR_2);
    if (FUNC_0 (VAR_7))
    {
        return (VAR_7);
    }
    VAR_4 = (UINT32) VAR_6;



    if (VAR_3->Address)
    {
        VAR_7 = FUNC_1 (&VAR_6, VAR_3);
        if (FUNC_0 (VAR_7))
        {
            return (VAR_7);
        }
        VAR_5 = (UINT32) VAR_6;
    }
    *VAR_1 = (VAR_4 | VAR_5);
    return (VAR_0);
}
