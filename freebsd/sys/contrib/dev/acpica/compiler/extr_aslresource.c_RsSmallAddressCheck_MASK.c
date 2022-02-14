
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_9__ {int ExternalName; } ;
struct TYPE_10__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,TYPE_2__*,int *) ;
 scalar_t__ VAR_8 ;

void
FUNC_1 (
    UINT8 VAR_9,
    UINT32 VAR_10,
    UINT32 VAR_11,
    UINT32 VAR_12,
    UINT32 VAR_13,
    ACPI_PARSE_OBJECT *VAR_14,
    ACPI_PARSE_OBJECT *VAR_15,
    ACPI_PARSE_OBJECT *VAR_16,
    ACPI_PARSE_OBJECT *VAR_17,
    ACPI_PARSE_OBJECT *VAR_18)
{

    if (VAR_8)
    {
        return;
    }
    if (!VAR_10 && !VAR_11 && !VAR_12)
    {
        if (!VAR_18->Asl.ExternalName)
        {


            FUNC_0 (VAR_3, VAR_7, VAR_18, ((void*)0));
        }

        return;
    }





    if (VAR_9 != VAR_0)
    {


        if (VAR_10 > VAR_11)
        {
            FUNC_0 (VAR_3, VAR_6, VAR_14, ((void*)0));
        }
        else if (VAR_12 > (VAR_11 - VAR_10 + 1))
        {
            FUNC_0 (VAR_3, VAR_5, VAR_16, ((void*)0));
        }



        if (VAR_9 == VAR_1)
        {
            if (!VAR_13)
            {
                VAR_13 = VAR_2 + 1;
            }

            VAR_10 <<= 8;
            VAR_11 <<= 8;
        }
    }



    if (!VAR_13)
    {
        VAR_13 = 1;
    }



    if (VAR_10 % VAR_13)
    {
        FUNC_0 (VAR_3, VAR_4, VAR_14, ((void*)0));
    }
    if (VAR_11 % VAR_13)
    {
        FUNC_0 (VAR_3, VAR_4, VAR_15, ((void*)0));
    }
}
