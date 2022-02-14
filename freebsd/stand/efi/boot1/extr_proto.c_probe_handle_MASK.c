
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int preferred; int * devdata; int * next; int devhandle; int * devpath; TYPE_3__* dev; } ;
typedef TYPE_2__ dev_info_t ;
typedef size_t UINTN ;
struct TYPE_11__ {scalar_t__ (* probe ) (TYPE_2__*) ;} ;
struct TYPE_10__ {TYPE_1__* Media; } ;
struct TYPE_8__ {int LogicalPartition; } ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;
typedef TYPE_3__ EFI_BLOCK_IO ;
typedef int CHAR16 ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *,void**) ;
 TYPE_7__** VAR_4 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int) ;
 size_t VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_9(EFI_HANDLE VAR_6, EFI_DEVICE_PATH *VAR_7)
{
 dev_info_t *VAR_8;
 EFI_BLOCK_IO *VAR_9;
 EFI_DEVICE_PATH *VAR_10;
 EFI_STATUS VAR_11;
 UINTN VAR_12;
 int VAR_13;


 VAR_11 = FUNC_2(VAR_6, &VAR_1, (void **)&VAR_10);
 if (VAR_11 == VAR_3)
  return (0);

 if (VAR_11 != VAR_2) {
  FUNC_0("\nFailed to query DevicePath (%lu)\n",
      FUNC_1(VAR_11));
  return (-1);
 }







 VAR_11 = FUNC_2(VAR_6, &VAR_0, (void **)&VAR_9);
 if (VAR_11 == VAR_3)
  return (0);

 if (VAR_11 != VAR_2) {
  FUNC_0("\nFailed to query BlockIoProtocol (%lu)\n",
      FUNC_1(VAR_11));
  return (-1);
 }

 if (!VAR_9->Media->LogicalPartition)
  return (0);

 VAR_13 = FUNC_4(VAR_7, VAR_10);


 VAR_8 = FUNC_7(sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_0("\nFailed to allocate devinfo\n");
  return (-1);
 }
 VAR_8->dev = VAR_9;
 VAR_8->devpath = VAR_10;
 VAR_8->devhandle = VAR_6;
 VAR_8->preferred = VAR_13;
 VAR_8->next = ((void*)0);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_8->devdata = ((void*)0);

  VAR_11 = VAR_4[VAR_12]->probe(VAR_8);
  if (VAR_11 == VAR_2)
   return (VAR_13 + 1);
 }
 FUNC_6(VAR_8);

 return (0);
}
