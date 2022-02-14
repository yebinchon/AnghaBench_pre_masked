
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {scalar_t__ Integer; } ;
struct TYPE_6__ {scalar_t__ ParseOpcode; TYPE_1__ Value; } ;
struct TYPE_7__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;

void
FUNC_0 (
    UINT16 *VAR_1,
    ACPI_PARSE_OBJECT *VAR_2,
    UINT8 VAR_3,
    UINT8 VAR_4)
{

    if (VAR_2->Asl.ParseOpcode == VAR_0)
    {


        *VAR_1 |= (VAR_4 << VAR_3);
    }
    else
    {


        *VAR_1 |= (((UINT16) VAR_2->Asl.Value.Integer) << VAR_3);
    }
}
