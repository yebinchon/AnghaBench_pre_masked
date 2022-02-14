
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int LogicalLineNumber; int LogicalByteOffset; int LineNumber; int EndLogicalLine; int EndLine; } ;
struct TYPE_6__ {TYPE_1__ Asl; } ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;



__attribute__((used)) static void
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_0,
    ACPI_PARSE_OBJECT *VAR_1)
{

    VAR_0->Asl.EndLine = VAR_1->Asl.EndLine;
    VAR_0->Asl.EndLogicalLine = VAR_1->Asl.EndLogicalLine;
    VAR_0->Asl.LineNumber = VAR_1->Asl.LineNumber;
    VAR_0->Asl.LogicalByteOffset = VAR_1->Asl.LogicalByteOffset;
    VAR_0->Asl.LogicalLineNumber = VAR_1->Asl.LogicalLineNumber;
}
