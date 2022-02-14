
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct acpi_px {int dummy; } ;
struct acpi_perf_softc {int px_count; scalar_t__ px_rid; int * perf_status; int perf_sts_type; int dev; int * perf_ctrl; int perf_ctrl_type; TYPE_4__* px_states; int handle; void* info_only; } ;
typedef int device_t ;
struct TYPE_13__ {int core_freq; } ;
struct TYPE_12__ {int * Pointer; void* Length; } ;
struct TYPE_10__ {int Count; TYPE_2__* Elements; } ;
struct TYPE_11__ {TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef TYPE_3__ ACPI_BUFFER ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,char*,int *,TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,struct acpi_perf_softc*) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_5 (int ,TYPE_2__*,int,int *,scalar_t__*,int **,int ) ;
 int FUNC_6 (TYPE_2__*,int,int*) ;
 int FUNC_7 (struct acpi_perf_softc*) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int,int *) ;
 struct acpi_perf_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_13 (int,int ,int) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_9)
{
 struct acpi_perf_softc *VAR_10;
 ACPI_BUFFER VAR_11;
 ACPI_OBJECT *VAR_12, *VAR_13;
 ACPI_STATUS VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 static int VAR_19 = 1;
 uint32_t *VAR_20;


 VAR_16 = VAR_2;
 VAR_10 = FUNC_10(VAR_9);
 VAR_11.Pointer = ((void*)0);
 VAR_11.Length = VAR_0;
 VAR_14 = FUNC_2(VAR_10->handle, "_PSS", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_14))
  return (VAR_2);

 VAR_12 = (ACPI_OBJECT *)VAR_11.Pointer;
 if (!FUNC_1(VAR_12, 1)) {
  FUNC_11(VAR_9, "invalid top level _PSS package\n");
  goto out;
 }
 VAR_10->px_count = VAR_12->Package.Count;

 VAR_10->px_states = FUNC_13(VAR_10->px_count * sizeof(struct acpi_px),
     VAR_4, VAR_5 | VAR_6);






 VAR_15 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_10->px_count; VAR_17++) {
  VAR_13 = &VAR_12->Package.Elements[VAR_17];
  if (!FUNC_1(VAR_13, 6)) {
   if (VAR_19) {
    VAR_19 = 0;
    FUNC_11(VAR_9, "invalid _PSS package\n");
   }
   continue;
  }


  VAR_20 = &VAR_10->px_states[VAR_15].core_freq;
  for (VAR_18 = 0; VAR_18 < 6; VAR_18++, VAR_20++)
   FUNC_6(VAR_13, VAR_18, VAR_20);





  if (VAR_10->px_states[VAR_15].core_freq == 0 ||
      VAR_10->px_states[VAR_15].core_freq == 9999 ||
      VAR_10->px_states[VAR_15].core_freq == 0x9999 ||
      VAR_10->px_states[VAR_15].core_freq >= 0xffff)
   continue;


  if (VAR_15 > 0 &&
      VAR_10->px_states[VAR_15 - 1].core_freq ==
   VAR_10->px_states[VAR_15].core_freq)
   continue;

  VAR_15++;
 }
 VAR_10->px_count = VAR_15;


 if (VAR_15 == 0)
  goto out;
 FUNC_4(VAR_11.Pointer);


 VAR_11.Pointer = ((void*)0);
 VAR_11.Length = VAR_0;
 VAR_14 = FUNC_2(VAR_10->handle, "_PCT", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_14))
  goto out;


 VAR_12 = (ACPI_OBJECT *)VAR_11.Pointer;
 if (!FUNC_1(VAR_12, 2)) {
  FUNC_11(VAR_9, "invalid perf register package\n");
  goto out;
 }

 VAR_16 = FUNC_5(VAR_10->dev, VAR_12, 0, &VAR_10->perf_ctrl_type, &VAR_10->px_rid,
     &VAR_10->perf_ctrl, 0);
 if (VAR_16) {




  if (VAR_16 == VAR_3) {
   VAR_10->info_only = VAR_7;
   VAR_16 = 0;
  } else
   FUNC_11(VAR_9, "failed in PERF_CTL attach\n");
  goto out;
 }
 VAR_10->px_rid++;

 VAR_16 = FUNC_5(VAR_10->dev, VAR_12, 1, &VAR_10->perf_sts_type, &VAR_10->px_rid,
     &VAR_10->perf_status, 0);
 if (VAR_16) {
  if (VAR_16 == VAR_3) {
   VAR_10->info_only = VAR_7;
   VAR_16 = 0;
  } else
   FUNC_11(VAR_9, "failed in PERF_STATUS attach\n");
  goto out;
 }
 VAR_10->px_rid++;


 FUNC_7(VAR_10);
 FUNC_3(VAR_10->handle, VAR_1,
     VAR_8, VAR_10);
 VAR_16 = 0;

out:
 if (VAR_16) {
  if (VAR_10->px_states) {
   FUNC_12(VAR_10->px_states, VAR_4);
   VAR_10->px_states = ((void*)0);
  }
  if (VAR_10->perf_ctrl) {
   FUNC_9(VAR_10->dev, VAR_10->perf_ctrl_type, 0,
       VAR_10->perf_ctrl);
   FUNC_8(VAR_10->dev, VAR_10->perf_ctrl_type, 0);
   VAR_10->perf_ctrl = ((void*)0);
  }
  if (VAR_10->perf_status) {
   FUNC_9(VAR_10->dev, VAR_10->perf_sts_type, 1,
       VAR_10->perf_status);
   FUNC_8(VAR_10->dev, VAR_10->perf_sts_type, 1);
   VAR_10->perf_status = ((void*)0);
  }
  VAR_10->px_rid = 0;
  VAR_10->px_count = 0;
 }
 if (VAR_11.Pointer)
  FUNC_4(VAR_11.Pointer);
 return (VAR_16);
}
