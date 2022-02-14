
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* Path; int Flags; struct TYPE_3__* Next; } ;
typedef TYPE_1__ ACPI_EXTERNAL_LIST ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void
FUNC_3 (
    char *VAR_4)
{
    ACPI_EXTERNAL_LIST *VAR_5 = VAR_2;
    char *VAR_6;
    char *VAR_7;


    if (!VAR_4)
    {
        return;
    }



    VAR_7 = VAR_4;
    if ((*VAR_7 == VAR_1) && VAR_7[1])
    {
        VAR_7++;
    }

    while (VAR_5)
    {
        VAR_6 = VAR_5->Path;
        if (VAR_6)
        {


            if ((*VAR_6 == VAR_1) &&
                VAR_6[1])
            {
                VAR_6++;
            }

            if (!FUNC_2 (VAR_6, VAR_7) &&
                (VAR_5->Flags & VAR_0))
            {
                FUNC_1 ("%s", VAR_3);
                FUNC_0 (VAR_4);

                return;
            }
        }
        VAR_5 = VAR_5->Next;
    }
}
