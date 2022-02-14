
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_6__ {scalar_t__* Name; } ;
struct TYPE_7__ {TYPE_1__ Info; } ;
typedef TYPE_2__ ACPI_PREDEFINED_INFO ;
typedef int ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (char*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int *,char*) ;

UINT32
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_7,
    char *VAR_8)
{
    UINT32 VAR_9;
    const ACPI_PREDEFINED_INFO *VAR_10;


    if (VAR_8[0] == 0)
    {
        FUNC_2 (VAR_2, VAR_3, VAR_7,
            "zero length name found");
    }



    if (VAR_8[0] != '_')
    {
        return (VAR_0);
    }



    VAR_10 = VAR_4;
    for (VAR_9 = 0; VAR_10->Info.Name[0]; VAR_9++)
    {
        if (FUNC_0 (VAR_8, VAR_10->Info.Name))
        {

            return (VAR_9);
        }

        VAR_10++;
    }



    VAR_10 = VAR_5;
    while (VAR_10->Info.Name[0])
    {
        if (FUNC_0 (VAR_8, VAR_10->Info.Name))
        {
            return (VAR_1);
        }

        VAR_10++;
    }

    VAR_10 = VAR_6;
    while (VAR_10->Info.Name[0])
    {
        if (FUNC_0 (VAR_8, VAR_10->Info.Name))
        {
            return (VAR_1);
        }

        VAR_10++;
    }



    return (FUNC_1 (VAR_7, VAR_8));
}
