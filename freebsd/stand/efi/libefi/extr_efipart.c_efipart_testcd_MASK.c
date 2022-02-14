
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Media; } ;
struct TYPE_4__ {int MediaPresent; scalar_t__ RemovableMedia; } ;
typedef int EFI_DEVICE_PATH ;
typedef TYPE_2__ EFI_BLOCK_IO ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_2(EFI_DEVICE_PATH *VAR_2, EFI_BLOCK_IO *VAR_3)
{
 if (FUNC_1(VAR_2) == VAR_1 &&
     FUNC_0(VAR_2) == VAR_0) {
  return (1);
 }


 if (VAR_3->Media->RemovableMedia &&
     !VAR_3->Media->MediaPresent) {
  return (1);
 }

 return (0);
}
