
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_4__ {scalar_t__* Addr; struct TYPE_4__* Next; } ;
typedef int BOOLEAN ;
typedef TYPE_1__ ACPI_COMMENT_ADDR_NODE ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOLEAN
FUNC_1 (
    UINT8 *VAR_6)
{
    ACPI_COMMENT_ADDR_NODE *VAR_7 = VAR_0;
    UINT8 VAR_8;


    if (!VAR_6)
    {
        return (VAR_2);
    }

    VAR_8 = *(VAR_6 + 1);





    if ((VAR_8 == VAR_3) ||
        (VAR_8 == VAR_4))
    {
       return (VAR_2);
    }

    if (!VAR_7)
    {
        VAR_0 =
            FUNC_0 (VAR_1);
        VAR_0->Addr = VAR_6;
        VAR_0->Next = ((void*)0);
        return (VAR_2);
    }
    else
    {
        while (VAR_7)
        {
            if (VAR_7->Addr != VAR_6)
            {
                VAR_7 = VAR_7->Next;
            }
            else
            {
                return (VAR_5);
            }
        }






        VAR_7 = VAR_0;
        VAR_0 =
            FUNC_0 (VAR_1);

        VAR_0->Addr = VAR_6;
        VAR_0->Next = VAR_7;
        return (VAR_2);
    }
}
