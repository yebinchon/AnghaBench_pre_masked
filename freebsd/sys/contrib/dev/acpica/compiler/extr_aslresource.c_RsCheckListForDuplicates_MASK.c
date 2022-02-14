
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_8__ {scalar_t__ Integer; } ;
struct TYPE_9__ {scalar_t__ ParseOpcode; int CompileFlags; TYPE_1__ Value; } ;
struct TYPE_10__ {TYPE_2__ Asl; } ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_3__*,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_4)
{
    ACPI_PARSE_OBJECT *VAR_5 = VAR_4;
    ACPI_PARSE_OBJECT *VAR_6;
    UINT32 VAR_7;


    if (!VAR_4)
    {
        return;
    }



    while (VAR_5)
    {
        VAR_7 = (UINT32) VAR_5->Asl.Value.Integer;



        VAR_6 = FUNC_0 (VAR_5);
        while (VAR_6)
        {
            if (VAR_6->Asl.ParseOpcode != VAR_3)
            {


                if (VAR_7 == (UINT32) VAR_6->Asl.Value.Integer)
                {


                    if (!(VAR_6->Asl.CompileFlags & VAR_2))
                    {
                        VAR_6->Asl.CompileFlags |= VAR_2;
                        FUNC_1 (VAR_0, VAR_1,
                            VAR_6, ((void*)0));
                    }
                }
            }

            VAR_6 = FUNC_0 (VAR_6);
        }

        VAR_5 = FUNC_0 (VAR_5);
    }
}
