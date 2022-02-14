
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int *,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 char* FUNC_4 (int *,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;

void
FUNC_5 (
    ACPI_NAMESPACE_NODE *VAR_13,
    ACPI_OPERAND_OBJECT *VAR_14,
    ACPI_WALK_STATE *VAR_15)
{
    char *VAR_16 = ((void*)0);
    BOOLEAN VAR_17 = VAR_11;


    FUNC_1 (VAR_10);


    if (VAR_13)
    {
        VAR_16 = FUNC_4 (VAR_13, VAR_12);
    }

    VAR_17 = FUNC_3 (VAR_16);
    if (VAR_17 && !VAR_9)
    {
        VAR_9 = VAR_14;
        VAR_6 = VAR_4;
        VAR_5 = VAR_3;
        VAR_4 = VAR_2;
        VAR_3 = VAR_1;

        if (VAR_8)
        {
            VAR_4 = VAR_8;
        }

        if (VAR_7)
        {
            VAR_3 = VAR_7;
        }
    }

    if (VAR_17)
    {
        FUNC_2 (VAR_0, VAR_12,
            VAR_14 ? VAR_14->Method.AmlStart : ((void*)0), VAR_16);
    }

    if (VAR_16)
    {
        FUNC_0 (VAR_16);
    }
}
