
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * AmlStart; } ;
struct TYPE_6__ {TYPE_1__ Method; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_WALK_STATE ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 TYPE_2__* VAR_8 ;
 char* FUNC_4 (int *,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_5 (
    ACPI_NAMESPACE_NODE *VAR_12,
    ACPI_OPERAND_OBJECT *VAR_13,
    ACPI_WALK_STATE *VAR_14)
{
    char *VAR_15 = ((void*)0);
    BOOLEAN VAR_16;


    FUNC_1 (VAR_9);


    if (VAR_12)
    {
        VAR_15 = FUNC_4 (VAR_12, VAR_11);
    }

    VAR_16 = FUNC_3 (((void*)0));

    if (VAR_16)
    {
        FUNC_2 (VAR_0, VAR_10,
            VAR_13 ? VAR_13->Method.AmlStart : ((void*)0), VAR_15);
    }



    if (VAR_8 == VAR_13)
    {


        if (VAR_6 & VAR_1)
        {
            VAR_7 = ((void*)0);
        }

        VAR_3 = VAR_5;
        VAR_2 = VAR_4;
        VAR_8 = ((void*)0);
    }

    if (VAR_15)
    {
        FUNC_0 (VAR_15);
    }
}
