
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int AmlOpcode; } ;
struct TYPE_17__ {TYPE_1__ Common; } ;
struct TYPE_16__ {scalar_t__ (* AscendingCallback ) (TYPE_2__*) ;int ArgCount; int ArgTypes; int ParserState; int Opcode; int OpInfo; TYPE_3__* Op; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__**,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*,scalar_t__) ;
 int FUNC_7 (int *,TYPE_3__**,int *,int *) ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

ACPI_STATUS
FUNC_10 (
    ACPI_WALK_STATE *VAR_5,
    ACPI_PARSE_OBJECT *VAR_6,
    ACPI_STATUS VAR_7)
{
    ACPI_STATUS VAR_8;


    FUNC_2 (VAR_4, VAR_5);
    FUNC_0 ((VAR_0, "AML package complete at Op %p\n", VAR_6));
    do
    {
        if (VAR_6)
        {
            if (VAR_5->AscendingCallback != ((void*)0))
            {
                VAR_5->Op = VAR_6;
                VAR_5->OpInfo = FUNC_5 (VAR_6->Common.AmlOpcode);
                VAR_5->Opcode = VAR_6->Common.AmlOpcode;

                VAR_7 = VAR_5->AscendingCallback (VAR_5);
                VAR_7 = FUNC_6 (VAR_5, VAR_6, VAR_7);
                if (VAR_7 == VAR_1)
                {
                    VAR_7 = FUNC_3 (VAR_5, &VAR_6, VAR_3);
                    if (FUNC_1 (VAR_7))
                    {
                        FUNC_8 (VAR_7);
                    }
                }

                if (VAR_7 == VAR_2)
                {
                    VAR_7 = VAR_3;


                    do
                    {
                        if (VAR_6)
                        {
                            VAR_8 = FUNC_4 (VAR_5, VAR_6);
                            if (FUNC_1 (VAR_8))
                            {
                                FUNC_8 (VAR_8);
                            }
                        }

                        FUNC_7 (&(VAR_5->ParserState), &VAR_6,
                            &VAR_5->ArgTypes, &VAR_5->ArgCount);

                    } while (VAR_6);

                    FUNC_8 (VAR_7);
                }

                else if (FUNC_1 (VAR_7))
                {


                    (void) FUNC_4 (VAR_5, VAR_6);
                    FUNC_8 (VAR_7);
                }
            }

            VAR_8 = FUNC_4 (VAR_5, VAR_6);
            if (FUNC_1 (VAR_8))
            {
                FUNC_8 (VAR_8);
            }
        }

        FUNC_7 (&(VAR_5->ParserState), &VAR_6, &VAR_5->ArgTypes,
            &VAR_5->ArgCount);

    } while (VAR_6);

    FUNC_8 (VAR_7);
}
