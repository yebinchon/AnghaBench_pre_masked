
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * Elements; scalar_t__ Count; } ;
struct TYPE_10__ {int Value; } ;
struct TYPE_9__ {int * Pointer; int Length; } ;
union acpi_object {TYPE_3__ Package; void* Type; TYPE_2__ Integer; TYPE_1__ Buffer; } ;
typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_13__ {int Length; int * Pointer; } ;
struct TYPE_12__ {int Count; union acpi_object* Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_OBJECT_LIST ;
typedef union acpi_object ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_5__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int ,char*) ;

ACPI_STATUS
FUNC_4(ACPI_HANDLE VAR_6, uint8_t *VAR_7, int VAR_8,
    uint64_t VAR_9, union acpi_object *VAR_10, ACPI_BUFFER *VAR_11)
{
    ACPI_OBJECT VAR_12[4];
    ACPI_OBJECT_LIST VAR_13;
    ACPI_BUFFER VAR_14;
    ACPI_STATUS VAR_15;

    if (VAR_11 == ((void*)0))
 return (VAR_5);

    VAR_12[0].Type = VAR_1;
    VAR_12[0].Buffer.Length = VAR_4;
    VAR_12[0].Buffer.Pointer = VAR_7;
    VAR_12[1].Type = VAR_2;
    VAR_12[1].Integer.Value = VAR_8;
    VAR_12[2].Type = VAR_2;
    VAR_12[2].Integer.Value = VAR_9;
    if (VAR_10) {
 VAR_12[3] = *VAR_10;
    } else {
 VAR_12[3].Type = VAR_3;
 VAR_12[3].Package.Count = 0;
 VAR_12[3].Package.Elements = ((void*)0);
    }

    VAR_13.Pointer = VAR_12;
    VAR_13.Count = 4;
    VAR_14.Pointer = ((void*)0);
    VAR_14.Length = VAR_0;
    VAR_15 = FUNC_2(VAR_6, "_DSM", &VAR_13, &VAR_14);
    if (FUNC_0(VAR_15))
 return (VAR_15);

    FUNC_3(FUNC_1(VAR_15), ("Unexpected status"));

    *VAR_11 = VAR_14;
    return (VAR_15);
}
