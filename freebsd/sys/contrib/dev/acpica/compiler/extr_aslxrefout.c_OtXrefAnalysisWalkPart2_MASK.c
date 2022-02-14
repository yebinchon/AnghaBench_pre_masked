
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_9__ {scalar_t__ Node; scalar_t__ ParseOpcode; int ExternalName; int LogicalLineNumber; TYPE_5__* Parent; } ;
struct TYPE_11__ {TYPE_3__ Asl; } ;
struct TYPE_10__ {int ThisMethodInvocations; TYPE_2__* MethodOp; } ;
struct TYPE_7__ {scalar_t__ Node; } ;
struct TYPE_8__ {TYPE_1__ Asl; } ;
typedef TYPE_4__ ASL_XREF_INFO ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ,char*,int ,char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_6,
    UINT32 VAR_7,
    void *VAR_8)
{
    ASL_XREF_INFO *VAR_9 = (ASL_XREF_INFO *) VAR_8;
    ACPI_PARSE_OBJECT *VAR_10;
    char *VAR_11;




    if (!VAR_6->Asl.Node ||
        (VAR_6->Asl.ParseOpcode != VAR_4))
    {
        return (VAR_1);
    }



    if (VAR_6->Asl.Node != VAR_9->MethodOp->Asl.Node)
    {
        return (VAR_0);
    }



    VAR_10 = VAR_6->Asl.Parent;
    while (VAR_10 &&
        (VAR_10->Asl.ParseOpcode != VAR_3))
    {
        VAR_10 = VAR_10->Asl.Parent;
    }



    if (!VAR_10)
    {
        return (VAR_1);
    }

    VAR_11 = FUNC_1 (
        VAR_10->Asl.Node, VAR_5);

    FUNC_2 (VAR_2,
        "[%5u]     %-40s Invocation path: %s\n",
        VAR_6->Asl.LogicalLineNumber, VAR_11,
        VAR_6->Asl.ExternalName);

    FUNC_0 (VAR_11);
    VAR_9->ThisMethodInvocations++;
    return (VAR_1);
}
