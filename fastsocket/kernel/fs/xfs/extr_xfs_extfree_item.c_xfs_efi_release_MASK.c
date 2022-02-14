
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int efi_flags; int efi_next_extent; } ;
typedef TYPE_1__ xfs_efi_log_item_t ;
typedef scalar_t__ uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void
FUNC_5(xfs_efi_log_item_t *VAR_1,
  uint VAR_2)
{
 FUNC_0(FUNC_2(&VAR_1->efi_next_extent) >= VAR_2);
 if (FUNC_3(VAR_2, &VAR_1->efi_next_extent)) {

  if (FUNC_4(VAR_0, &VAR_1->efi_flags))
   FUNC_1(VAR_1);

  FUNC_1(VAR_1);

 }
}
