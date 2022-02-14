
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {int * Filename; int Column; int LogicalByteOffset; int LogicalLineNumber; int LineNumber; } ;
struct TYPE_5__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int *,char*) ;

void
FUNC_1 (
    UINT8 VAR_0,
    UINT16 VAR_1,
    ACPI_PARSE_OBJECT *VAR_2,
    char *VAR_3)
{
    if (VAR_2)
    {
        FUNC_0 (VAR_0, VAR_1, VAR_2->Asl.LineNumber,
            VAR_2->Asl.LogicalLineNumber,
            VAR_2->Asl.LogicalByteOffset,
            VAR_2->Asl.Column,
            VAR_2->Asl.Filename, VAR_3);
    }
    else
    {
        FUNC_0 (VAR_0, VAR_1, 0,
            0, 0, 0, ((void*)0), VAR_3);
    }
}
