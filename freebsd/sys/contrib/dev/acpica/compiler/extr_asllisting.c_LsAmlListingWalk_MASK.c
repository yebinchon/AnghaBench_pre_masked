
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
struct TYPE_5__ {int CompileFlags; scalar_t__ FinalAmlLength; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *,int,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    ACPI_PARSE_OBJECT *VAR_6,
    UINT32 VAR_7,
    void *VAR_8)
{
    UINT8 VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11 = (UINT32) FUNC_1 (VAR_8);


    FUNC_6 (VAR_6, VAR_11);

    if (VAR_6->Asl.CompileFlags & VAR_5)
    {


        return (VAR_0);
    }

    if ((VAR_11 == VAR_2) ||
        (VAR_11 == VAR_3))
    {
        return (VAR_0);
    }



    for (VAR_10 = 0; VAR_10 < VAR_6->Asl.FinalAmlLength; VAR_10++)
    {
        if (FUNC_0 (FUNC_4 (VAR_1, &VAR_9, 1)))
        {
            FUNC_3 (VAR_1, VAR_4);
            FUNC_2 ();
        }

        FUNC_5 (&VAR_9, 1, VAR_11);
    }

    return (VAR_0);
}
