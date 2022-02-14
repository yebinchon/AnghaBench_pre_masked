
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * Filename; int Column; int LogicalByteOffset; int LogicalLineNumber; int LineNumber; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,char*,char*) ;

void
FUNC_4 (
    ACPI_PARSE_OBJECT *VAR_3,
    ACPI_STATUS VAR_4,
    char *VAR_5,
    BOOLEAN VAR_6)
{

    FUNC_3 (VAR_2, "%s %s", FUNC_0 (VAR_4), VAR_5);

    if (VAR_3)
    {
        FUNC_2 (VAR_0, VAR_1,
            VAR_3->Asl.LineNumber,
            VAR_3->Asl.LogicalLineNumber,
            VAR_3->Asl.LogicalByteOffset,
            VAR_3->Asl.Column,
            VAR_3->Asl.Filename, VAR_2);
    }
    else
    {
        FUNC_2 (VAR_0, VAR_1,
            0, 0, 0, 0, ((void*)0), VAR_2);
    }

    if (VAR_6)
    {
        FUNC_1 ();
    }
}
