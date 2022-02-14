
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINTN ;
struct TYPE_2__ {scalar_t__ (* LocateHandle ) (int ,int *,int *,int*,int *) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_PCI_IO_PROTOCOL ;
typedef int EFI_HANDLE ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,void**) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int ,int *,int *,int*,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int*,int *) ;
 int VAR_5 ;

__attribute__((used)) static EFI_PCI_IO_PROTOCOL *
FUNC_5(void)
{
 EFI_PCI_IO_PROTOCOL *VAR_6;
 EFI_HANDLE *VAR_7, *VAR_8;
 EFI_STATUS VAR_9;
 UINTN VAR_10;


 VAR_10 = 0;
 VAR_9 = VAR_0->LocateHandle(VAR_1, &VAR_5, ((void*)0), &VAR_10, ((void*)0));
 if (VAR_9 != VAR_2)
  return (((void*)0));
 VAR_7 = FUNC_2(VAR_10);
 VAR_9 = VAR_0->LocateHandle(VAR_1, &VAR_5, ((void*)0), &VAR_10, VAR_7);
 if (VAR_9 != VAR_3) {
  FUNC_1(VAR_7);
  return (((void*)0));
 }
 VAR_10 /= sizeof(EFI_HANDLE);


 VAR_6 = ((void*)0);
 for (VAR_8 = VAR_7; VAR_8 < VAR_7 + VAR_10; VAR_8++) {
  VAR_9 = FUNC_0(*VAR_8, &VAR_4,
      (void **)&VAR_6);
  if (VAR_9 == VAR_3) {
   FUNC_1(VAR_7);
   return (VAR_6);
  }
 }
 FUNC_1(VAR_7);
 return (((void*)0));
}
