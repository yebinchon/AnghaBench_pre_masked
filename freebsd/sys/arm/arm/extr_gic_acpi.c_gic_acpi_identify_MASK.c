
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
struct madt_table_data {TYPE_2__* dist; TYPE_4__** intr; int * parent; } ;
typedef int madt_data ;
typedef int driver_t ;
typedef int * device_t ;
struct TYPE_11__ {scalar_t__ BaseAddress; } ;
struct TYPE_8__ {int Length; } ;
struct TYPE_10__ {TYPE_1__ Header; } ;
struct TYPE_9__ {int Version; scalar_t__ BaseAddress; } ;
typedef TYPE_3__ ACPI_TABLE_MADT ;
typedef TYPE_4__ ACPI_MADT_GENERIC_INTERRUPT ;





 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *,int ,int,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,char*,int ,struct madt_table_data*) ;
 int FUNC_7 (struct madt_table_data*,int) ;
 int FUNC_8 (int *,char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(driver_t *VAR_6, device_t VAR_7)
{
 struct madt_table_data VAR_8;
 ACPI_MADT_GENERIC_INTERRUPT *VAR_9;
 ACPI_TABLE_MADT *VAR_10;
 vm_paddr_t VAR_11;
 device_t VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_0);
 if (VAR_11 == 0)
  return;

 VAR_10 = FUNC_3(VAR_11, VAR_0);
 if (VAR_10 == ((void*)0)) {
  FUNC_8(VAR_7, "gic: Unable to map the MADT\n");
  return;
 }

 FUNC_7(&VAR_8, sizeof(VAR_8));
 VAR_8.parent = VAR_7;
 VAR_8.dist = ((void*)0);

 FUNC_6(VAR_10 + 1, (char *)VAR_10 + VAR_10->Header.Length,
     VAR_5, &VAR_8);


 switch (VAR_8.dist->Version) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  goto out;
 }

 VAR_9 = ((void*)0);
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
  if (VAR_8.intr[VAR_13] != ((void*)0)) {
   if (VAR_9 == ((void*)0)) {
    VAR_9 = VAR_8.intr[VAR_13];
   } else if (VAR_9->BaseAddress !=
       VAR_8.intr[VAR_13]->BaseAddress) {
    FUNC_8(VAR_7,
"gic: Not all CPU interfaces at the same address, this may fail\n");
   }
  }
 }
 if (VAR_9 == ((void*)0)) {
  FUNC_8(VAR_7, "gic: No CPU interfaces found\n");
  goto out;
 }

 VAR_12 = FUNC_0(VAR_7, VAR_1 + VAR_2,
     "gic", -1);
 if (VAR_12 == ((void*)0)) {
  FUNC_8(VAR_7, "add gic child failed\n");
  goto out;
 }

 FUNC_1(VAR_7, VAR_12, VAR_4, 0,
     VAR_8.dist->BaseAddress, 4 * 1024);
 FUNC_1(VAR_7, VAR_12, VAR_4, 1,
     VAR_9->BaseAddress, 4 * 1024);

 FUNC_4(VAR_12, (void *)(uintptr_t)VAR_8.dist->Version);
out:
 FUNC_5(VAR_10);
}
