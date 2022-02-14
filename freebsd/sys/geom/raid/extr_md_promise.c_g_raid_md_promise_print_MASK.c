
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int number; int channel; int device; int id; } ;
struct promise_raid_conf {char* promise_id; int disk_offset; int disk_sectors; int disk_rebuild; int generation; int status; int type; int total_disks; int stripe_shift; int array_width; int array_number; int total_sectors; int cylinders; int heads; int sectors; char* name; int magic_3; int magic_4; int magic_5; int total_sectors_high; int sector_size; int backup_time; int disk_offset_high; int disk_sectors_high; int disk_rebuild_high; int rebuild_lba64; TYPE_2__* disks; int volume_id; TYPE_1__ disk; } ;
struct TYPE_4__ {int flags; int number; int channel; int device; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct promise_raid_conf *VAR_2)
{
 int VAR_3;

 if (VAR_1 < 1)
  return;

 FUNC_0("********* ATA Promise Metadata *********\n");
 FUNC_0("promise_id          <%.24s>\n", VAR_2->promise_id);
 FUNC_0("disk                %02x %02x %02x %02x %016jx\n",
     VAR_2->disk.flags, VAR_2->disk.number, VAR_2->disk.channel,
     VAR_2->disk.device, VAR_2->disk.id);
 FUNC_0("disk_offset         %u\n", VAR_2->disk_offset);
 FUNC_0("disk_sectors        %u\n", VAR_2->disk_sectors);
 FUNC_0("disk_rebuild        %u\n", VAR_2->disk_rebuild);
 FUNC_0("generation          %u\n", VAR_2->generation);
 FUNC_0("status              0x%02x\n", VAR_2->status);
 FUNC_0("type                %u\n", VAR_2->type);
 FUNC_0("total_disks         %u\n", VAR_2->total_disks);
 FUNC_0("stripe_shift        %u\n", VAR_2->stripe_shift);
 FUNC_0("array_width         %u\n", VAR_2->array_width);
 FUNC_0("array_number        %u\n", VAR_2->array_number);
 FUNC_0("total_sectors       %u\n", VAR_2->total_sectors);
 FUNC_0("cylinders           %u\n", VAR_2->cylinders);
 FUNC_0("heads               %u\n", VAR_2->heads);
 FUNC_0("sectors             %u\n", VAR_2->sectors);
 FUNC_0("volume_id           0x%016jx\n", VAR_2->volume_id);
 FUNC_0("disks:\n");
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ ) {
  FUNC_0("                    %02x %02x %02x %02x %016jx\n",
      VAR_2->disks[VAR_3].flags, VAR_2->disks[VAR_3].number,
      VAR_2->disks[VAR_3].channel, VAR_2->disks[VAR_3].device,
      VAR_2->disks[VAR_3].id);
 }
 FUNC_0("name                <%.32s>\n", VAR_2->name);
 FUNC_0("magic_3             0x%08x\n", VAR_2->magic_3);
 FUNC_0("rebuild_lba64       %ju\n", VAR_2->rebuild_lba64);
 FUNC_0("magic_4             0x%08x\n", VAR_2->magic_4);
 FUNC_0("magic_5             0x%08x\n", VAR_2->magic_5);
 FUNC_0("total_sectors_high  0x%08x\n", VAR_2->total_sectors_high);
 FUNC_0("sector_size         %u\n", VAR_2->sector_size);
 FUNC_0("backup_time         %d\n", VAR_2->backup_time);
 FUNC_0("disk_offset_high    0x%08x\n", VAR_2->disk_offset_high);
 FUNC_0("disk_sectors_high   0x%08x\n", VAR_2->disk_sectors_high);
 FUNC_0("disk_rebuild_high   0x%08x\n", VAR_2->disk_rebuild_high);
 FUNC_0("=================================================\n");
}
