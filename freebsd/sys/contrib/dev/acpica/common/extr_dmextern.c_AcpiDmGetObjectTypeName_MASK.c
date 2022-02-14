
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ACPI_OBJECT_TYPE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 char const** VAR_3 ;

__attribute__((used)) static const char *
FUNC_0 (
    ACPI_OBJECT_TYPE VAR_4)
{

    if (VAR_4 == VAR_2)
    {
        VAR_4 = VAR_0;
    }
    else if (VAR_4 > VAR_1)
    {
        return ("");
    }

    return (VAR_3[VAR_4]);
}
