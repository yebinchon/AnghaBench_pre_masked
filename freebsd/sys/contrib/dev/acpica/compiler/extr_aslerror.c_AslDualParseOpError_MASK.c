
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_5__ {int Filename; int Column; int LogicalByteOffset; int LogicalLineNumber; int LineNumber; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef int ASL_ERROR_MSG ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int **,int ,int ,int ,int ,int ,int ,int ,char*,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,char*,int *,int *) ;

void
FUNC_3 (
    UINT8 VAR_0,
    UINT16 VAR_1,
    ACPI_PARSE_OBJECT *VAR_2,
    char *VAR_3,
    UINT16 VAR_4,
    ACPI_PARSE_OBJECT *VAR_5,
    char *VAR_6)
{
    ASL_ERROR_MSG *VAR_7 = ((void*)0);




    if (FUNC_1 (VAR_0, VAR_1) || !VAR_2)
    {
        return;
    }

    if (VAR_5)
    {
        FUNC_0 (&VAR_7, VAR_0, VAR_4, VAR_5->Asl.LineNumber,
            VAR_5->Asl.LogicalLineNumber, VAR_5->Asl.LogicalByteOffset,
            VAR_5->Asl.Column, VAR_5->Asl.Filename, VAR_6,
            ((void*)0), ((void*)0));
    }

    FUNC_2 (VAR_0, VAR_1, VAR_2->Asl.LineNumber,
        VAR_2->Asl.LogicalLineNumber, VAR_2->Asl.LogicalByteOffset,
        VAR_2->Asl.Column, VAR_2->Asl.Filename, VAR_3,
        ((void*)0), VAR_7);
}
