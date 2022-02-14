
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_7__ {scalar_t__ Integer; } ;
struct TYPE_8__ {TYPE_1__ Value; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,scalar_t__) ;

ACPI_PARSE_OBJECT *
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_3,
    UINT32 VAR_4,
    UINT32 VAR_5)
{

    if (!VAR_3)
    {
        return (((void*)0));
    }

    if ((VAR_3->Asl.Value.Integer < VAR_4) ||
        (VAR_3->Asl.Value.Integer > VAR_5))
    {
        FUNC_1 (VAR_2, "0x%X, allowable: 0x%X-0x%X",
            (UINT32) VAR_3->Asl.Value.Integer, VAR_4, VAR_5);

        FUNC_0 (VAR_0, VAR_1, VAR_3, VAR_2);
        return (((void*)0));
    }

    return (VAR_3);
}
