
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {int BitOffset; int BitLength; } ;
struct TYPE_8__ {TYPE_1__ Tag; } ;
struct TYPE_7__ {char* ExternalName; TYPE_3__ Value; int CompileFlags; } ;
struct TYPE_9__ {TYPE_2__ Asl; } ;
typedef TYPE_4__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;

void
FUNC_0 (
    ACPI_PARSE_OBJECT *VAR_1,
    char *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4,
    UINT32 VAR_5)
{

    VAR_1->Asl.ExternalName = VAR_2;
    VAR_1->Asl.CompileFlags |= VAR_0;

    VAR_1->Asl.Value.Tag.BitOffset = (VAR_3 * 8) + VAR_4;
    VAR_1->Asl.Value.Tag.BitLength = VAR_5;
}
