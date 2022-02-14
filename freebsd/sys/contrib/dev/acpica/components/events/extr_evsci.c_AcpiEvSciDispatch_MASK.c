
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {struct TYPE_3__* Next; int Context; int (* Address ) (int ) ;} ;
typedef TYPE_1__ ACPI_SCI_HANDLER_INFO ;
typedef int ACPI_CPU_FLAGS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

UINT32
FUNC_4 (
    void)
{
    ACPI_SCI_HANDLER_INFO *VAR_4;
    ACPI_CPU_FLAGS VAR_5;
    UINT32 VAR_6 = VAR_0;


    FUNC_0 (VAR_3);




    if (!VAR_2)
    {
        return (VAR_6);
    }

    VAR_5 = FUNC_1 (VAR_1);



    VAR_4 = VAR_2;
    while (VAR_4)
    {


        VAR_6 |= VAR_4->Address (
            VAR_4->Context);

        VAR_4 = VAR_4->Next;
    }

    FUNC_2 (VAR_1, VAR_5);
    return (VAR_6);
}
