
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT64 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
struct TYPE_9__ {scalar_t__ Integer; } ;
struct TYPE_10__ {int ParseOpcode; TYPE_2__ Value; TYPE_4__* Next; TYPE_4__* Child; TYPE_1__* Node; } ;
struct TYPE_11__ {TYPE_3__ Asl; } ;
struct TYPE_8__ {TYPE_4__* Op; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,TYPE_4__*,int *) ;







__attribute__((used)) static void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_3)
{
    ACPI_PARSE_OBJECT *VAR_4;
    ACPI_PARSE_OBJECT *VAR_5;
    UINT32 VAR_6;
    UINT32 VAR_7;





    VAR_5 = VAR_3->Asl.Child;





    if (!VAR_5->Asl.Node)
    {
        return;
    }

    VAR_4 = VAR_5->Asl.Node->Op;
    VAR_4 = VAR_4->Asl.Child;
    VAR_4 = VAR_4->Asl.Next;
    if (!VAR_4)
    {


        return;
    }



    VAR_5 = VAR_4->Asl.Child;
    if (!FUNC_1 (VAR_5))
    {
        return;
    }

    VAR_6 = (UINT32) VAR_5->Asl.Value.Integer;





    VAR_5 = VAR_3->Asl.Child;
    VAR_5 = VAR_5->Asl.Next;
    if (!FUNC_1 (VAR_5))
    {
        return;
    }

    VAR_7 =
        (UINT32) VAR_5->Asl.Value.Integer;





    switch (VAR_3->Asl.ParseOpcode)
    {
    case 133:

        VAR_7 = FUNC_0 (VAR_7);
        break;

    case 132:
        break;

    case 128:

        VAR_7 += (sizeof (UINT16) - 1);
        break;

    case 131:

        VAR_7 += (sizeof (UINT32) - 1);
        break;

    case 129:

        VAR_7 += (sizeof (UINT64) - 1);
        break;

    case 130:

        VAR_5 = VAR_5->Asl.Next;
        if (!FUNC_1 (VAR_5))
        {
            return;
        }



        if (VAR_5->Asl.Value.Integer == 0)
        {
            FUNC_2 (VAR_2, VAR_0, VAR_5, ((void*)0));
            return;
        }

        VAR_7 +=
            ((UINT32) VAR_5->Asl.Value.Integer - 1);



        VAR_7 = FUNC_0 (VAR_7);
        break;

    default:
        return;
    }





    if (!VAR_6 || (VAR_7 >= VAR_6))
    {
        FUNC_2 (VAR_2, VAR_1, VAR_5, ((void*)0));
    }
}
