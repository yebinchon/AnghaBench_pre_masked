
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {TYPE_4__* Pointer; int Length; } ;
struct TYPE_10__ {int Length; int * Pointer; } ;
struct TYPE_9__ {int Value; } ;
struct TYPE_12__ {TYPE_2__ Buffer; void* Type; TYPE_1__ Integer; } ;
struct TYPE_11__ {int Count; TYPE_4__* Pointer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OBJECT_LIST ;
typedef TYPE_4__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_5__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,TYPE_3__*,TYPE_5__*,void*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int*,int) ;

ACPI_STATUS
FUNC_4(ACPI_HANDLE VAR_5, uint8_t *VAR_6, int VAR_7, int VAR_8,
    uint32_t *VAR_9, uint32_t *VAR_10, bool VAR_11)
{
 ACPI_OBJECT VAR_12[4], *VAR_13;
 ACPI_OBJECT_LIST VAR_14;
 ACPI_BUFFER VAR_15;
 ACPI_STATUS VAR_16;

 VAR_14.Pointer = VAR_12;
 VAR_14.Count = 4;
 VAR_12[0].Type = VAR_1;
 VAR_12[0].Buffer.Length = VAR_3;
 VAR_12[0].Buffer.Pointer = VAR_6;
 VAR_12[1].Type = VAR_2;
 VAR_12[1].Integer.Value = VAR_7;
 VAR_12[2].Type = VAR_2;
 VAR_12[2].Integer.Value = VAR_8;
 VAR_12[3].Type = VAR_1;
 VAR_12[3].Buffer.Length = VAR_8 * sizeof(*VAR_9);
 VAR_12[3].Buffer.Pointer = (uint8_t *)VAR_9;
 VAR_9[0] = VAR_11 ? 1 : 0;
 VAR_15.Pointer = ((void*)0);
 VAR_15.Length = VAR_0;
 VAR_16 = FUNC_1(VAR_5, "_OSC", &VAR_14, &VAR_15,
     VAR_1);
 if (FUNC_0(VAR_16))
  return (VAR_16);
 if (VAR_10 != ((void*)0)) {
  VAR_13 = VAR_15.Pointer;
  if (VAR_13->Buffer.Length != VAR_8 * sizeof(*VAR_10)) {
   FUNC_2(VAR_15.Pointer);
   return (VAR_4);
  }
  FUNC_3(VAR_13->Buffer.Pointer, VAR_10, VAR_13->Buffer.Length);
 }
 FUNC_2(VAR_15.Pointer);
 return (VAR_16);
}
