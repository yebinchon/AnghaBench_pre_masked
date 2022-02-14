
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* AllocatePool ) (int ,size_t,void**) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_DEVICE_PATH ;
typedef char CHAR16 ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (int ,size_t,void**) ;
 int FUNC_5 (char*,char**,size_t*) ;

__attribute__((used)) static CHAR16 *
FUNC_6(EFI_DEVICE_PATH *VAR_2)
{
 char *VAR_3 = ((void*)0);
 CHAR16 *VAR_4 = ((void*)0);
 size_t VAR_5;
 int VAR_6;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));





 VAR_6 = FUNC_5(VAR_3, &VAR_4, &VAR_5);
 FUNC_2(VAR_3);
 if (VAR_6 == 0) {
  CHAR16 *VAR_7 = ((void*)0);
  EFI_STATUS VAR_8;

  VAR_8 = VAR_0->AllocatePool(VAR_1, VAR_5, (void **)&VAR_7);
  if (FUNC_0(VAR_8)) {
   FUNC_2(VAR_4);
                 return (VAR_7);
  }
  FUNC_3(VAR_7, VAR_4, VAR_5);
  FUNC_2(VAR_4);
  VAR_4 = VAR_7;
 }

 return (VAR_4);
}
