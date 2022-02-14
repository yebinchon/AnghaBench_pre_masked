
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int NameSeg; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static void
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_0,
    char *VAR_1)
{
    char *VAR_2;
    char VAR_3[4];


    if (!VAR_1)
    {
        return;
    }



    VAR_2 = FUNC_4 (VAR_1, '.');
    if (VAR_2)
    {


        VAR_2++;
        FUNC_3 (VAR_2, VAR_3);
    }
    else
    {



        while (FUNC_2 (*VAR_1) ||
               FUNC_1 (*VAR_1))
        {
            VAR_1++;
        }



        FUNC_3 (VAR_1, VAR_3);
    }

    FUNC_0 (VAR_0->Asl.NameSeg, VAR_3);
}
