
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {int ParseOpcode; int LogicalLineNumber; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_4,
    UINT32 VAR_5,
    UINT32 VAR_6)
{
    char *VAR_7;
    UINT32 VAR_8;
    UINT32 VAR_9;
    UINT32 VAR_10;
    UINT32 VAR_11;




    FUNC_0 (VAR_0,
        "%5.5d [%2d]", VAR_4->Asl.LogicalLineNumber, VAR_5);

    VAR_7 = FUNC_1 (VAR_4->Asl.ParseOpcode);



    VAR_8 = VAR_5 * VAR_3;
    VAR_9 = FUNC_2 (VAR_7);
    VAR_10 = VAR_8 + 1 + VAR_9 + 1 + VAR_6;
    VAR_11 = (VAR_2 + 1) - VAR_10;



    if (VAR_5)
    {
        FUNC_0 (VAR_0, "%*s", VAR_8, " ");
    }



    FUNC_0 (VAR_0, " %s", VAR_7);



    if (VAR_10 > VAR_2)
    {


        FUNC_0 (VAR_0, "\n%*s",
            (VAR_1 - VAR_6), " ");
    }
    else
    {
        FUNC_0 (VAR_0, "%*s", VAR_11, " ");
    }
}
