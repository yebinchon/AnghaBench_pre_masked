
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
typedef int le32 ;
struct TYPE_4__ {int sectors_per_cluster; scalar_t__ fats; scalar_t__ large_sectors; int sectors_per_fat; int sectors; int root_entries; int reserved_sectors; int bytes_per_sector; } ;
struct TYPE_5__ {scalar_t__ oem_id; int clusters_per_mft_record; int clusters_per_index_record; scalar_t__ end_of_sector_marker; TYPE_1__ bpb; scalar_t__ checksum; } ;
typedef TYPE_2__ NTFS_BOOT_SECTOR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct super_block const*,char*) ;

__attribute__((used)) static bool FUNC_5(const struct super_block *VAR_2,
  const NTFS_BOOT_SECTOR *VAR_3, const bool VAR_4)
{







 if ((void*)VAR_3 < (void*)&VAR_3->checksum && VAR_3->checksum && !VAR_4) {
  le32 *VAR_5;
  u32 VAR_6;

  for (VAR_6 = 0, VAR_5 = (le32*)VAR_3; VAR_5 < (le32*)(&VAR_3->checksum); ++VAR_5)
   VAR_6 += FUNC_3(VAR_5);
  if (FUNC_2(VAR_3->checksum) != VAR_6)
   FUNC_4(VAR_2, "Invalid boot sector checksum.");
 }

 if (VAR_3->oem_id != VAR_1)
  goto not_ntfs;

 if (FUNC_1(VAR_3->bpb.bytes_per_sector) < 0x100 ||
   FUNC_1(VAR_3->bpb.bytes_per_sector) > 0x1000)
  goto not_ntfs;

 switch (VAR_3->bpb.sectors_per_cluster) {
 case 1: case 2: case 4: case 8: case 16: case 32: case 64: case 128:
  break;
 default:
  goto not_ntfs;
 }

 if ((u32)FUNC_1(VAR_3->bpb.bytes_per_sector) *
   VAR_3->bpb.sectors_per_cluster > VAR_0)
  goto not_ntfs;

 if (FUNC_1(VAR_3->bpb.reserved_sectors) ||
   FUNC_1(VAR_3->bpb.root_entries) ||
   FUNC_1(VAR_3->bpb.sectors) ||
   FUNC_1(VAR_3->bpb.sectors_per_fat) ||
   FUNC_2(VAR_3->bpb.large_sectors) || VAR_3->bpb.fats)
  goto not_ntfs;

 if ((u8)VAR_3->clusters_per_mft_record < 0xe1 ||
   (u8)VAR_3->clusters_per_mft_record > 0xf7)
  switch (VAR_3->clusters_per_mft_record) {
  case 1: case 2: case 4: case 8: case 16: case 32: case 64:
   break;
  default:
   goto not_ntfs;
  }

 if ((u8)VAR_3->clusters_per_index_record < 0xe1 ||
   (u8)VAR_3->clusters_per_index_record > 0xf7)
  switch (VAR_3->clusters_per_index_record) {
  case 1: case 2: case 4: case 8: case 16: case 32: case 64:
   break;
  default:
   goto not_ntfs;
  }





 if (!VAR_4 && VAR_3->end_of_sector_marker != FUNC_0(0xaa55))
  FUNC_4(VAR_2, "Invalid end of sector marker.");
 return 1;
not_ntfs:
 return 0;
}
