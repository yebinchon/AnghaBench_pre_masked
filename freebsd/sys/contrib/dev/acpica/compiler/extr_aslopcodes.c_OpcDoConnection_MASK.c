
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_11__ {int * Buffer; int Integer; } ;
struct TYPE_12__ {int AmlOpcodeLength; scalar_t__ AmlOpcode; int CompileFlags; TYPE_1__ Value; int AmlLength; int ParseOpcode; TYPE_5__* Next; TYPE_5__* Child; } ;
struct TYPE_15__ {TYPE_2__ Asl; } ;
struct TYPE_14__ {scalar_t__ CurrentByteOffset; TYPE_5__* DescriptorTypeOp; } ;
struct TYPE_13__ {int BufferLength; } ;
typedef TYPE_3__ ASL_RESOURCE_NODE ;
typedef TYPE_4__ ASL_RESOURCE_INFO ;
typedef TYPE_5__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_9)
{
    ASL_RESOURCE_NODE *VAR_10;
    ACPI_PARSE_OBJECT *VAR_11;
    ACPI_PARSE_OBJECT *VAR_12;
    ACPI_PARSE_OBJECT *VAR_13;
    ASL_RESOURCE_INFO VAR_14;
    UINT8 VAR_15;


    VAR_9->Asl.AmlOpcodeLength = 1;

    if (VAR_9->Asl.Child->Asl.AmlOpcode == VAR_2)
    {
        return;
    }

    VAR_11 = VAR_9->Asl.Child;
    VAR_12 = VAR_11->Asl.Child;
    VAR_13 = VAR_12->Asl.Next;

    VAR_14.DescriptorTypeOp = VAR_13->Asl.Next;
    VAR_14.CurrentByteOffset = 0;
    VAR_15 = VAR_0;
    VAR_10 = FUNC_1 (&VAR_14, &VAR_15);
    if (!VAR_10)
    {
        return;
    }
    VAR_11->Asl.ParseOpcode = VAR_6;
    VAR_11->Asl.AmlOpcode = VAR_1;
    VAR_11->Asl.CompileFlags = VAR_4 | VAR_5;
    FUNC_2 (VAR_11);

    VAR_12->Asl.ParseOpcode = VAR_7;
    VAR_12->Asl.Value.Integer = VAR_10->BufferLength;
    (void) FUNC_0 (VAR_12);
    FUNC_2 (VAR_12);

    VAR_13->Asl.ParseOpcode = VAR_8;
    VAR_13->Asl.AmlOpcode = VAR_3;
    VAR_13->Asl.AmlOpcodeLength = 0;
    VAR_13->Asl.AmlLength = VAR_10->BufferLength;
    VAR_13->Asl.Value.Buffer = (UINT8 *) VAR_10;
    FUNC_2 (VAR_13);
}
