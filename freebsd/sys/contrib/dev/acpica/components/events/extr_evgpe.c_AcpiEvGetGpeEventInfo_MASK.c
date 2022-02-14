
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_4__ {int GpeBlock; } ;
struct TYPE_5__ {TYPE_1__ Device; } ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_HANDLE ;
typedef int ACPI_GPE_EVENT_INFO ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int * FUNC_1 (size_t,int ) ;
 int * VAR_1 ;
 TYPE_2__* FUNC_2 (int *) ;

ACPI_GPE_EVENT_INFO *
FUNC_3 (
    ACPI_HANDLE VAR_2,
    UINT32 VAR_3)
{
    ACPI_OPERAND_OBJECT *VAR_4;
    ACPI_GPE_EVENT_INFO *VAR_5;
    UINT32 VAR_6;


    FUNC_0 ();




    if (!VAR_2)
    {


        for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        {
            VAR_5 = FUNC_1 (VAR_3,
                VAR_1[VAR_6]);
            if (VAR_5)
            {
                return (VAR_5);
            }
        }



        return (((void*)0));
    }



    VAR_4 = FUNC_2 ((ACPI_NAMESPACE_NODE *) VAR_2);
    if (!VAR_4 ||
        !VAR_4->Device.GpeBlock)
    {
        return (((void*)0));
    }

    return (FUNC_1 (VAR_3, VAR_4->Device.GpeBlock));
}
