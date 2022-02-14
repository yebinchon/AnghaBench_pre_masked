
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_2__ {int nr_blocks; int on_errors; } ;
typedef int NTFS_BOOT_SECTOR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct super_block*,int *,int const) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 (struct super_block*,char const*,...) ;
 int FUNC_7 (struct super_block*,char*) ;
 struct buffer_head* FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (struct buffer_head*) ;

__attribute__((used)) static struct buffer_head *FUNC_10(struct super_block *VAR_3,
  const int VAR_4)
{
 const char *VAR_5 = "Unable to read %s boot sector.";
 struct buffer_head *VAR_6, *VAR_7;
 sector_t VAR_8 = FUNC_0(VAR_3)->nr_blocks;


 if ((VAR_6 = FUNC_8(VAR_3, 0))) {
  if (FUNC_3(VAR_3, (NTFS_BOOT_SECTOR*)
    VAR_6->b_data, VAR_4))
   return VAR_6;
  if (!VAR_4)
   FUNC_6(VAR_3, "Primary boot sector is invalid.");
 } else if (!VAR_4)
  FUNC_6(VAR_3, VAR_5, "primary");
 if (!(FUNC_0(VAR_3)->on_errors & VAR_2)) {
  if (VAR_6)
   FUNC_1(VAR_6);
  if (!VAR_4)
   FUNC_6(VAR_3, "Mount option errors=recover not used. "
     "Aborting without trying to recover.");
  return ((void*)0);
 }

 if ((VAR_7 = FUNC_8(VAR_3, VAR_8 - 1))) {
  if (FUNC_3(VAR_3, (NTFS_BOOT_SECTOR*)
    VAR_7->b_data, VAR_4))
   goto hotfix_primary_boot_sector;
  FUNC_1(VAR_7);
 } else if (!VAR_4)
  FUNC_6(VAR_3, VAR_5, "backup");

 if ((VAR_7 = FUNC_8(VAR_3, VAR_8 >> 1))) {
  if (FUNC_3(VAR_3, (NTFS_BOOT_SECTOR*)
    VAR_7->b_data, VAR_4))
   goto hotfix_primary_boot_sector;
  if (!VAR_4)
   FUNC_6(VAR_3, "Could not find a valid backup boot "
     "sector.");
  FUNC_1(VAR_7);
 } else if (!VAR_4)
  FUNC_6(VAR_3, VAR_5, "backup");

 if (VAR_6)
  FUNC_1(VAR_6);
 return ((void*)0);
hotfix_primary_boot_sector:
 if (VAR_6) {
  if (!(VAR_3->s_flags & VAR_0)) {
   FUNC_7(VAR_3, "Hot-fix: Recovering invalid primary "
     "boot sector from backup copy.");
   FUNC_5(VAR_6->b_data, VAR_7->b_data,
     VAR_1);
   FUNC_4(VAR_6);
   FUNC_9(VAR_6);
   if (FUNC_2(VAR_6)) {
    FUNC_1(VAR_7);
    return VAR_6;
   }
   FUNC_6(VAR_3, "Hot-fix: Device write error while "
     "recovering primary boot sector.");
  } else {
   FUNC_7(VAR_3, "Hot-fix: Recovery of primary boot "
     "sector failed: Read-only mount.");
  }
  FUNC_1(VAR_6);
 }
 FUNC_7(VAR_3, "Using backup boot sector.");
 return VAR_7;
}
