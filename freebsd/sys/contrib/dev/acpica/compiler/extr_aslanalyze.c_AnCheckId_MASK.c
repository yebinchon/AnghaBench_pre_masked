
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_6__ {char* String; } ;
struct TYPE_7__ {scalar_t__ ParseOpcode; TYPE_1__ Value; } ;
struct TYPE_8__ {TYPE_2__ Asl; } ;
typedef int ACPI_SIZE ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;
typedef scalar_t__ ACPI_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,TYPE_3__*,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

void
FUNC_6 (
    ACPI_PARSE_OBJECT *VAR_10,
    ACPI_NAME VAR_11)
{
    UINT32 VAR_12;
    ACPI_SIZE VAR_13;




    if (VAR_10->Asl.ParseOpcode != VAR_9)
    {
        return;
    }



    VAR_13 = FUNC_5 (VAR_10->Asl.Value.String);
    if (!VAR_13)
    {
        FUNC_0 (VAR_0, VAR_6, VAR_10, ((void*)0));
        return;
    }







    if (*VAR_10->Asl.Value.String == '*')
    {
        FUNC_0 (VAR_0, VAR_5,
            VAR_10, VAR_10->Asl.Value.String);
        return;
    }



    if (VAR_11 == VAR_8)
    {
        return;
    }



    for (VAR_12 = 0; VAR_10->Asl.Value.String[VAR_12]; VAR_12++)
    {
        if (!FUNC_1 ((int) VAR_10->Asl.Value.String[VAR_12]))
        {
            FUNC_0 (VAR_0, VAR_1,
                VAR_10, VAR_10->Asl.Value.String);
            return;
        }
    }
    if ((VAR_13 < 7) || (VAR_13 > 8))
    {
        FUNC_0 (VAR_0, VAR_2,
            VAR_10, VAR_10->Asl.Value.String);
        return;
    }



    if (VAR_13 == 7)
    {


        for (VAR_12 = 0; VAR_12 < 3; VAR_12++)
        {
            if (!FUNC_3 ((int) VAR_10->Asl.Value.String[VAR_12]))
            {
                FUNC_0 (VAR_0, VAR_7,
                    VAR_10, &VAR_10->Asl.Value.String[VAR_12]);
                return;
            }
        }
    }
    else
    {




        for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
        {
            if (!FUNC_3 ((int) VAR_10->Asl.Value.String[VAR_12]) &&
                !FUNC_2 ((int) VAR_10->Asl.Value.String[VAR_12]))
            {
                FUNC_0 (VAR_0, VAR_3,
                    VAR_10, &VAR_10->Asl.Value.String[VAR_12]);
                return;
            }
        }
    }



    for (; VAR_12 < VAR_13; VAR_12++)
    {
        if (!FUNC_4 ((int) VAR_10->Asl.Value.String[VAR_12]))
        {
            FUNC_0 (VAR_0, VAR_4,
                VAR_10, &VAR_10->Asl.Value.String[VAR_12]);
            break;
        }
    }
}
