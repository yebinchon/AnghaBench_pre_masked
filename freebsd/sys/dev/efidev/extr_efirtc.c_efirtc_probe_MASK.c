
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_tm {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct efi_tm*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct efi_tm VAR_3;
 int VAR_4;






 if ((VAR_4 = FUNC_2(&VAR_3)) != 0) {
  if (VAR_1)
   FUNC_0(VAR_2, "cannot read EFI realtime clock, "
       "error %d\n", VAR_4);
  return (VAR_4);
 }
 FUNC_1(VAR_2, "EFI Realtime Clock");
 return (VAR_0);
}
