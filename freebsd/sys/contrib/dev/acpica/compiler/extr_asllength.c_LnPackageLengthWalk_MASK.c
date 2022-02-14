
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_10__ {scalar_t__ ParseOpcode; scalar_t__ AmlSubtreeLength; scalar_t__ AmlPkgLenBytes; scalar_t__ AmlOpcodeLength; scalar_t__ AmlLength; TYPE_2__* Parent; } ;
struct TYPE_11__ {TYPE_3__ Asl; } ;
struct TYPE_8__ {int AmlSubtreeLength; } ;
struct TYPE_9__ {TYPE_1__ Asl; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;

ACPI_STATUS
FUNC_2 (
    ACPI_PARSE_OBJECT *VAR_2,
    UINT32 VAR_3,
    void *VAR_4)
{



    FUNC_0 (VAR_2);



    if ((VAR_2->Asl.Parent) &&
        (VAR_2->Asl.ParseOpcode != VAR_1))
    {
        VAR_2->Asl.Parent->Asl.AmlSubtreeLength += (
            VAR_2->Asl.AmlLength +
            VAR_2->Asl.AmlOpcodeLength +
            VAR_2->Asl.AmlPkgLenBytes +
            VAR_2->Asl.AmlSubtreeLength +
            FUNC_1 (VAR_2)
        );
    }
    return (VAR_0);
}
