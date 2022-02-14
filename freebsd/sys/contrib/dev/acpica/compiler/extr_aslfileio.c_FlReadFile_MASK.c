
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {int Handle; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (void*,int,size_t,int ) ;

ACPI_STATUS
FUNC_4 (
    UINT32 VAR_4,
    void *VAR_5,
    UINT32 VAR_6)
{
    UINT32 VAR_7;




    VAR_7 = FUNC_3 (VAR_5, 1, VAR_6, VAR_3[VAR_4].Handle);
    if (VAR_7 < VAR_6)
    {
        if (FUNC_2 (VAR_3[VAR_4].Handle))
        {


            return (VAR_0);
        }

        FUNC_1 (VAR_4, VAR_2);
        FUNC_0 ();
    }

    return (VAR_1);
}
