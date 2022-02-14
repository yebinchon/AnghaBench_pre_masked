
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_9__ {int Value; } ;
typedef TYPE_1__ DT_FIELD ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;






 int FUNC_1 (int*,int ,TYPE_1__*,int ) ;
 int FUNC_2 (int*,TYPE_1__*,int ,int) ;
 int FUNC_3 (int*,TYPE_1__*,int ) ;
 int FUNC_4 (int*,TYPE_1__*,int ) ;
 int FUNC_5 (int*,TYPE_1__*,int ) ;
 int FUNC_6 (int ,TYPE_1__*,char*) ;

void
FUNC_7 (
    UINT8 *VAR_1,
    DT_FIELD *VAR_2,
    UINT32 VAR_3,
    UINT8 VAR_4,
    UINT8 VAR_5)
{
    ACPI_STATUS VAR_6;


    switch (VAR_4)
    {
    case 131:

        FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_5);
        break;

    case 130:

        FUNC_3 (VAR_1, VAR_2, VAR_3);
        break;

    case 128:

        VAR_6 = FUNC_5 (VAR_1, VAR_2, VAR_3);
        if (FUNC_0 (VAR_6))
        {
            break;
        }



    case 133:

        FUNC_1 (VAR_1, VAR_2->Value, VAR_2, VAR_3);
        break;

    case 129:

        FUNC_4 (VAR_1, VAR_2, VAR_3);
        break;

    case 132:

        break;

    default:

        FUNC_6 (VAR_0, VAR_2, "Invalid field type");
        break;
    }
}
