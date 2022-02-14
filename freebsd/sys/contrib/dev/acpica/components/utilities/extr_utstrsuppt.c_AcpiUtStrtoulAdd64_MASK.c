
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT32 ;
typedef int ACPI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ACPI_STATUS
FUNC_0 (
    UINT64 VAR_5,
    UINT32 VAR_6,
    UINT64 *VAR_7)
{
    UINT64 VAR_8;




    if ((VAR_5 > 0) && (VAR_6 > (VAR_1 - VAR_5)))
    {
        return (VAR_2);
    }

    VAR_8 = VAR_5 + VAR_6;



    if ((VAR_4 == 32) && (VAR_8 > VAR_0))
    {
        return (VAR_2);
    }

    *VAR_7 = VAR_8;
    return (VAR_3);
}
