
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_5__ {char* NameSeg; scalar_t__ ParseOpcode; TYPE_2__* Next; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,TYPE_2__*,char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (char*,int *,int) ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_6)
{
    ACPI_PARSE_OBJECT *VAR_7;
    UINT32 VAR_8;
    char VAR_9[VAR_0 + 1];
    char VAR_10[VAR_0];




    FUNC_1 (VAR_9, VAR_6->Asl.NameSeg);
    VAR_9[VAR_0] = 0;







    if ((VAR_9[0] != '_') ||
       ((VAR_9[1] != 'L') && (VAR_9[1] != 'E')))
    {
        return;
    }



    VAR_8 = FUNC_3 (&VAR_9[2], ((void*)0), 16);
    if (VAR_8 == VAR_1)
    {
        return;
    }





    FUNC_1 (VAR_10, VAR_9);



    if (VAR_9[1] == 'L')
    {
        VAR_10[1] = 'E';
    }
    else
    {
        VAR_10[1] = 'L';
    }



    VAR_7 = VAR_6->Asl.Next;
    while (VAR_7)
    {





        if ((VAR_7->Asl.ParseOpcode == VAR_4) ||
            (VAR_7->Asl.ParseOpcode == VAR_5))
        {
            if (FUNC_0 (VAR_10, VAR_7->Asl.NameSeg))
            {


                FUNC_2 (VAR_2, VAR_3, VAR_7,
                    VAR_9);
                return;
            }
        }

        VAR_7 = VAR_7->Asl.Next;
    }



    return;
}
