
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {int Flags; scalar_t__ Type; } ;
struct TYPE_7__ {int ParseOpcode; scalar_t__ AmlOpcode; TYPE_3__* Node; TYPE_2__* Next; TYPE_2__* Child; } ;
struct TYPE_8__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,TYPE_2__*,char*) ;
 int VAR_11 ;
__attribute__((used)) static void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_12)
{
    ACPI_NAMESPACE_NODE *VAR_13;
    ACPI_NAMESPACE_NODE *VAR_14;
    ACPI_PARSE_OBJECT *VAR_15;
    ACPI_PARSE_OBJECT *VAR_16;
    UINT32 VAR_17;
    UINT32 VAR_18;




    VAR_15 = VAR_12->Asl.Child;
    VAR_16 = VAR_15->Asl.Next;





    switch (VAR_15->Asl.ParseOpcode)
    {


    case 132:
    case 130:
    case 128:
    case 134:

        return;

    case 131:
    case 129:

        if (!VAR_11)
        {
            return;
        }





        if (VAR_16->Asl.AmlOpcode == VAR_3)
        {
            return;
        }

        if ((VAR_16->Asl.AmlOpcode < VAR_5) ||
            (VAR_16->Asl.AmlOpcode > VAR_2))
        {
            FUNC_1 (VAR_7, VAR_9, VAR_16,
                "Source [Reference], Target must be [Local/Arg/Debug]");
        }
        return;

    default:
        break;
    }




    switch (VAR_16->Asl.ParseOpcode)
    {
    case 133:
    case 132:
    case 129:
    case 131:
    case 128:

        return;

    default:
        break;
    }





    VAR_13 = VAR_15->Asl.Node;
    if (VAR_13 &&
        (VAR_13->Flags & VAR_6) &&
        (VAR_13->Type == VAR_1))
    {
        return;
    }

    VAR_14 = VAR_16->Asl.Node;
    if (VAR_14 &&
        (VAR_14->Flags & VAR_6) &&
        (VAR_14->Type == VAR_1))
    {
        return;
    }





    if ((!VAR_13 && (VAR_15->Asl.AmlOpcode == VAR_4)) ||
        (!VAR_14 && (VAR_16->Asl.AmlOpcode == VAR_4)))
    {
        return;
    }





    if (VAR_13 && VAR_14)
    {
        if (VAR_13 == VAR_14)
        {
            FUNC_1 (VAR_10, VAR_8,
                VAR_16, "Source is the same as Target");
            return;
        }
    }



    if ((VAR_15->Asl.AmlOpcode >= VAR_5) &&
        (VAR_15->Asl.AmlOpcode <= VAR_2))
    {
        return;
    }

    if ((VAR_16->Asl.AmlOpcode >= VAR_5) &&
        (VAR_16->Asl.AmlOpcode <= VAR_2))
    {
        return;
    }
    VAR_17 = FUNC_0 (VAR_15);
    VAR_18 = FUNC_0 (VAR_16);



    if (VAR_17 & VAR_0)
    {


        if (!(VAR_18 & VAR_0))
        {
            FUNC_1 (VAR_7, VAR_9, VAR_16,
                "Source is [Package], Target must be a package also");
        }
    }



    else if (VAR_18 & VAR_0)
    {


        if (!(VAR_17 & VAR_0))
        {
            FUNC_1 (VAR_7, VAR_9, VAR_15,
                "Target is [Package], Source must be a package also");
        }
    }
}
