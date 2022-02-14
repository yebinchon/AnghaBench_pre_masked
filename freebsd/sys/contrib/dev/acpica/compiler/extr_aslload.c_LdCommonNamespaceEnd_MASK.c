
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {scalar_t__ ParseOpcode; int CompileFlags; int ParseOpName; int AmlOpcode; int Namepath; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (TYPE_2__*,int ,void*)) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_PARSE_OBJECT *VAR_8,
    UINT32 VAR_9,
    void *VAR_10)
{
    ACPI_WALK_STATE *VAR_11 = (ACPI_WALK_STATE *) VAR_10;
    ACPI_OBJECT_TYPE VAR_12;
    BOOLEAN VAR_13 = VAR_3;


    FUNC_1 (FUNC_6);




    if (!VAR_8->Asl.Namepath)
    {
        return (VAR_2);
    }



    if ((VAR_8->Asl.ParseOpcode == VAR_5) &&
        (VAR_8->Asl.CompileFlags == VAR_4))
    {


        VAR_12 = VAR_1;
    }
    else
    {
        VAR_12 = FUNC_5 (VAR_8->Asl.AmlOpcode);
    }



    if (VAR_8->Asl.ParseOpcode == VAR_6)
    {
        if (VAR_8->Asl.CompileFlags & VAR_4)
        {
            VAR_13 = VAR_7;
        }
    }



    if (VAR_13 || FUNC_3 (VAR_12))
    {
        FUNC_0 ((VAR_0,
            "(%s): Popping scope for Op [%s] %p\n",
            FUNC_4 (VAR_12), VAR_8->Asl.ParseOpName, VAR_8));

        (void) FUNC_2 (VAR_11);
    }

    return (VAR_2);
}
