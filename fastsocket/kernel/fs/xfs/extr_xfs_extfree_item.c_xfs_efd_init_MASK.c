
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_extent_t ;
typedef int xfs_efd_log_item_t ;
typedef int uint ;
struct xfs_mount {int dummy; } ;
struct TYPE_4__ {int efi_id; } ;
struct xfs_efi_log_item {TYPE_2__ efi_format; } ;
struct TYPE_3__ {int efd_nextents; int efd_efi_id; } ;
struct xfs_efd_log_item {TYPE_1__ efd_format; struct xfs_efi_log_item* efd_efip; int efd_item; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xfs_efd_log_item* FUNC_1 (int,int ) ;
 struct xfs_efd_log_item* FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct xfs_mount*,int *,int ,int *) ;

struct xfs_efd_log_item *
FUNC_4(
 struct xfs_mount *VAR_5,
 struct xfs_efi_log_item *VAR_6,
 uint VAR_7)

{
 struct xfs_efd_log_item *VAR_8;
 uint VAR_9;

 FUNC_0(VAR_7 > 0);
 if (VAR_7 > VAR_1) {
  VAR_9 = (uint)(sizeof(xfs_efd_log_item_t) +
   ((VAR_7 - 1) * sizeof(xfs_extent_t)));
  VAR_8 = FUNC_1(VAR_9, VAR_0);
 } else {
  VAR_8 = FUNC_2(VAR_4, VAR_0);
 }

 FUNC_3(VAR_5, &VAR_8->efd_item, VAR_2, &VAR_3);
 VAR_8->efd_efip = VAR_6;
 VAR_8->efd_format.efd_nextents = VAR_7;
 VAR_8->efd_format.efd_efi_id = VAR_6->efi_format.efi_id;

 return VAR_8;
}
