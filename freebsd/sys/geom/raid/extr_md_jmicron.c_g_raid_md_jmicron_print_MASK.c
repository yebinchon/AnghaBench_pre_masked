
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jmicron_raid_conf {int* signature; int version; int checksum; int disk_id; int offset; int disk_sectors_high; int disk_sectors_low; char* name; int type; int stripe_shift; int flags; int* spare; int* disks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct jmicron_raid_conf *VAR_3)
{
 int VAR_4;

 if (VAR_2 < 1)
  return;

 FUNC_0("********* ATA JMicron RAID Metadata *********\n");
 FUNC_0("signature           <%c%c>\n", VAR_3->signature[0], VAR_3->signature[1]);
 FUNC_0("version             %04x\n", VAR_3->version);
 FUNC_0("checksum            0x%04x\n", VAR_3->checksum);
 FUNC_0("disk_id             0x%08x\n", VAR_3->disk_id);
 FUNC_0("offset              0x%08x\n", VAR_3->offset);
 FUNC_0("disk_sectors_high   0x%08x\n", VAR_3->disk_sectors_high);
 FUNC_0("disk_sectors_low    0x%04x\n", VAR_3->disk_sectors_low);
 FUNC_0("name                <%.16s>\n", VAR_3->name);
 FUNC_0("type                %d\n", VAR_3->type);
 FUNC_0("stripe_shift        %d\n", VAR_3->stripe_shift);
 FUNC_0("flags               %04x\n", VAR_3->flags);
 FUNC_0("spare              ");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_0(" 0x%08x", VAR_3->spare[VAR_4]);
 FUNC_0("\n");
 FUNC_0("disks              ");
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(" 0x%08x", VAR_3->disks[VAR_4]);
 FUNC_0("\n");
 FUNC_0("=================================================\n");
}
