
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFI_DEVICE_PATH ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static bool
FUNC_4(EFI_DEVICE_PATH *VAR_1, EFI_DEVICE_PATH *VAR_2,
    bool VAR_3)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (0);

 while (1) {
  if (VAR_3 &&
      FUNC_1(VAR_1, VAR_0) &&
      FUNC_1(VAR_2, VAR_0))
   return (1);
  if (!FUNC_3(VAR_1, VAR_2))
   return 0;
  if (FUNC_0(VAR_1))
   break;
  VAR_1 = FUNC_2(VAR_1);
  VAR_2 = FUNC_2(VAR_2);
 }
 return (1);
}
