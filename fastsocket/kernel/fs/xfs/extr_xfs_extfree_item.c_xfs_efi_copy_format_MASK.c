
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ i_len; TYPE_3__* i_addr; } ;
typedef TYPE_2__ xfs_log_iovec_t ;
typedef int xfs_extent_t ;
typedef int xfs_extent_64_t ;
typedef int xfs_extent_32_t ;
struct TYPE_10__ {int efi_nextents; TYPE_1__* efi_extents; int efi_id; int efi_size; int efi_type; } ;
typedef TYPE_3__ xfs_efi_log_format_t ;
typedef TYPE_3__ xfs_efi_log_format_64_t ;
typedef TYPE_3__ xfs_efi_log_format_32_t ;
typedef scalar_t__ uint ;
struct TYPE_8__ {int ext_len; int ext_start; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__) ;

int
FUNC_1(xfs_log_iovec_t *VAR_1, xfs_efi_log_format_t *VAR_2)
{
 xfs_efi_log_format_t *VAR_3 = VAR_1->i_addr;
 uint VAR_4;
 uint VAR_5 = sizeof(xfs_efi_log_format_t) +
  (VAR_3->efi_nextents - 1) * sizeof(xfs_extent_t);
 uint VAR_6 = sizeof(xfs_efi_log_format_32_t) +
  (VAR_3->efi_nextents - 1) * sizeof(xfs_extent_32_t);
 uint VAR_7 = sizeof(xfs_efi_log_format_64_t) +
  (VAR_3->efi_nextents - 1) * sizeof(xfs_extent_64_t);

 if (VAR_1->i_len == VAR_5) {
  FUNC_0((char *)VAR_2, (char*)VAR_3, VAR_5);
  return 0;
 } else if (VAR_1->i_len == VAR_6) {
  xfs_efi_log_format_32_t *VAR_8 = VAR_1->i_addr;

  VAR_2->efi_type = VAR_8->efi_type;
  VAR_2->efi_size = VAR_8->efi_size;
  VAR_2->efi_nextents = VAR_8->efi_nextents;
  VAR_2->efi_id = VAR_8->efi_id;
  for (VAR_4 = 0; VAR_4 < VAR_2->efi_nextents; VAR_4++) {
   VAR_2->efi_extents[VAR_4].ext_start =
    VAR_8->efi_extents[VAR_4].ext_start;
   VAR_2->efi_extents[VAR_4].ext_len =
    VAR_8->efi_extents[VAR_4].ext_len;
  }
  return 0;
 } else if (VAR_1->i_len == VAR_7) {
  xfs_efi_log_format_64_t *VAR_9 = VAR_1->i_addr;

  VAR_2->efi_type = VAR_9->efi_type;
  VAR_2->efi_size = VAR_9->efi_size;
  VAR_2->efi_nextents = VAR_9->efi_nextents;
  VAR_2->efi_id = VAR_9->efi_id;
  for (VAR_4 = 0; VAR_4 < VAR_2->efi_nextents; VAR_4++) {
   VAR_2->efi_extents[VAR_4].ext_start =
    VAR_9->efi_extents[VAR_4].ext_start;
   VAR_2->efi_extents[VAR_4].ext_len =
    VAR_9->efi_extents[VAR_4].ext_len;
  }
  return 0;
 }
 return VAR_0;
}
