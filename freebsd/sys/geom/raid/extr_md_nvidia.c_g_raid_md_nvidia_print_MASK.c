
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvidia_raid_conf {char* nvidia_id; int config_size; int checksum; int version; int disk_number; int dummy_0; int total_sectors; int sector_size; char* name; int* revision; int disk_status; int magic_0; int state; int array_width; int total_disks; int orig_array_width; int type; int dummy_3; int strip_sectors; int strip_bytes; int strip_shift; int strip_mask; int stripe_sectors; int stripe_bytes; int rebuild_lba; int orig_type; int orig_total_sectors; int status; int * volume_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct nvidia_raid_conf *VAR_1)
{

 if (VAR_0 < 1)
  return;

 FUNC_0("********* ATA NVIDIA RAID Metadata *********\n");
 FUNC_0("nvidia_id           <%.8s>\n", VAR_1->nvidia_id);
 FUNC_0("config_size         %u\n", VAR_1->config_size);
 FUNC_0("checksum            0x%08x\n", VAR_1->checksum);
 FUNC_0("version             0x%04x\n", VAR_1->version);
 FUNC_0("disk_number         %d\n", VAR_1->disk_number);
 FUNC_0("dummy_0             0x%02x\n", VAR_1->dummy_0);
 FUNC_0("total_sectors       %u\n", VAR_1->total_sectors);
 FUNC_0("sector_size         %u\n", VAR_1->sector_size);
 FUNC_0("name                <%.16s>\n", VAR_1->name);
 FUNC_0("revision            0x%02x%02x%02x%02x\n",
     VAR_1->revision[0], VAR_1->revision[1],
     VAR_1->revision[2], VAR_1->revision[3]);
 FUNC_0("disk_status         0x%08x\n", VAR_1->disk_status);
 FUNC_0("magic_0             0x%08x\n", VAR_1->magic_0);
 FUNC_0("volume_id           0x%016jx%016jx\n",
     VAR_1->volume_id[1], VAR_1->volume_id[0]);
 FUNC_0("state               0x%02x\n", VAR_1->state);
 FUNC_0("array_width         %u\n", VAR_1->array_width);
 FUNC_0("total_disks         %u\n", VAR_1->total_disks);
 FUNC_0("orig_array_width    %u\n", VAR_1->orig_array_width);
 FUNC_0("type                0x%04x\n", VAR_1->type);
 FUNC_0("dummy_3             0x%04x\n", VAR_1->dummy_3);
 FUNC_0("strip_sectors       %u\n", VAR_1->strip_sectors);
 FUNC_0("strip_bytes         %u\n", VAR_1->strip_bytes);
 FUNC_0("strip_shift         %u\n", VAR_1->strip_shift);
 FUNC_0("strip_mask          0x%08x\n", VAR_1->strip_mask);
 FUNC_0("stripe_sectors      %u\n", VAR_1->stripe_sectors);
 FUNC_0("stripe_bytes        %u\n", VAR_1->stripe_bytes);
 FUNC_0("rebuild_lba         %u\n", VAR_1->rebuild_lba);
 FUNC_0("orig_type           0x%04x\n", VAR_1->orig_type);
 FUNC_0("orig_total_sectors  %u\n", VAR_1->orig_total_sectors);
 FUNC_0("status              0x%08x\n", VAR_1->status);
 FUNC_0("=================================================\n");
}
