
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct madt_table_data {TYPE_2__* dist; int * dev; scalar_t__ count; int * parent; } ;
typedef int driver_t ;
typedef int * device_t ;
struct TYPE_7__ {int Length; } ;
struct TYPE_9__ {TYPE_1__ Header; } ;
struct TYPE_8__ {scalar_t__ Version; int BaseAddress; } ;
typedef TYPE_3__ ACPI_TABLE_MADT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,scalar_t__,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int *,int ,int ,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char*,int ,struct madt_table_data*) ;
 int FUNC_7 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_8(driver_t *VAR_7, device_t VAR_8)
{
 struct madt_table_data VAR_9;
 ACPI_TABLE_MADT *VAR_10;
 vm_paddr_t VAR_11;
 device_t VAR_12;

 VAR_11 = FUNC_2(VAR_1);
 if (VAR_11 == 0)
  return;

 VAR_10 = FUNC_3(VAR_11, VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_7(VAR_8, "gic: Unable to map the MADT\n");
  return;
 }

 VAR_9.parent = VAR_8;
 VAR_9.dist = ((void*)0);
 VAR_9.count = 0;

 FUNC_6(VAR_10 + 1, (char *)VAR_10 + VAR_10->Header.Length,
     VAR_5, &VAR_9);
 if (VAR_9.dist == ((void*)0)) {
  FUNC_7(VAR_8,
      "No gic interrupt or distributor table\n");
  goto out;
 }

 if (VAR_9.dist->Version != VAR_0)
  goto out;

 VAR_12 = FUNC_0(VAR_8, VAR_2 + VAR_3,
     "gic", -1);
 if (VAR_12 == ((void*)0)) {
  FUNC_7(VAR_8, "add gic child failed\n");
  goto out;
 }


 FUNC_1(VAR_8, VAR_12, VAR_4, 0,
     VAR_9.dist->BaseAddress, 128 * 1024);

 VAR_9.dev = VAR_12;
 FUNC_6(VAR_10 + 1, (char *)VAR_10 + VAR_10->Header.Length,
     VAR_6, &VAR_9);

 FUNC_4(VAR_12, (void *)(uintptr_t)VAR_9.dist->Version);

out:
 FUNC_5(VAR_10);
}
