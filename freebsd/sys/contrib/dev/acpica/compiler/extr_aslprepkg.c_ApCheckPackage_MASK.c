
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_22__ {scalar_t__ Integer; } ;
struct TYPE_24__ {TYPE_8__* Next; TYPE_8__* Child; TYPE_2__ Value; } ;
struct TYPE_28__ {TYPE_4__ Asl; } ;
struct TYPE_26__ {char* Name; } ;
struct TYPE_25__ {size_t Count1; int ObjectType1; } ;
struct TYPE_23__ {int Type; size_t Count1; size_t Count2; int ObjectType1; int ObjectType2; } ;
struct TYPE_21__ {size_t Count; int TailObjectType; int * ObjectType; } ;
struct TYPE_27__ {TYPE_6__ Info; TYPE_5__ RetInfo4; TYPE_3__ RetInfo; TYPE_1__ RetInfo3; } ;
typedef int ACPI_STATUS ;
typedef TYPE_7__ ACPI_PREDEFINED_INFO ;
typedef TYPE_8__ ACPI_PARSE_OBJECT ;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_8__*,int ,size_t) ;
 int FUNC_2 (char*,TYPE_8__*,int ,size_t,int ,size_t) ;
 int FUNC_3 (char*,TYPE_8__*,TYPE_7__ const*,int,size_t) ;
 int FUNC_4 (TYPE_8__*,TYPE_7__ const*) ;
 int FUNC_5 (char*,TYPE_8__*,size_t,size_t) ;
 int FUNC_6 (char*,TYPE_8__*,size_t,size_t) ;
 int FUNC_7 (char*,TYPE_8__*) ;
 int FUNC_8 (int ,int ,TYPE_8__*,int ) ;
 int VAR_3 ;
 int FUNC_9 (int ,char*,char*,size_t) ;

void
FUNC_10 (
    ACPI_PARSE_OBJECT *VAR_4,
    const ACPI_PREDEFINED_INFO *VAR_5)
{
    ACPI_PARSE_OBJECT *VAR_6;
    const ACPI_PREDEFINED_INFO *VAR_7;
    ACPI_STATUS VAR_8;
    UINT32 VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11;




    VAR_7 = VAR_5 + 1;



    VAR_6 = VAR_4->Asl.Child;
    VAR_10 = (UINT32) VAR_6->Asl.Value.Integer;
    if (!VAR_10)
    {
        switch (VAR_7->RetInfo.Type)
        {
        case 140:
        case 139:
        case 132:
        case 131:

            FUNC_7 (VAR_5->Info.Name, VAR_4);
            break;

        case 138:
        case 137:
        case 136:
        case 135:
        case 133:
        case 134:
        case 129:
        default:

            break;
        }

        return;
    }



    VAR_6 = VAR_6->Asl.Next;



    switch (VAR_7->RetInfo.Type)
    {
    case 128:

        FUNC_4 (VAR_4, VAR_5);
        break;

    case 140:






        VAR_9 = VAR_7->RetInfo.Count1 + VAR_7->RetInfo.Count2;
        if (VAR_10 < VAR_9)
        {
            goto PackageTooSmall;
        }
        else if (VAR_10 > VAR_9)
        {
            FUNC_5 (VAR_5->Info.Name, VAR_4,
                VAR_10, VAR_9);
        }



        FUNC_2 (VAR_5->Info.Name, VAR_6,
            VAR_7->RetInfo.ObjectType1, VAR_7->RetInfo.Count1,
            VAR_7->RetInfo.ObjectType2, VAR_7->RetInfo.Count2);
        break;

    case 138:




        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
        {
            FUNC_1 (VAR_5->Info.Name, VAR_6,
                VAR_7->RetInfo.ObjectType1, VAR_11);
            VAR_6 = VAR_6->Asl.Next;
        }
        break;

    case 139:







        VAR_9 = VAR_7->RetInfo3.Count;
        if (VAR_10 < VAR_9)
        {
            goto PackageTooSmall;
        }



        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
        {
            if (VAR_11 < VAR_7->RetInfo3.Count)
            {


                FUNC_1 (VAR_5->Info.Name, VAR_6,
                    VAR_7->RetInfo3.ObjectType[VAR_11], VAR_11);
            }
            else
            {


                FUNC_1 (VAR_5->Info.Name, VAR_6,
                    VAR_7->RetInfo3.TailObjectType, VAR_11);
            }

            VAR_6 = VAR_6->Asl.Next;
        }
        break;

    case 131:



        FUNC_1 (VAR_5->Info.Name, VAR_6,
            VAR_0, 0);

        VAR_6 = VAR_6->Asl.Next;
        VAR_10--;



        FUNC_3 (VAR_5->Info.Name, VAR_6,
            VAR_7, 1, VAR_10);
        break;

    case 132:



        VAR_8 = FUNC_1 (VAR_5->Info.Name, VAR_6,
            VAR_0, 0);



        if (FUNC_0 (VAR_8))
        {




            VAR_9 = (UINT32) VAR_6->Asl.Value.Integer;
            if (VAR_9 >= VAR_10)
            {
                goto PackageTooSmall;
            }

            VAR_10 = VAR_9;
        }

        VAR_6 = VAR_6->Asl.Next;



        FUNC_3 (VAR_5->Info.Name, VAR_6,
            VAR_7, 1, VAR_10);
        break;

    case 130:





        if (VAR_10 & 1)
        {
            FUNC_9 (VAR_3, "%4.4s: Package length, %d, must be even.",
                VAR_5->Info.Name, VAR_10);

            FUNC_8 (VAR_1, VAR_2,
                VAR_4->Asl.Child, VAR_3);
        }



        for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
        {
            if (VAR_11 & 1)
            {
                FUNC_1 (VAR_5->Info.Name, VAR_6,
                    VAR_7->RetInfo.ObjectType2, VAR_11);
            }
            else
            {
                FUNC_1 (VAR_5->Info.Name, VAR_6,
                    VAR_7->RetInfo.ObjectType1, VAR_11);
            }

            VAR_6 = VAR_6->Asl.Next;
        }

        break;

    case 129:



        VAR_9 = VAR_7->RetInfo4.Count1 + 1;
        if (VAR_10 < VAR_9)
        {
            goto PackageTooSmall;
        }



        for (VAR_11 = 0; VAR_11 < VAR_7->RetInfo4.Count1; ++VAR_11)
        {
            FUNC_1 (VAR_5->Info.Name, VAR_6,
                VAR_7->RetInfo4.ObjectType1, VAR_11);
            VAR_6 = VAR_6->Asl.Next;
        }



        FUNC_3 (VAR_5->Info.Name, VAR_6,
            VAR_7, VAR_7->RetInfo4.Count1, VAR_10);

        break;

    case 137:
    case 135:
    case 133:
    case 136:
    case 134:







        FUNC_3 (VAR_5->Info.Name, VAR_6,
            VAR_7, 0, VAR_10);
        break;

    default:
        return;
    }

    return;

PackageTooSmall:
    FUNC_6 (VAR_5->Info.Name, VAR_4,
        VAR_10, VAR_9);
}
