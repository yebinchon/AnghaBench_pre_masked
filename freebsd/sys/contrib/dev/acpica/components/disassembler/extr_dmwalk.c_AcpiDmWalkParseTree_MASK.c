
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ Level; } ;
struct TYPE_10__ {TYPE_2__* Parent; TYPE_2__* Next; } ;
struct TYPE_11__ {TYPE_1__ Common; } ;
typedef scalar_t__ BOOLEAN ;
typedef scalar_t__ (* ASL_WALK_CALLBACK ) (TYPE_2__*,scalar_t__,void*) ;
typedef scalar_t__ ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef TYPE_4__ ACPI_OP_WALK_INFO ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_3,
    ASL_WALK_CALLBACK VAR_4,
    ASL_WALK_CALLBACK VAR_5,
    void *VAR_6)
{
    BOOLEAN VAR_7;
    ACPI_PARSE_OBJECT *VAR_8 = VAR_3;
    ACPI_STATUS VAR_9;
    ACPI_PARSE_OBJECT *VAR_10;
    ACPI_OP_WALK_INFO *VAR_11 = VAR_6;


    VAR_11->Level = 0;
    VAR_7 = VAR_1;

    while (VAR_3)
    {
        if (VAR_7)
        {
            if (VAR_5)
            {
                VAR_9 = VAR_5 (VAR_3, VAR_11->Level, VAR_6);
                if (FUNC_0 (VAR_9))
                {
                    return;
                }
            }
        }
        else
        {


            VAR_9 = VAR_4 (VAR_3, VAR_11->Level, VAR_6);
            if (FUNC_1 (VAR_9))
            {


                VAR_10 = FUNC_2 (VAR_3, 0);
                if (VAR_10)
                {
                    VAR_11->Level++;
                    VAR_3 = VAR_10;
                    continue;
                }
            }
            else if (VAR_9 != VAR_0)
            {


                return;
            }
        }



        if (VAR_3 == VAR_8)
        {
            break;
        }



        if (!VAR_7)
        {
            VAR_7 = VAR_2;
            continue;
        }



        if (VAR_3->Common.Next)
        {
            VAR_3 = VAR_3->Common.Next;
            VAR_7 = VAR_1;
        }
        else
        {


            if (VAR_11->Level != 0 )
            {
                VAR_11->Level--;
            }

            VAR_3 = VAR_3->Common.Parent;
            VAR_7 = VAR_2;
        }
    }



    return;
}
