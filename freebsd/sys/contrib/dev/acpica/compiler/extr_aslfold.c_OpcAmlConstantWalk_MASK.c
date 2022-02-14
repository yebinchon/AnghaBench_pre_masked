
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_15__ {int CompileFlags; } ;
struct TYPE_17__ {TYPE_1__ Asl; } ;
struct TYPE_16__ {int * Params; int * NextOp; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int) ;

 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,TYPE_3__*,char*) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int ,int ,int *,TYPE_2__*) ;

ACPI_STATUS
FUNC_10 (
    ACPI_PARSE_OBJECT *VAR_8,
    UINT32 VAR_9,
    void *VAR_10)
{
    ACPI_WALK_STATE *VAR_11;
    ACPI_STATUS VAR_12 = 129;


    if (VAR_8->Asl.CompileFlags == 0)
    {
        return (129);
    }





    if ((!(VAR_8->Asl.CompileFlags & VAR_5)) ||
          (VAR_8->Asl.CompileFlags & VAR_6))
    {
        return (129);
    }



    VAR_11 = FUNC_1 (0, ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_11)
    {
        return (VAR_0);
    }

    VAR_11->NextOp = ((void*)0);
    VAR_11->Params = ((void*)0);





    VAR_12 = FUNC_9 (VAR_8, VAR_4,
        VAR_7, ((void*)0), VAR_11);





    switch (VAR_12)
    {
    case 129:



        VAR_12 = FUNC_7 (VAR_8, VAR_11);
        break;

    case 130:



        VAR_12 = FUNC_8 (VAR_8, VAR_11);
        break;

    case 128:

        FUNC_2 (VAR_11);
        return (129);

    default:
        FUNC_2 (VAR_11);
        break;
    }

    if (FUNC_0 (VAR_12))
    {
        FUNC_5 (VAR_3, "Cannot resolve, %s\n",
            FUNC_3 (VAR_12));



        FUNC_4 (VAR_1, VAR_2, VAR_8,
            (char *) FUNC_3 (VAR_12));



        FUNC_6 (VAR_8, 0);
    }

    return (129);
}
