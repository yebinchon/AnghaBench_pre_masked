
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_33__ {TYPE_8__* Next; } ;
struct TYPE_31__ {TYPE_6__* Next; } ;
struct TYPE_32__ {TYPE_7__ Asl; } ;
struct TYPE_29__ {TYPE_4__* Next; } ;
struct TYPE_30__ {TYPE_5__ Asl; } ;
struct TYPE_27__ {TYPE_2__* Next; } ;
struct TYPE_28__ {TYPE_3__ Asl; } ;
struct TYPE_25__ {int * Next; } ;
struct TYPE_26__ {TYPE_1__ Asl; } ;
struct TYPE_22__ {scalar_t__ ParseOpcode; TYPE_13__* Child; } ;
struct TYPE_24__ {TYPE_14__ Asl; } ;
struct TYPE_23__ {scalar_t__ PruneLevel; scalar_t__ ParseOpcode; int Count; } ;
struct TYPE_18__ {char* Name; } ;
struct TYPE_20__ {TYPE_11__* Next; TYPE_10__ Value; } ;
struct TYPE_21__ {TYPE_12__ Asl; } ;
struct TYPE_19__ {TYPE_9__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_15__ ACPI_PRUNE_INFO ;
typedef TYPE_16__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;




 int FUNC_1 (scalar_t__,char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_1,
    UINT32 VAR_2,
    void *VAR_3)
{
    ACPI_PRUNE_INFO *VAR_4 = (ACPI_PRUNE_INFO *) VAR_3;




    if (VAR_2 <= VAR_4->PruneLevel)
    {
        return (VAR_0);
    }

    if ((VAR_1->Asl.ParseOpcode != VAR_4->ParseOpcode) &&
       !(VAR_1->Asl.ParseOpcode == 130 &&
             VAR_4->ParseOpcode == 129))
    {
        return (VAR_0);
    }

    switch (VAR_1->Asl.ParseOpcode)
    {
    case 128:

        FUNC_0 ("Method");
        FUNC_1 (VAR_2, VAR_1->Asl.Child->Asl.Value.Name);
        VAR_1->Asl.Child->Asl.Next->Asl.Next->Asl.Next->Asl.Next->Asl.Next->Asl.Next = ((void*)0);
        VAR_4->Count++;
        break;

    case 131:

        FUNC_0 ("Device");
        FUNC_1 (VAR_2, VAR_1->Asl.Child->Asl.Value.Name);
        VAR_1->Asl.Child->Asl.Next = ((void*)0);
        VAR_4->Count++;
        break;

    case 129:
    case 130:

        if (VAR_1->Asl.ParseOpcode == 130)
        {
            FUNC_1(VAR_2, "Else");
            VAR_1->Asl.Child = ((void*)0);
        }
        else
        {
            FUNC_1(VAR_2, "If");
            VAR_1->Asl.Child->Asl.Next = ((void*)0);
        }

        VAR_4->Count++;
        break;

    default:

        break;
    }

    return (VAR_0);
}
