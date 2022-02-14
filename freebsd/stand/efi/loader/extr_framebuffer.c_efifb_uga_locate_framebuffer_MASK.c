
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int u_int ;
struct TYPE_6__ {int (* FreePool ) (int*) ;} ;
struct TYPE_5__ {scalar_t__ (* GetBarAttributes ) (TYPE_1__*,int,int *,void**) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef TYPE_1__ EFI_PCI_IO_PROTOCOL ;


 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int *,void**) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static EFI_STATUS
FUNC_4(EFI_PCI_IO_PROTOCOL *VAR_3, uint64_t *VAR_4,
    uint64_t *VAR_5)
{
 uint8_t *VAR_6;
 uint64_t VAR_7, VAR_8;
 EFI_STATUS VAR_9;
 u_int VAR_10;

 if (VAR_3 == ((void*)0))
  return (VAR_1);


 *VAR_4 = 0;
 *VAR_5 = 0;
 for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
  VAR_9 = VAR_3->GetBarAttributes(VAR_3, VAR_10, ((void*)0),
      (void **)&VAR_6);
  if (VAR_9 != VAR_2)
   continue;

  if (VAR_6[0] == 0x87 && VAR_6[3] == 0) {

   VAR_7 = FUNC_0(VAR_6 + 10);
   VAR_8 = FUNC_0(VAR_6 + 22);
  } else if (VAR_6[0] == 0x8a && VAR_6[3] == 0) {

   VAR_7 = FUNC_1(VAR_6 + 14);
   VAR_8 = FUNC_1(VAR_6 + 38);
  } else {
   VAR_7 = 0;
   VAR_8 = 0;
  }
  VAR_0->FreePool(VAR_6);
  if (VAR_7 == 0 || VAR_8 == 0)
   continue;


  if (VAR_8 > *VAR_5) {
   *VAR_4 = VAR_7;
   *VAR_5 = VAR_8;
  }
 }
 return ((*VAR_4 == 0 || *VAR_5 == 0) ? VAR_1 : 0);
}
