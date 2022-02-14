
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_11__ {TYPE_1__* Node; int ParseOpcode; } ;
struct TYPE_16__ {TYPE_2__ Asl; } ;
struct TYPE_12__ {int AcpiBtype; } ;
struct TYPE_15__ {TYPE_3__ Asl; } ;
struct TYPE_13__ {int ParseOpcode; TYPE_6__* ParentMethod; TYPE_9__* Child; int CompileFlags; } ;
struct TYPE_14__ {TYPE_4__ Asl; } ;
struct TYPE_10__ {TYPE_6__* Op; } ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_9__*) ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int FUNC_1 (TYPE_6__*,int ,int *,int (*) (TYPE_5__*,int ,void*),int *) ;

ACPI_STATUS
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_6,
    UINT32 VAR_7,
    void *VAR_8)
{
    UINT32 VAR_9;


    switch (VAR_6->Asl.ParseOpcode)
    {
    case 129:

        VAR_6->Asl.CompileFlags |= VAR_3;
        break;

    case 128:

        if ((VAR_6->Asl.Child) &&
            (VAR_6->Asl.Child->Asl.ParseOpcode != VAR_4))
        {
            VAR_9 = FUNC_0 (VAR_6->Asl.Child);

            if ((VAR_6->Asl.Child->Asl.ParseOpcode == VAR_5) &&
                (VAR_9 == (VAR_0 -1)))
            {
                if (VAR_6->Asl.Child->Asl.Node &&
                    (VAR_6->Asl.ParentMethod != VAR_6->Asl.Child->Asl.Node->Op))
                {


                    FUNC_1 (VAR_6->Asl.Child->Asl.Node->Op,
                        VAR_2, ((void*)0),
                        FUNC_2, ((void*)0));

                    VAR_9 = FUNC_0 (VAR_6->Asl.Child);
                }
            }



            if (VAR_6->Asl.ParentMethod)
            {
                VAR_6->Asl.ParentMethod->Asl.AcpiBtype |= VAR_9;
            }
        }
        break;

    default:

        break;
    }

    return (VAR_1);
}
