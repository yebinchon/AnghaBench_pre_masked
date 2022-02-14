
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii_raid_conf {int product_id; int vendor_id; int version_minor; int version_major; int* timestamp; int strip_sectors; int disk_number; int type; int raid0_disks; int raid0_ident; int raid1_disks; int raid1_ident; int generation; int disk_status; int raid_status; int raid_location; int disk_location; int auto_rebuild; char* name; int checksum; scalar_t__ rebuild_lba; scalar_t__ total_sectors; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct sii_raid_conf *VAR_1)
{

 if (VAR_0 < 1)
  return;

 FUNC_0("********* ATA SiI RAID Metadata *********\n");
 FUNC_0("total_sectors       %llu\n",
     (long long unsigned)VAR_1->total_sectors);
 FUNC_0("product_id          0x%04x\n", VAR_1->product_id);
 FUNC_0("vendor_id           0x%04x\n", VAR_1->vendor_id);
 FUNC_0("version_minor       0x%04x\n", VAR_1->version_minor);
 FUNC_0("version_major       0x%04x\n", VAR_1->version_major);
 FUNC_0("timestamp           0x%02x%02x%02x%02x%02x%02x\n",
     VAR_1->timestamp[5], VAR_1->timestamp[4], VAR_1->timestamp[3],
     VAR_1->timestamp[2], VAR_1->timestamp[1], VAR_1->timestamp[0]);
 FUNC_0("strip_sectors       %d\n", VAR_1->strip_sectors);
 FUNC_0("disk_number         %d\n", VAR_1->disk_number);
 FUNC_0("type                0x%02x\n", VAR_1->type);
 FUNC_0("raid0_disks         %d\n", VAR_1->raid0_disks);
 FUNC_0("raid0_ident         %d\n", VAR_1->raid0_ident);
 FUNC_0("raid1_disks         %d\n", VAR_1->raid1_disks);
 FUNC_0("raid1_ident         %d\n", VAR_1->raid1_ident);
 FUNC_0("rebuild_lba         %llu\n",
     (long long unsigned)VAR_1->rebuild_lba);
 FUNC_0("generation          %d\n", VAR_1->generation);
 FUNC_0("disk_status         %d\n", VAR_1->disk_status);
 FUNC_0("raid_status         %d\n", VAR_1->raid_status);
 FUNC_0("raid_location       %d\n", VAR_1->raid_location);
 FUNC_0("disk_location       %d\n", VAR_1->disk_location);
 FUNC_0("auto_rebuild        %d\n", VAR_1->auto_rebuild);
 FUNC_0("name                <%.16s>\n", VAR_1->name);
 FUNC_0("checksum            0x%04x\n", VAR_1->checksum);
 FUNC_0("=================================================\n");
}
