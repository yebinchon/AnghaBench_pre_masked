
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_17__ {scalar_t__ Integer; } ;
struct TYPE_19__ {TYPE_7__* Next; TYPE_3__ Value; TYPE_7__* Child; } ;
struct TYPE_21__ {TYPE_5__ Asl; } ;
struct TYPE_18__ {int Type; scalar_t__ Count1; scalar_t__ Count2; int ObjectType1; int ObjectType2; } ;
struct TYPE_16__ {scalar_t__ Count; int * ObjectType; } ;
struct TYPE_15__ {scalar_t__ PkgCount; int SubObjectTypes; } ;
struct TYPE_20__ {TYPE_4__ RetInfo; TYPE_2__ RetInfo2; TYPE_1__ RetInfo4; } ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_PREDEFINED_INFO ;
typedef TYPE_7__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,TYPE_7__*,int ,scalar_t__) ;
 int FUNC_3 (char const*,TYPE_7__*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (char const*,TYPE_7__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (char const*,TYPE_7__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (char const*,TYPE_7__*) ;

__attribute__((used)) static void
FUNC_7 (
    const char *VAR_2,
    ACPI_PARSE_OBJECT *VAR_3,
    const ACPI_PREDEFINED_INFO *VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6)
{
    ACPI_PARSE_OBJECT *VAR_7 = VAR_3;
    ACPI_PARSE_OBJECT *VAR_8;
    ACPI_STATUS VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11;
    UINT32 VAR_12;
    UINT32 VAR_13;
    for (VAR_12 = 0; (VAR_12 < VAR_6) && VAR_7; VAR_12++)
    {


        VAR_9 = FUNC_2 (VAR_2, VAR_7,
            VAR_1, VAR_12 + VAR_5);
        if (FUNC_0 (VAR_9))
        {
            goto NextSubpackage;
        }



        VAR_8 = VAR_7->Asl.Child;



        VAR_10 = (UINT32) VAR_8->Asl.Value.Integer;
        VAR_8 = VAR_8->Asl.Next;





        if (!VAR_10 &&
            (VAR_4->RetInfo.Type != 128))
        {
            FUNC_6 (VAR_2, VAR_7);
            goto NextSubpackage;
        }







        switch (VAR_4->RetInfo.Type)
        {
        case 135:
        case 130:
        case 129:



            VAR_11 = VAR_4->RetInfo.Count1 + VAR_4->RetInfo.Count2;
            if (VAR_10 < VAR_11)
            {
                FUNC_5 (VAR_2, VAR_7,
                    VAR_10, VAR_11);
                break;
            }
            if (VAR_10 > VAR_11)
            {
                FUNC_4 (VAR_2, VAR_7,
                    VAR_10, VAR_11);
                break;
            }

            FUNC_3 (VAR_2, VAR_8,
                VAR_4->RetInfo.ObjectType1, VAR_4->RetInfo.Count1,
                VAR_4->RetInfo.ObjectType2, VAR_4->RetInfo.Count2);
            break;

        case 132:




            VAR_11 = VAR_4->RetInfo.Count1 + VAR_4->RetInfo.Count2;
            if (VAR_10 < VAR_11)
            {
                FUNC_5 (VAR_2, VAR_7,
                    VAR_10, VAR_11);
                break;
            }

            FUNC_3 (VAR_2, VAR_8,
                VAR_4->RetInfo.ObjectType1, VAR_4->RetInfo.Count1,
                VAR_4->RetInfo.ObjectType2,
                VAR_10 - VAR_4->RetInfo.Count1);
            break;

        case 128:




            VAR_11 = VAR_4->RetInfo4.PkgCount;
            if (VAR_11 && (VAR_10 < VAR_11))
            {
                FUNC_5 (VAR_2, VAR_7,
                    VAR_10, 1);
                break;
            }

            FUNC_3 (VAR_2, VAR_8,
                VAR_4->RetInfo4.SubObjectTypes,
                VAR_4->RetInfo4.PkgCount,
                0, 0);
            break;

        case 133:



            VAR_11 = VAR_4->RetInfo2.Count;
            if (VAR_10 < VAR_11)
            {
                FUNC_5 (VAR_2, VAR_7,
                    VAR_10, VAR_11);
                break;
            }
            if (VAR_10 > VAR_11)
            {
                FUNC_4 (VAR_2, VAR_7,
                    VAR_10, VAR_11);
                break;
            }



            for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
            {
                FUNC_2 (VAR_2, VAR_8,
                    VAR_4->RetInfo2.ObjectType[VAR_13], VAR_13);

                VAR_8 = VAR_8->Asl.Next;
            }
            break;

        case 131:



            VAR_11 = VAR_4->RetInfo.Count1;
            if (VAR_10 < VAR_11)
            {
                FUNC_5 (VAR_2, VAR_7,
                    VAR_10, VAR_11);
                break;
            }



            FUNC_3 (VAR_2, VAR_8,
                VAR_4->RetInfo.ObjectType1, VAR_10, 0, 0);
            break;

        case 134:




            VAR_9 = FUNC_2 (VAR_2, VAR_8,
                VAR_0, 0);



            if (FUNC_1 (VAR_9))
            {




                VAR_11 = (UINT32) VAR_8->Asl.Value.Integer;

                if (VAR_10 < VAR_11)
                {
                    FUNC_5 (VAR_2, VAR_7,
                        VAR_10, VAR_11);
                    break;
                }
                else if (VAR_10 > VAR_11)
                {
                    FUNC_4 (VAR_2, VAR_7,
                        VAR_10, VAR_11);
                }



                if (VAR_10 < VAR_4->RetInfo.Count1)
                {
                    VAR_11 = VAR_4->RetInfo.Count1;
                    FUNC_5 (VAR_2, VAR_7,
                        VAR_10, VAR_11);
                    break;
                }

                VAR_10 = VAR_11;
            }



            VAR_8 = VAR_8->Asl.Next;
            FUNC_3 (VAR_2, VAR_8,
                VAR_4->RetInfo.ObjectType1, (VAR_10 - 1), 0, 0);
            break;

        default:
            break;
        }

NextSubpackage:
        VAR_7 = VAR_7->Asl.Next;
    }
}
