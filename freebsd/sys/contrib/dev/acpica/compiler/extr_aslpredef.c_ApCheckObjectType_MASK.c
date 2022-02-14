
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {int ParseOpcode; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,TYPE_2__*,int ) ;
 int VAR_10 ;
 char* VAR_11 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char const*,char*,...) ;

ACPI_STATUS
FUNC_4 (
    const char *VAR_12,
    ACPI_PARSE_OBJECT *VAR_13,
    UINT32 VAR_14,
    UINT32 VAR_15)
{
    UINT32 VAR_16;
    char *VAR_17;


    if (!VAR_13)
    {
        return (VAR_7);
    }



    switch (VAR_13->Asl.ParseOpcode)
    {
    case 128:
    case 133:
    case 132:
    case 136:

        VAR_16 = VAR_2;
        VAR_17 = "Integer";
        break;

    case 130:

        VAR_16 = VAR_5;
        VAR_17 = "String";
        break;

    case 137:

        VAR_16 = VAR_1;
        VAR_17 = "Buffer";
        break;

    case 131:
    case 129:

        VAR_16 = VAR_3;
        VAR_17 = "Package";
        break;

    case 135:
    case 134:
        if (VAR_15 != VAR_0)
        {
            return (VAR_6);
        }

        VAR_16 = VAR_4;
        VAR_17 = "Reference";
        break;

    default:



        VAR_17 = FUNC_2 (VAR_13->Asl.ParseOpcode);
        goto TypeErrorExit;
    }



    if (VAR_16 & VAR_14)
    {
        return (VAR_6);
    }


TypeErrorExit:



    FUNC_0 (VAR_11, VAR_14);

    if (VAR_15 == VAR_0)
    {
        FUNC_3 (VAR_10, "%4.4s: found %s, %s required",
            VAR_12, VAR_17, VAR_11);
    }
    else
    {
        FUNC_3 (VAR_10, "%4.4s: found %s at index %u, %s required",
            VAR_12, VAR_17, VAR_15, VAR_11);
    }

    FUNC_1 (VAR_8, VAR_9, VAR_13, VAR_10);
    return (VAR_7);
}
