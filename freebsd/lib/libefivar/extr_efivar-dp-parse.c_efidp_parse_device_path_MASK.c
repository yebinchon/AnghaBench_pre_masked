
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int efidp ;
typedef size_t UINTN ;
typedef int EFI_DEVICE_PATH_PROTOCOL ;


 size_t FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,size_t) ;

ssize_t
FUNC_4(char *VAR_0, efidp VAR_1, size_t VAR_2)
{
 EFI_DEVICE_PATH_PROTOCOL *VAR_3;
 UINTN VAR_4;

 VAR_3 = FUNC_1 (VAR_0);
 if (VAR_3 == ((void*)0))
  return -1;
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 > VAR_2) {
  FUNC_2(VAR_3);
  return -1;
 }
 FUNC_3(VAR_1, VAR_3, VAR_4);
 FUNC_2(VAR_3);

 return VAR_4;
}
