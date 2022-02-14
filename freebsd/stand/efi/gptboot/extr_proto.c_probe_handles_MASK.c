
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINTN ;
typedef int EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(EFI_HANDLE *VAR_0, UINTN VAR_1, EFI_DEVICE_PATH *VAR_2)
{
 UINTN VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_0[VAR_3], VAR_2);
}
