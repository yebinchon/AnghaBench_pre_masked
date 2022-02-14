
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Length; int Revision; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;
typedef int ACPI_STATUS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,TYPE_1__*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;

void
FUNC_4 (
    ACPI_TABLE_HEADER *VAR_8)
{
    ACPI_STATUS VAR_9;




    VAR_9 = FUNC_1 (VAR_8->Length, 0, VAR_8, 0,
        VAR_3);
    if (FUNC_0 (VAR_9))
    {
        return;
    }



    if ((VAR_8->Length > VAR_0) &&
        (VAR_8->Length <= VAR_1))
    {
        VAR_9 = FUNC_1 (VAR_8->Length, 0, VAR_8, 0,
            VAR_4);
        if (FUNC_0 (VAR_9))
        {
            return;
        }
    }



    else if (VAR_8->Length > VAR_1)
    {
        VAR_9 = FUNC_1 (VAR_8->Length, 0, VAR_8, 0,
            VAR_5);
        if (FUNC_0 (VAR_9))
        {
            return;
        }



        if (VAR_8->Length > VAR_2)
        {
            VAR_9 = FUNC_1 (VAR_8->Length, 0, VAR_8, 0,
                VAR_6);
            if (FUNC_0 (VAR_9))
            {
                return;
            }
        }



        if (VAR_8->Length > VAR_2)
        {
            VAR_9 = FUNC_1 (VAR_8->Length, 0, VAR_8, 0,
                VAR_7);
            if (FUNC_0 (VAR_9))
            {
                return;
            }
        }
    }



    FUNC_3 (VAR_8, VAR_8->Length);



    FUNC_2 (VAR_8->Revision, VAR_8->Length);
}
