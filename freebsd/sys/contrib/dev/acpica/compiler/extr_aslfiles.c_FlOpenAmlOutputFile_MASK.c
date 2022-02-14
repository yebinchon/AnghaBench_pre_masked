
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* Filename; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *,int *) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (size_t,char*,char*) ;

ACPI_STATUS
FUNC_3 (
    char *VAR_9)
{
    char *VAR_10;




    VAR_10 = VAR_6[VAR_3].Filename;
    if (!VAR_10)
    {

        if (!VAR_5)
        {
            VAR_10 = FUNC_1 (VAR_9, VAR_7);
        }
        else
        {
            VAR_10 = FUNC_1 (VAR_9, VAR_8);
        }
        if (!VAR_10)
        {
            FUNC_0 (VAR_2, VAR_4,
                0, 0, 0, 0, ((void*)0), ((void*)0));
            return (VAR_0);
        }

        VAR_6[VAR_3].Filename = VAR_10;
    }



    FUNC_2 (VAR_3, VAR_10, "w+b");
    return (VAR_1);
}
