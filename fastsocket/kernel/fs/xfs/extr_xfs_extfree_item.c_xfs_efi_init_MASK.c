
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_extent_t ;
typedef int xfs_efi_log_item_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct TYPE_2__ {int efi_nextents; scalar_t__ efi_id; } ;
struct xfs_efi_log_item {int efi_refcount; int efi_next_extent; TYPE_1__ efi_format; int efi_item; } ;
typedef scalar_t__ __psint_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 struct xfs_efi_log_item* FUNC_2 (int,int ) ;
 struct xfs_efi_log_item* FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct xfs_mount*,int *,int ,int *) ;

struct xfs_efi_log_item *
FUNC_5(
 struct xfs_mount *VAR_5,
 uint VAR_6)

{
 struct xfs_efi_log_item *VAR_7;
 uint VAR_8;

 FUNC_0(VAR_6 > 0);
 if (VAR_6 > VAR_1) {
  VAR_8 = (uint)(sizeof(xfs_efi_log_item_t) +
   ((VAR_6 - 1) * sizeof(xfs_extent_t)));
  VAR_7 = FUNC_2(VAR_8, VAR_0);
 } else {
  VAR_7 = FUNC_3(VAR_4, VAR_0);
 }

 FUNC_4(VAR_5, &VAR_7->efi_item, VAR_2, &VAR_3);
 VAR_7->efi_format.efi_nextents = VAR_6;
 VAR_7->efi_format.efi_id = (__psint_t)(void*)VAR_7;
 FUNC_1(&VAR_7->efi_next_extent, 0);
 FUNC_1(&VAR_7->efi_refcount, 2);

 return VAR_7;
}
