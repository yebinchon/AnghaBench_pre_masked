
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Signature; scalar_t__ Template; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_DMTABLE_DATA ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (scalar_t__,int ,TYPE_1__ const*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    void)
{
    const ACPI_DMTABLE_DATA *VAR_8;
    ACPI_STATUS VAR_9;


    FUNC_2 (VAR_7, "Creating all supported Template files\n");



    for (VAR_8 = VAR_6; VAR_8->Signature; VAR_8++)
    {


        if (VAR_8->Template)
        {
            VAR_9 = FUNC_1 (VAR_8->Signature,
                0, VAR_8);
            if (FUNC_0 (VAR_9))
            {
                return (VAR_9);
            }
        }
    }






    VAR_9 = FUNC_1 (VAR_1, 0, ((void*)0));
    if (FUNC_0 (VAR_9))
    {
        return (VAR_9);
    }

    VAR_9 = FUNC_1 (VAR_4, 0, ((void*)0));
    if (FUNC_0 (VAR_9))
    {
        return (VAR_9);
    }

    VAR_9 = FUNC_1 (VAR_3, 0, ((void*)0));
    if (FUNC_0 (VAR_9))
    {
        return (VAR_9);
    }

    VAR_9 = FUNC_1 (VAR_2, 0, ((void*)0));
    if (FUNC_0 (VAR_9))
    {
        return (VAR_9);
    }

    VAR_9 = FUNC_1 (VAR_0, 0, ((void*)0));
    if (FUNC_0 (VAR_9))
    {
        return (VAR_9);
    }

    return (VAR_5);
}
