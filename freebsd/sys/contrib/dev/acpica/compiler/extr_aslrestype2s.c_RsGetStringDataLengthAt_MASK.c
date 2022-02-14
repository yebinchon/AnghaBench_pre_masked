
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
struct TYPE_7__ {int String; } ;
struct TYPE_8__ {scalar_t__ ParseOpcode; TYPE_1__ Value; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static UINT16
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_1,
    UINT32 VAR_2)
{
    UINT32 VAR_3;

    for (VAR_3 = 0; VAR_1; VAR_3++)
    {
        if (VAR_3 == VAR_2 &&
            VAR_1->Asl.ParseOpcode == VAR_0)
        {
            return ((UINT16) (FUNC_1 (VAR_1->Asl.Value.String) + 1));
        }

        VAR_1 = FUNC_0 (VAR_1);
    }

    return (0);
}
