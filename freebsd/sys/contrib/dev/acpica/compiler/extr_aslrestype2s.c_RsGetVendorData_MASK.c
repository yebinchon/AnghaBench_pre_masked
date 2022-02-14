
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ UINT16 ;
struct TYPE_9__ {scalar_t__ Integer; } ;
struct TYPE_10__ {scalar_t__ ParseOpcode; TYPE_1__ Value; TYPE_3__* Child; } ;
struct TYPE_11__ {TYPE_2__ Asl; } ;
typedef int BOOLEAN ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,TYPE_3__*,char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,scalar_t__) ;
 int VAR_10 ;

__attribute__((used)) static BOOLEAN
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_11,
    UINT8 *VAR_12,
    ACPI_SIZE VAR_13)
{
    ACPI_PARSE_OBJECT *VAR_14;
    UINT32 VAR_15 = VAR_1;
    UINT16 VAR_16 = 0;




    if (VAR_11->Asl.ParseOpcode == VAR_9)
    {
        return (VAR_8);
    }

    VAR_14 = VAR_11->Asl.Child;
    if (!VAR_14)
    {
        FUNC_0 (VAR_2, VAR_6, VAR_11, "");
        return (VAR_8);
    }



    if (VAR_14->Asl.ParseOpcode != VAR_9)
    {
        VAR_15 = (UINT16) VAR_14->Asl.Value.Integer;
    }



    FUNC_2 (VAR_11, VAR_0,
        (UINT16) VAR_13);



    VAR_14 = FUNC_1 (VAR_14);
    if (VAR_14->Asl.ParseOpcode != VAR_9)
    {
        while (VAR_14)
        {
            *VAR_12 = (UINT8) VAR_14->Asl.Value.Integer;
            VAR_12++;
            VAR_16++;
            VAR_14 = FUNC_1 (VAR_14);
        }
    }



    if ((VAR_15 == 0) ||
        ((VAR_15 == VAR_1) && (VAR_16 == 0)))
    {
        FUNC_0 (VAR_2, VAR_3, VAR_11, ((void*)0));
        return (VAR_8);
    }

    if (VAR_15 != VAR_1)
    {


        if (VAR_16 > VAR_15)
        {
            FUNC_0 (VAR_2, VAR_4, VAR_11, ((void*)0));
            return (VAR_8);
        }



        else if (VAR_16 < VAR_15)
        {
            FUNC_0 (VAR_7, VAR_5, VAR_11, ((void*)0));
            return (VAR_8);
        }
    }

    return (VAR_10);
}
