
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct acpi_throttle_softc {int cpu_p_blk_len; int cpu_dev; int cpu_p_blk; int * cpu_p_cnt; int cpu_p_type; int cpu_handle; } ;
typedef int obj ;
typedef int gas ;
struct TYPE_13__ {int DutyOffset; scalar_t__ DutyWidth; } ;
struct TYPE_12__ {int Length; TYPE_2__* Pointer; } ;
struct TYPE_11__ {int BitWidth; int SpaceId; int Address; } ;
struct TYPE_9__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_10__ {TYPE_1__ Buffer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OBJECT ;
typedef TYPE_3__ ACPI_GENERIC_ADDRESS ;
typedef TYPE_4__ ACPI_BUFFER ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,TYPE_4__*) ;
 TYPE_7__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int *,int *,TYPE_3__*,int **,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_6(struct acpi_throttle_softc *VAR_9)
{
 uint32_t VAR_10;
 ACPI_BUFFER VAR_11;
 ACPI_OBJECT VAR_12;
 ACPI_GENERIC_ADDRESS VAR_13;
 ACPI_STATUS VAR_14;


 if (FUNC_3(VAR_9->cpu_dev) == 0) {
  VAR_5 = VAR_1.DutyOffset;
  VAR_6 = VAR_1.DutyWidth;
 }
 if (VAR_6 == 0 || (VAR_7 & VAR_2) != 0)
  return (VAR_3);


 VAR_10 = VAR_5 + VAR_6 - 1;
 if (VAR_10 > 31) {
  FUNC_4(VAR_9->cpu_dev,
      "CLK_VAL field overflows P_CNT register\n");
  return (VAR_3);
 }
 if (VAR_5 <= 4 && VAR_10 >= 4) {
  FUNC_4(VAR_9->cpu_dev,
      "CLK_VAL field overlaps THT_EN bit\n");
  return (VAR_3);
 }
 VAR_11.Pointer = &VAR_12;
 VAR_11.Length = sizeof(VAR_12);
 VAR_14 = FUNC_1(VAR_9->cpu_handle, "_PTC", ((void*)0), &VAR_11);
 if (FUNC_0(VAR_14)) {
  if (VAR_12.Buffer.Length < sizeof(ACPI_GENERIC_ADDRESS) + 3) {
   FUNC_4(VAR_9->cpu_dev, "_PTC buffer too small\n");
   return (VAR_3);
  }
  FUNC_5(&VAR_13, VAR_12.Buffer.Pointer + 3, sizeof(VAR_13));
  FUNC_2(VAR_9->cpu_dev, &VAR_9->cpu_p_type, &VAR_8,
      &VAR_13, &VAR_9->cpu_p_cnt, 0);
  if (VAR_9->cpu_p_cnt != ((void*)0) && VAR_4) {
   FUNC_4(VAR_9->cpu_dev, "P_CNT from _PTC %#jx\n",
       VAR_13.Address);
  }
 }


 if (VAR_9->cpu_p_cnt == ((void*)0)) {





  if (VAR_9->cpu_p_blk_len < 4)
   return (VAR_3);
  VAR_13.Address = VAR_9->cpu_p_blk;
  VAR_13.SpaceId = VAR_0;
  VAR_13.BitWidth = 32;
  FUNC_2(VAR_9->cpu_dev, &VAR_9->cpu_p_type, &VAR_8,
      &VAR_13, &VAR_9->cpu_p_cnt, 0);
  if (VAR_9->cpu_p_cnt != ((void*)0)) {
   if (VAR_4)
    FUNC_4(VAR_9->cpu_dev,
        "P_CNT from P_BLK %#x\n", VAR_9->cpu_p_blk);
  } else {
   FUNC_4(VAR_9->cpu_dev, "failed to attach P_CNT\n");
   return (VAR_3);
  }
 }
 VAR_8++;

 return (0);
}
