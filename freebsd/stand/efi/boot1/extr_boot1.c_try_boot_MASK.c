
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int devhandle; int devpath; } ;
typedef TYPE_1__ dev_info_t ;
struct TYPE_10__ {scalar_t__ (* load ) (int ,TYPE_1__*,void**,size_t*) ;char* name; } ;
typedef TYPE_2__ boot_module_t ;
struct TYPE_12__ {scalar_t__ (* LoadImage ) (int ,int ,int ,void*,size_t,int *) ;scalar_t__ (* StartImage ) (int ,int *,int *) ;} ;
struct TYPE_11__ {size_t LoadOptionsSize; char* LoadOptions; int DeviceHandle; } ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_3__ EFI_LOADED_IMAGE ;
typedef int EFI_HANDLE ;


 TYPE_8__* VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *,void**) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 char* FUNC_6 (size_t) ;
 int FUNC_7 (char*,void*,size_t) ;
 int FUNC_8 (char*,char*,...) ;
 scalar_t__ FUNC_9 (int ,TYPE_1__*,void**,size_t*) ;
 scalar_t__ FUNC_10 (int ,TYPE_1__*,void**,size_t*) ;
 scalar_t__ FUNC_11 (int ,int ,int ,void*,size_t,int *) ;
 scalar_t__ FUNC_12 (int ,int *,int *) ;

EFI_STATUS
FUNC_13(const boot_module_t *VAR_9, dev_info_t *VAR_10, void *VAR_11, size_t VAR_12)
{
 size_t VAR_13, VAR_14;
 void *VAR_15;
 char *VAR_16;
 EFI_HANDLE VAR_17;
 EFI_LOADED_IMAGE *VAR_18;
 EFI_STATUS VAR_19;
 VAR_16 = ((void*)0);
 VAR_14 = 0;
 VAR_19 = VAR_9->load(VAR_6, VAR_10, &VAR_15, &VAR_13);
 if (VAR_19 == VAR_1)
  VAR_19 = VAR_9->load(VAR_5, VAR_10, &VAR_15, &VAR_13);
 if (VAR_19 == VAR_2) {
  VAR_14 = VAR_13 + 1;
  VAR_16 = FUNC_6(VAR_14);
  if (VAR_16 == ((void*)0))
   goto errout;
  FUNC_7(VAR_16, VAR_15, VAR_13);
  VAR_16[VAR_13] = '\0';
  FUNC_5(VAR_15);
  VAR_15 = ((void*)0);
 }

 if ((VAR_19 = VAR_0->LoadImage(VAR_8, VAR_3, FUNC_4(VAR_10->devpath),
     VAR_11, VAR_12, &VAR_17)) != VAR_2) {
  FUNC_8("Failed to load image provided by %s, size: %zu, (%lu)\n",
       VAR_9->name, VAR_12, FUNC_2(VAR_19));
  goto errout;
 }

 VAR_19 = FUNC_3(VAR_17, &VAR_4,
     (void **)&VAR_18);
 if (VAR_19 != VAR_2) {
  FUNC_8("Failed to query LoadedImage provided by %s (%lu)\n",
      VAR_9->name, FUNC_2(VAR_19));
  goto errout;
 }

 if (VAR_16 != ((void*)0))
  FUNC_8("    command args: %s\n", VAR_16);

 VAR_18->DeviceHandle = VAR_10->devhandle;
 VAR_18->LoadOptionsSize = VAR_14;
 VAR_18->LoadOptions = VAR_16;

 FUNC_0("Starting '%s' in 5 seconds...", VAR_7);
 FUNC_1(1000000);
 FUNC_0(".");
 FUNC_1(1000000);
 FUNC_0(".");
 FUNC_1(1000000);
 FUNC_0(".");
 FUNC_1(1000000);
 FUNC_0(".");
 FUNC_1(1000000);
 FUNC_0(".\n");

 if ((VAR_19 = VAR_0->StartImage(VAR_17, ((void*)0), ((void*)0))) !=
     VAR_2) {
  FUNC_8("Failed to start image provided by %s (%lu)\n",
      VAR_9->name, FUNC_2(VAR_19));
  VAR_18->LoadOptionsSize = 0;
  VAR_18->LoadOptions = ((void*)0);
 }

errout:
 if (VAR_16 != ((void*)0))
  FUNC_5(VAR_16);
 if (VAR_15 != ((void*)0))
  FUNC_5(VAR_15);
 if (VAR_11 != ((void*)0))
  FUNC_5(VAR_11);

 return (VAR_19);
}
