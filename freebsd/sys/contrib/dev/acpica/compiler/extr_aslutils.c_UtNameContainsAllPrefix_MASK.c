
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_5__ {char* String; } ;
struct TYPE_6__ {size_t AmlLength; TYPE_1__ Value; } ;
struct TYPE_7__ {TYPE_2__ Asl; } ;
typedef int BOOLEAN ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;

BOOLEAN
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_2)
{
    UINT32 VAR_3 = VAR_2->Asl.AmlLength;
    UINT32 VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        if (VAR_2->Asl.Value.String[VAR_4] != '^')
        {
            return (VAR_0);
        }
    }

    return (VAR_1);
}
