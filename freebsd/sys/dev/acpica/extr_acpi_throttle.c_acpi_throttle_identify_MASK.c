
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int driver_t ;
typedef int device_t ;
struct TYPE_10__ {scalar_t__ DutyWidth; } ;
struct TYPE_9__ {int * Pointer; int Length; } ;
struct TYPE_7__ {int PblkLength; scalar_t__ PblkAddress; } ;
struct TYPE_8__ {TYPE_1__ Processor; } ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int * ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,char*,int *,TYPE_3__*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (int ,int ,char*,int) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void
FUNC_9(driver_t *VAR_3, device_t VAR_4)
{
 ACPI_BUFFER VAR_5;
 ACPI_HANDLE VAR_6;
 ACPI_OBJECT *VAR_7;


 if (FUNC_7(VAR_4, "acpi_throttle", -1))
  return;


 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 == ((void*)0))
  return;
 if (VAR_2.DutyWidth == 0 ||
     FUNC_6(VAR_4) != VAR_1)
  return;





 VAR_5.Pointer = ((void*)0);
 VAR_5.Length = VAR_0;
 if (FUNC_0(FUNC_2(VAR_6, ((void*)0), ((void*)0), &VAR_5)))
  return;
 VAR_7 = (ACPI_OBJECT *)VAR_5.Pointer;
 if ((VAR_7->Processor.PblkAddress && VAR_7->Processor.PblkLength >= 4) ||
     FUNC_1(FUNC_2(VAR_6, "_PTC", ((void*)0), ((void*)0)))) {
  if (FUNC_4(VAR_4, 0, "acpi_throttle", -1) == ((void*)0))
   FUNC_8(VAR_4, "add throttle child failed\n");
 }
 FUNC_3(VAR_7);
}
