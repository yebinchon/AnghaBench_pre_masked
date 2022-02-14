
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ efi_nextents; } ;
struct xfs_efi_log_item {TYPE_1__ efi_format; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xfs_efi_log_item*) ;
 int FUNC_1 (int ,struct xfs_efi_log_item*) ;
 int VAR_1 ;

void
FUNC_2(
 struct xfs_efi_log_item *VAR_2)
{
 if (VAR_2->efi_format.efi_nextents > VAR_0)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
