
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* Parent; } ;
struct TYPE_12__ {TYPE_3__ Common; } ;
struct TYPE_9__ {scalar_t__ ParseOpcode; } ;
struct TYPE_10__ {TYPE_1__ Asl; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int (*) (TYPE_4__*,int *,int *,int *,char*,char**)) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_6 (int ,char*,int *,char**) ;
 int FUNC_7 (int *,char*,int ,int ,int ,int *,int **) ;
 int FUNC_8 (TYPE_4__*,int ,char*,int ) ;
 int FUNC_9 (int ,int ,TYPE_4__*,char*) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static ACPI_STATUS
FUNC_10 (
    ACPI_PARSE_OBJECT *VAR_13,
    ACPI_WALK_STATE *VAR_14,
    ACPI_NAMESPACE_NODE *VAR_15,
    ACPI_NAMESPACE_NODE *VAR_16,
    char *VAR_17,
    char **VAR_18)
{
    ACPI_STATUS VAR_19;
    char *VAR_20;
    ACPI_NAMESPACE_NODE *VAR_21;


    FUNC_3 (FUNC_10);


    if (((VAR_15 == VAR_11) ||
        (VAR_13->Common.Parent->Asl.ParseOpcode == VAR_12)) &&
            (FUNC_4 (VAR_17[0])))
    {




        *VAR_18 = &VAR_17[1];



        VAR_19 = FUNC_6 (VAR_4, *VAR_18,
            ((void*)0), &VAR_20);
        if (FUNC_1 (VAR_19))
        {
            FUNC_8 (VAR_13, VAR_19, "Externalizing NamePath",
                VAR_8);
            return (VAR_19);
        }
        VAR_19 = FUNC_7 (((void*)0), *VAR_18,
            VAR_3, VAR_1,
            VAR_2, VAR_14, &(VAR_21));
        if (FUNC_5 (VAR_19))
        {


            if (VAR_21 == VAR_16)
            {


                FUNC_9 (VAR_9, VAR_7,
                    VAR_13, VAR_20);

                FUNC_0 ((VAR_0,
                    "AT ROOT:   %-24s", VAR_20));
            }
            else
            {


                VAR_19 = VAR_5;
                FUNC_0 ((VAR_0,
                    " ***** WRONG NODE"));
                FUNC_9 (VAR_10, VAR_6, VAR_13,
                    "Not using optimized name - found wrong node");
            }
        }
        else
        {


            FUNC_0 ((VAR_0,
                " ***** NOT FOUND"));
            FUNC_9 (VAR_10, VAR_6, VAR_13,
                "Not using optimized name - did not find node");
        }

        FUNC_2 (VAR_20);
        return (VAR_19);
    }



    return (VAR_5);
}
