
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int dev_info_t ;
typedef int boot_order ;
typedef int boot_module_t ;
typedef int boot_current ;
typedef unsigned int UINTN ;
typedef int UINT16 ;
struct TYPE_4__ {int (* Exit ) (int ,int ,int ,int *) ;} ;
struct TYPE_3__ {int (* status ) () ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 TYPE_1__** VAR_5 ;
 scalar_t__ FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int const**,int **,void**,size_t*,int) ;
 unsigned int VAR_6 ;
 int FUNC_3 (char*,...) ;
 char** VAR_7 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int const*,int *,void*,size_t) ;

void
FUNC_8(EFI_HANDLE *VAR_8, UINTN VAR_9, EFI_DEVICE_PATH *VAR_10)
{
 UINT16 VAR_11;
 size_t VAR_12;
 UINT16 VAR_13[100];
 unsigned VAR_14;
 int VAR_15;
 EFI_STATUS VAR_16;
 const boot_module_t *VAR_17;
 dev_info_t *VAR_18;
 void *VAR_19;
 size_t VAR_20;


 VAR_11 = 0;
 VAR_12 = sizeof(VAR_11);
 if (FUNC_1("BootCurrent", &VAR_11, &VAR_12) == VAR_2) {
  FUNC_3("   BootCurrent: %04x\n", VAR_11);

  VAR_12 = sizeof(VAR_13);
  if (FUNC_1("BootOrder", &VAR_13, &VAR_12) == VAR_2) {
   FUNC_3("   BootOrder:");
   for (VAR_14 = 0; VAR_14 < VAR_12 / sizeof(VAR_13[0]); VAR_14++)
    FUNC_3(" %04x%s", VAR_13[VAR_14],
        VAR_13[VAR_14] == VAR_11 ? "[*]" : "");
   FUNC_3("\n");
  }
 }
 FUNC_3("   Probing %zu block devices...", VAR_9);
 FUNC_0("\n");
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  VAR_15 = FUNC_4(VAR_8[VAR_14], VAR_10);



  FUNC_3("%s\n", VAR_7[VAR_15 + 1]);

 }
 FUNC_3(" done\n");



 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  FUNC_3("    ");
  VAR_5[VAR_14]->status();
 }

 VAR_16 = FUNC_2(&VAR_17, &VAR_18, &VAR_19, &VAR_20, 1);
 if (VAR_16 != VAR_2) {
  VAR_16 = FUNC_2(&VAR_17, &VAR_18, &VAR_19, &VAR_20, 0);
  if (VAR_16 != VAR_2) {
   FUNC_3("Failed to load '%s'\n", VAR_4);
   return;
  }
 }

 FUNC_7(VAR_17, VAR_18, VAR_19, VAR_20);
}
