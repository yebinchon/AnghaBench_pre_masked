
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UINT32 ;
struct TYPE_4__ {char* Name; char* Value; void* StringLength; void* Column; void* NameColumn; void* ByteOffset; void* Line; } ;
typedef TYPE_1__ DT_FIELD ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_4 () ;
 char* FUNC_5 (void*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*,void*) ;
 scalar_t__ FUNC_8 (char*,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9 (
    char *VAR_5,
    UINT32 VAR_6,
    UINT32 VAR_7)
{
    char *VAR_8;
    char *VAR_9;
    char *VAR_10;
    char *VAR_11;
    char *VAR_12;
    char *VAR_13;
    char *VAR_14;
    UINT32 VAR_15;
    DT_FIELD *VAR_16;
    UINT32 VAR_17;
    UINT32 VAR_18;
    BOOLEAN VAR_19 = VAR_3;


    if (!VAR_5)
    {
        return (VAR_2);
    }



    if (FUNC_8 (VAR_5, VAR_0))
    {
        return (VAR_1);
    }

    VAR_14 = FUNC_6 (VAR_5, ':');
    if (!VAR_14)
    {
        return (VAR_2);
    }

    VAR_8 = VAR_5;
    VAR_9 = VAR_14;

    while (VAR_8 < VAR_14)
    {
        if (*VAR_8 == '[')
        {


            while (VAR_8 < VAR_14 && *VAR_8 != ']')
            {
                VAR_8++;
            }
        }
        else if (*VAR_8 != ' ')
        {
            break;
        }

        VAR_8++;
    }





    VAR_17 = FUNC_1 (VAR_14, VAR_5) + 3;
    VAR_18 = FUNC_1 (VAR_8, VAR_5) + 1;

    VAR_15 = FUNC_1 (VAR_9, VAR_8);

    VAR_10 = FUNC_5 (VAR_15 + 1);
    FUNC_7 (VAR_10, VAR_8, VAR_15);
    VAR_12 = FUNC_3 (VAR_10);
    FUNC_0 (VAR_10);

    VAR_8 = VAR_9 = (VAR_14 + 1);
    while (*VAR_9)
    {


        if (*VAR_9 == '"')
        {
            VAR_9++;



            if (*VAR_9 == '"')
            {
                VAR_19 = VAR_4;
            }
            while (*VAR_9 && (*VAR_9 != '"'))
            {
                VAR_9++;
            }

            VAR_9++;
            break;
        }
        if (*VAR_9 == '[')
        {
            VAR_9--;
            break;
        }

        VAR_9++;
    }

    VAR_15 = FUNC_1 (VAR_9, VAR_8);
    VAR_11 = FUNC_5 (VAR_15 + 1);

    FUNC_7 (VAR_11, VAR_8, VAR_15);
    VAR_13 = FUNC_3 (VAR_11);
    FUNC_0 (VAR_11);



    if ((VAR_13 && *VAR_13) || VAR_19)
    {
        VAR_16 = FUNC_4 ();
        VAR_16->Name = VAR_12;
        VAR_16->Value = VAR_13;
        VAR_16->Line = VAR_6;
        VAR_16->ByteOffset = VAR_7;
        VAR_16->NameColumn = VAR_18;
        VAR_16->Column = VAR_17;
        VAR_16->StringLength = VAR_15;

        FUNC_2 (VAR_16);
    }


    return (VAR_2);
}
