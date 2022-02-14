
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct acpi_cpu_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_8__ {int * Pointer; int Length; } ;
struct TYPE_6__ {int ProcId; } ;
struct TYPE_7__ {scalar_t__ Type; TYPE_1__ Processor; } ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,char**,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int *,int *,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,int*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int*,int*) ;
 int FUNC_10 (int ,void*) ;
 int VAR_8 ;
 int ** VAR_9 ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int ** FUNC_17 (int,int ,int) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_18(device_t VAR_11)
{
    static char *VAR_12[] = { 128, ((void*)0) };
    int VAR_13, VAR_14;
    ACPI_BUFFER VAR_15;
    ACPI_HANDLE VAR_16;
    ACPI_OBJECT *VAR_17;
    ACPI_STATUS VAR_18;
    ACPI_OBJECT_TYPE VAR_19;

    if (FUNC_6("cpu") || VAR_7)
 return (VAR_3);
    VAR_19 = FUNC_8(VAR_11);
    if (VAR_19 != VAR_2 && VAR_19 != VAR_1)
 return (VAR_3);
    if (VAR_19 == VAR_1 &&
 FUNC_1(FUNC_11(VAR_11), VAR_11, VAR_12, ((void*)0)) >= 0)
 return (VAR_3);

    VAR_16 = FUNC_7(VAR_11);
    if (VAR_9 == ((void*)0))
 VAR_9 = FUNC_17(sizeof(struct acpi_cpu_softc *) *
     (VAR_10 + 1), VAR_4 , VAR_5 | VAR_6);

    if (VAR_19 == VAR_2) {

 VAR_15.Pointer = ((void*)0);
 VAR_15.Length = VAR_0;
 VAR_18 = FUNC_2(VAR_16, ((void*)0), ((void*)0), &VAR_15);
 if (FUNC_0(VAR_18)) {
     FUNC_13(VAR_11, "probe failed to get Processor obj - %s\n",
  FUNC_3(VAR_18));
     return (VAR_3);
 }
 VAR_17 = (ACPI_OBJECT *)VAR_15.Pointer;
 if (VAR_17->Type != VAR_2) {
     FUNC_13(VAR_11, "Processor object has bad type %d\n",
  VAR_17->Type);
     FUNC_4(VAR_17);
     return (VAR_3);
 }






 VAR_13 = VAR_17->Processor.ProcId;
 FUNC_4(VAR_17);
    } else {
 VAR_18 = FUNC_5(VAR_16, "_UID", &VAR_13);
 if (FUNC_0(VAR_18)) {
     FUNC_13(VAR_11, "Device object has bad value - %s\n",
  FUNC_3(VAR_18));
     return (VAR_3);
 }
    }
    if (FUNC_9(VAR_11, &VAR_13, &VAR_14) != 0)
 return (VAR_3);





    if (VAR_9[VAR_14] != ((void*)0))
 return (VAR_3);


    VAR_9[VAR_14] = (void *)1;
    FUNC_10(VAR_11, (void*)(intptr_t)VAR_14);
    FUNC_16(VAR_11, "ACPI CPU");

    if (!VAR_8 && FUNC_12(VAR_11) != 0) {
     FUNC_14(VAR_11);
     FUNC_15(VAR_11);
    }

    return (0);
}
