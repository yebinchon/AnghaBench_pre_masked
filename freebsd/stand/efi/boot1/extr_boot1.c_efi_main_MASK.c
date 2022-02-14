
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int VOID ;
typedef size_t UINTN ;
struct TYPE_19__ {int (* SetMode ) (TYPE_4__*,int ) ;} ;
struct TYPE_18__ {int DeviceHandle; int * FilePath; } ;
struct TYPE_17__ {TYPE_1__* ConOut; int RuntimeServices; TYPE_13__* BootServices; } ;
struct TYPE_16__ {int (* ClearScreen ) (TYPE_1__*) ;int (* EnableCursor ) (TYPE_1__*,int ) ;int (* SetMode ) (TYPE_1__*,int ) ;int (* Reset ) (TYPE_1__*,int ) ;} ;
struct TYPE_15__ {scalar_t__ (* LocateProtocol ) (int *,int *,int **) ;scalar_t__ (* LocateHandle ) (int ,int *,int *,size_t*,int *) ;} ;
struct TYPE_14__ {char* name; int (* init ) () ;} ;
typedef TYPE_1__ SIMPLE_TEXT_OUTPUT_INTERFACE ;
typedef TYPE_2__ EFI_SYSTEM_TABLE ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_3__ EFI_LOADED_IMAGE ;
typedef int EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;
typedef TYPE_4__ EFI_CONSOLE_CONTROL_PROTOCOL ;
typedef char CHAR16 ;


 TYPE_13__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ,int *,void**) ;
 char* VAR_11 ;
 int VAR_12 ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 TYPE_11__** VAR_15 ;
 int FUNC_3 (int *,size_t,int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,char*,...) ;
 int FUNC_7 (char*,char*) ;
 int * FUNC_8 (size_t) ;
 size_t VAR_16 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char) ;
 scalar_t__ FUNC_11 (int *,int *,int **) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int ,int *,int *,size_t*,int *) ;
 scalar_t__ FUNC_19 (int ,int *,int *,size_t*,int *) ;

EFI_STATUS
FUNC_20(EFI_HANDLE VAR_17, EFI_SYSTEM_TABLE *VAR_18)
{
 EFI_HANDLE *VAR_19;
 EFI_LOADED_IMAGE *VAR_20;
 EFI_DEVICE_PATH *VAR_21;
 EFI_STATUS VAR_22;
 EFI_CONSOLE_CONTROL_PROTOCOL *VAR_23 = ((void*)0);
 SIMPLE_TEXT_OUTPUT_INTERFACE *VAR_24 = ((void*)0);
 UINTN VAR_25, VAR_26, VAR_27;
 CHAR16 *VAR_28;


 VAR_13 = VAR_18;
 VAR_9 = VAR_17;
 VAR_0 = VAR_13->BootServices;
 VAR_12 = VAR_13->RuntimeServices;


 VAR_22 = VAR_0->LocateProtocol(&VAR_3, ((void*)0),
     (VOID **)&VAR_23);
 if (VAR_22 == VAR_7)
  (void)VAR_23->SetMode(VAR_23,
      VAR_8);




 VAR_24 = VAR_13->ConOut;
 VAR_24->Reset(VAR_24, VAR_14);

 VAR_24->SetMode(VAR_24, 0);
 VAR_24->EnableCursor(VAR_24, VAR_14);
 VAR_24->ClearScreen(VAR_24);

 FUNC_9("\n>> FreeBSD EFI boot block\n");
 FUNC_9("   Loader path: %s\n\n", VAR_11);
 FUNC_9("   Initializing modules:");
 for (VAR_25 = 0; VAR_25 < VAR_16; VAR_25++) {
  FUNC_9(" %s", VAR_15[VAR_25]->name);
  if (VAR_15[VAR_25]->init != ((void*)0))
   VAR_15[VAR_25]->init();
 }
 FUNC_10('\n');


 VAR_26 = 0;
 VAR_0->LocateHandle(VAR_2, &VAR_1, ((void*)0),
     &VAR_26, ((void*)0));
 VAR_19 = FUNC_8(VAR_26);
 if (VAR_19 == ((void*)0))
  FUNC_6(VAR_6, "Failed to allocate %d handles\n",
      VAR_26);
 VAR_22 = VAR_0->LocateHandle(VAR_2, &VAR_1,
     ((void*)0), &VAR_26, VAR_19);
 if (VAR_22 != VAR_7)
  FUNC_6(VAR_22, "Failed to get device handles\n");
 VAR_27 = VAR_26 / sizeof(*VAR_19);


 VAR_22 = FUNC_2(VAR_9, &VAR_10, (void **)&VAR_20);
 VAR_21 = ((void*)0);
 if (VAR_22 == VAR_7) {
  VAR_28 = FUNC_4(VAR_20->FilePath);
  if (VAR_28 != ((void*)0)) {
   FUNC_9("   Load Path: %S\n", VAR_28);
   FUNC_7("Boot1Path", VAR_28);
   FUNC_5(VAR_28);
  }

  VAR_22 = FUNC_2(VAR_20->DeviceHandle,
      &VAR_4, (void **)&VAR_21);
  if (VAR_22 != VAR_7) {
   FUNC_0("Failed to get image DevicePath (%lu)\n",
       FUNC_1(VAR_22));
  } else {
   VAR_28 = FUNC_4(VAR_21);
   if (VAR_28 != ((void*)0)) {
    FUNC_9("   Load Device: %S\n", VAR_28);
    FUNC_7("Boot1Dev", VAR_28);
    FUNC_5(VAR_28);
   }
  }
 }

 FUNC_3(VAR_19, VAR_27, VAR_21);


 FUNC_6(VAR_5, "No bootable partitions found!");
}
