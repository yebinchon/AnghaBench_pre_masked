
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct cf_setting {int freq; } ;
struct acpi_throttle_softc {int cpu_p_blk_len; int cpu_p_blk; int cpu_handle; int cpu_dev; } ;
typedef int device_t ;
struct TYPE_8__ {int * Pointer; int Length; } ;
struct TYPE_6__ {int PblkLength; int PblkAddress; } ;
struct TYPE_7__ {TYPE_1__ Processor; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct cf_setting*) ;
 int FUNC_6 (struct acpi_throttle_softc*) ;
 int FUNC_7 (struct acpi_throttle_softc*) ;
 int FUNC_8 (int ) ;
 struct acpi_throttle_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_2)
{
 struct acpi_throttle_softc *VAR_3;
 struct cf_setting VAR_4;
 ACPI_BUFFER VAR_5;
 ACPI_OBJECT *VAR_6;
 ACPI_STATUS VAR_7;
 int VAR_8;

 VAR_3 = FUNC_9(VAR_2);
 VAR_3->cpu_dev = VAR_2;
 VAR_3->cpu_handle = FUNC_4(VAR_2);

 VAR_5.Pointer = ((void*)0);
 VAR_5.Length = VAR_0;
 VAR_7 = FUNC_1(VAR_3->cpu_handle, ((void*)0), ((void*)0), &VAR_5);
 if (FUNC_0(VAR_7)) {
  FUNC_11(VAR_2, "attach failed to get Processor obj - %s\n",
      FUNC_2(VAR_7));
  return (VAR_1);
 }
 VAR_6 = (ACPI_OBJECT *)VAR_5.Pointer;
 VAR_3->cpu_p_blk = VAR_6->Processor.PblkAddress;
 VAR_3->cpu_p_blk_len = VAR_6->Processor.PblkLength;
 FUNC_3(VAR_6);


 if (FUNC_10(VAR_2) == 0)
  FUNC_7(VAR_3);


 VAR_8 = FUNC_6(VAR_3);
 if (VAR_8)
  return (VAR_8);





 VAR_4.freq = 10000;
 FUNC_5(VAR_2, &VAR_4);


 FUNC_8(VAR_2);
 return (0);
}
