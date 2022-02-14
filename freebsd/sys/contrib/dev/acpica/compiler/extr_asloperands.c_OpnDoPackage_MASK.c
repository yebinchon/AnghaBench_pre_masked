
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_8__ {scalar_t__ Integer; } ;
struct TYPE_9__ {scalar_t__ ParseOpcode; int AmlLength; TYPE_1__ Value; int AmlOpcode; TYPE_3__* Child; TYPE_3__* Next; } ;
struct TYPE_10__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_15)
{
    ACPI_PARSE_OBJECT *VAR_16;
    ACPI_PARSE_OBJECT *VAR_17;
    UINT32 VAR_18 = 0;




    VAR_17 = VAR_15->Asl.Child;
    VAR_16 = VAR_17->Asl.Next;



    if (VAR_16->Asl.ParseOpcode != VAR_7)
    {


        while (VAR_16)
        {
            VAR_18++;
            VAR_16 = VAR_16->Asl.Next;
        }
    }



    if ((VAR_17->Asl.ParseOpcode == VAR_8) ||
        (VAR_17->Asl.ParseOpcode == VAR_12))
    {
        if (VAR_17->Asl.Value.Integer > VAR_18)
        {






            if (VAR_18 > 0)
            {
                FUNC_0 (VAR_6, VAR_4,
                    VAR_17, ((void*)0));
            }

            VAR_18 = (UINT32) VAR_17->Asl.Value.Integer;
        }
        else if (VAR_17->Asl.Value.Integer < VAR_18)
        {




            FUNC_0 (VAR_2, VAR_3,
                VAR_17, ((void*)0));
        }
    }

    if (VAR_17->Asl.ParseOpcode == VAR_7)
    {




        VAR_15->Asl.Child->Asl.ParseOpcode = VAR_8;
        VAR_15->Asl.Child->Asl.Value.Integer = VAR_18;
        FUNC_2 (VAR_15);



        (void) FUNC_1 (VAR_15->Asl.Child);
    }



    if ((VAR_17->Asl.ParseOpcode == VAR_8) ||
        (VAR_17->Asl.ParseOpcode == VAR_12) ||
        (VAR_17->Asl.ParseOpcode == VAR_14) ||
        (VAR_17->Asl.ParseOpcode == VAR_7))
    {
        if (!VAR_18)
        {


            FUNC_0 (VAR_6, VAR_5,
                VAR_17, ((void*)0));


        }
    }





    if (((VAR_15->Asl.Child->Asl.ParseOpcode == VAR_8) &&
            (VAR_15->Asl.Child->Asl.Value.Integer <= 255)) ||
        (VAR_15->Asl.Child->Asl.ParseOpcode == VAR_9) ||
        (VAR_15->Asl.Child->Asl.ParseOpcode == VAR_10)||
        (VAR_15->Asl.Child->Asl.ParseOpcode == VAR_14))
    {
        VAR_15->Asl.AmlOpcode = VAR_0;
        VAR_15->Asl.ParseOpcode = VAR_11;





        VAR_17->Asl.AmlOpcode = VAR_1;
        VAR_17->Asl.AmlLength = 1;
        VAR_17->Asl.ParseOpcode = VAR_13;
        VAR_17->Asl.Value.Integer = VAR_18;
    }


}
