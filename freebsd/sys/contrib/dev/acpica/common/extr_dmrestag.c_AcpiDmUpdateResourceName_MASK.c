
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_4__ {int Integer; } ;
struct TYPE_5__ {TYPE_1__ Name; } ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;


 int * FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char FUNC_1 (int ,int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_NAMESPACE_NODE *VAR_7)
{
    char VAR_8[VAR_1];




    if (VAR_7->Name.Integer != VAR_0)
    {
        return;
    }



    VAR_8[0] = '_';
    VAR_8[1] = VAR_5[VAR_3];
    VAR_8[2] = FUNC_1 ((UINT64) VAR_4, 4);
    VAR_8[3] = FUNC_1 ((UINT64) VAR_4, 0);



    VAR_4++;
    if (VAR_4 >= 256)
    {
        VAR_4 = 0;
        VAR_3++;

        if (VAR_3 > VAR_2)
        {
            VAR_3 = 0;
        }
    }



    VAR_7->Name.Integer = *FUNC_0 (VAR_6, &VAR_8[0]);
}
