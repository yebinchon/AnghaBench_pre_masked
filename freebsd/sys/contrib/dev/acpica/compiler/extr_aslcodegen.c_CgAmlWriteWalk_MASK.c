
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_10__ {scalar_t__ Integer; } ;
struct TYPE_13__ {int ParseOpcode; int CompileFlags; int EndLogicalLine; int LogicalLineNumber; int EndLine; int LineNumber; int Column; int FinalAmlLength; int AcpiBtype; int Next; int Child; TYPE_3__* Parent; int AmlSubtreeLength; int AmlLength; int AmlPkgLenBytes; int AmlOpcodeLength; int AmlOpcode; TYPE_1__ Value; } ;
struct TYPE_14__ {TYPE_4__ Asl; } ;
struct TYPE_11__ {int AmlSubtreeLength; } ;
struct TYPE_12__ {TYPE_2__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int ,char*,...) ;




 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_PARSE_OBJECT *VAR_5,
    UINT32 VAR_6,
    void *VAR_7)
{



    FUNC_0 (VAR_5);

    if (!VAR_4)
    {
        return (VAR_0);
    }



    if (!VAR_6)
    {
        FUNC_1 (VAR_3,
            "\nFinal parse tree used for AML output:\n");
        FUNC_1 (VAR_3, VAR_2);
    }



    switch (VAR_5->Asl.ParseOpcode)
    {
    case 130:
    case 129:
    case 131:
    case 128:

        FUNC_4 (VAR_5, VAR_6);
        break;

    default:

        FUNC_3 (VAR_5, VAR_6);
        break;
    }

    FUNC_1 (VAR_3, VAR_1,
                 (UINT32) VAR_5->Asl.Value.Integer,
                 VAR_5->Asl.ParseOpcode,
                 VAR_5->Asl.AmlOpcode,
                 VAR_5->Asl.AmlOpcodeLength,
                 VAR_5->Asl.AmlPkgLenBytes,
                 VAR_5->Asl.AmlLength,
                 VAR_5->Asl.AmlSubtreeLength,
                 VAR_5->Asl.Parent ? VAR_5->Asl.Parent->Asl.AmlSubtreeLength : 0,
                 VAR_5,
                 VAR_5->Asl.Parent,
                 VAR_5->Asl.Child,
                 VAR_5->Asl.Next,
                 VAR_5->Asl.CompileFlags,
                 VAR_5->Asl.AcpiBtype,
                 VAR_5->Asl.FinalAmlLength,
                 VAR_5->Asl.Column,
                 VAR_5->Asl.LineNumber,
                 VAR_5->Asl.EndLine,
                 VAR_5->Asl.LogicalLineNumber,
                 VAR_5->Asl.EndLogicalLine);

    FUNC_2 (VAR_5->Asl.CompileFlags, VAR_3);
    FUNC_1 (VAR_3, "\n");
    return (VAR_0);
}
