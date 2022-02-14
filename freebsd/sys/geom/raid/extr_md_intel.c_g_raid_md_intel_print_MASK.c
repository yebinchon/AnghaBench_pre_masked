
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_raid_vol {char* name; int reserved; int migr_priority; int num_sub_vols; int tid; int cng_master_disk; int cache_policy; int cng_state; int cng_sub_state; int curr_migr_unit; int curr_migr_unit_hi; int checkpoint_id; int migr_state; int migr_type; int dirty; int fs_state; int verify_errors; int bad_blocks; int state; int total_sectors; } ;
struct intel_raid_map {int offset; int offset_hi; int disk_sectors; int disk_sectors_hi; int stripe_count; int stripe_count_hi; int strip_sectors; int status; int type; int total_disks; int total_domains; int failed_disk_num; int ddf; int* disk_idx; } ;
struct intel_raid_conf {char* intel_id; char* version; int checksum; int config_size; int config_id; int generation; int error_log_size; int total_disks; int total_volumes; int error_log_pos; int cache_size; int orig_config_id; int pwr_cycle_count; int bbm_log_size; TYPE_1__* disk; int attributes; } ;
struct TYPE_2__ {char* serial; int sectors; int sectors_hi; int id; int owner_cfg_num; int flags; } ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 struct intel_raid_map* FUNC_1 (struct intel_raid_vol*,int) ;
 struct intel_raid_vol* FUNC_2 (struct intel_raid_conf*,int) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(struct intel_raid_conf *VAR_1)
{
 struct intel_raid_vol *VAR_2;
 struct intel_raid_map *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if (VAR_0 < 1)
  return;

 FUNC_6("********* ATA Intel MatrixRAID Metadata *********\n");
 FUNC_6("intel_id            <%.24s>\n", VAR_1->intel_id);
 FUNC_6("version             <%.6s>\n", VAR_1->version);
 FUNC_6("checksum            0x%08x\n", VAR_1->checksum);
 FUNC_6("config_size         0x%08x\n", VAR_1->config_size);
 FUNC_6("config_id           0x%08x\n", VAR_1->config_id);
 FUNC_6("generation          0x%08x\n", VAR_1->generation);
 FUNC_6("error_log_size      %d\n", VAR_1->error_log_size);
 FUNC_6("attributes          0x%b\n", VAR_1->attributes,
  "\020"
  "\001RAID0"
  "\002RAID1"
  "\003RAID10"
  "\004RAID1E"
  "\005RAID15"
  "\006RAIDCNG"
  "\007EXT_STRIP"
  "\032NVM_CACHE"
  "\0332TB_DISK"
  "\034BBM"
  "\035NVM_CACHE"
  "\0362TB"
  "\037PM"
  "\040CHECKSUM");
 FUNC_6("total_disks         %u\n", VAR_1->total_disks);
 FUNC_6("total_volumes       %u\n", VAR_1->total_volumes);
 FUNC_6("error_log_pos       %u\n", VAR_1->error_log_pos);
 FUNC_6("cache_size          %u\n", VAR_1->cache_size);
 FUNC_6("orig_config_id      0x%08x\n", VAR_1->orig_config_id);
 FUNC_6("pwr_cycle_count     %u\n", VAR_1->pwr_cycle_count);
 FUNC_6("bbm_log_size        %u\n", VAR_1->bbm_log_size);
 FUNC_6("Flags: S - Spare, A - Assigned, F - Failed, O - Online, D - Disabled\n");
 FUNC_6("DISK#   serial disk_sectors disk_sectors_hi disk_id flags owner\n");
 for (VAR_4 = 0; VAR_4 < VAR_1->total_disks; VAR_4++ ) {
  FUNC_6("    %d   <%.16s> %u %u 0x%08x 0x%b %08x\n", VAR_4,
      VAR_1->disk[VAR_4].serial, VAR_1->disk[VAR_4].sectors,
      VAR_1->disk[VAR_4].sectors_hi, VAR_1->disk[VAR_4].id,
      VAR_1->disk[VAR_4].flags, "\20\01S\02A\03F\04O\05D",
      VAR_1->disk[VAR_4].owner_cfg_num);
 }
 for (VAR_4 = 0; VAR_4 < VAR_1->total_volumes; VAR_4++) {
  VAR_2 = FUNC_2(VAR_1, VAR_4);
  FUNC_6(" ****** Volume %d ******\n", VAR_4);
  FUNC_6(" name               %.16s\n", VAR_2->name);
  FUNC_6(" total_sectors      %ju\n", VAR_2->total_sectors);
  FUNC_6(" state              0x%b\n", VAR_2->state,
   "\020"
   "\001BOOTABLE"
   "\002BOOT_DEVICE"
   "\003READ_COALESCING"
   "\004WRITE_COALESCING"
   "\005LAST_SHUTDOWN_DIRTY"
   "\006HIDDEN_AT_BOOT"
   "\007CURRENTLY_HIDDEN"
   "\010VERIFY_AND_FIX"
   "\011MAP_STATE_UNINIT"
   "\012NO_AUTO_RECOVERY"
   "\013CLONE_N_GO"
   "\014CLONE_MAN_SYNC"
   "\015CNG_MASTER_DISK_NUM");
  FUNC_6(" reserved           %u\n", VAR_2->reserved);
  FUNC_6(" migr_priority      %u\n", VAR_2->migr_priority);
  FUNC_6(" num_sub_vols       %u\n", VAR_2->num_sub_vols);
  FUNC_6(" tid                %u\n", VAR_2->tid);
  FUNC_6(" cng_master_disk    %u\n", VAR_2->cng_master_disk);
  FUNC_6(" cache_policy       %u\n", VAR_2->cache_policy);
  FUNC_6(" cng_state          %u (%s)\n", VAR_2->cng_state,
   FUNC_0(VAR_2->cng_state));
  FUNC_6(" cng_sub_state      %u\n", VAR_2->cng_sub_state);
  FUNC_6(" curr_migr_unit     %u\n", VAR_2->curr_migr_unit);
  FUNC_6(" curr_migr_unit_hi  %u\n", VAR_2->curr_migr_unit_hi);
  FUNC_6(" checkpoint_id      %u\n", VAR_2->checkpoint_id);
  FUNC_6(" migr_state         %u\n", VAR_2->migr_state);
  FUNC_6(" migr_type          %u (%s)\n", VAR_2->migr_type,
   FUNC_3(VAR_2->migr_type));
  FUNC_6(" dirty              %u\n", VAR_2->dirty);
  FUNC_6(" fs_state           %u\n", VAR_2->fs_state);
  FUNC_6(" verify_errors      %u\n", VAR_2->verify_errors);
  FUNC_6(" bad_blocks         %u\n", VAR_2->bad_blocks);

  for (VAR_5 = 0; VAR_5 < (VAR_2->migr_state ? 2 : 1); VAR_5++) {
   FUNC_6("  *** Map %d ***\n", VAR_5);
   VAR_3 = FUNC_1(VAR_2, VAR_5);
   FUNC_6("  offset            %u\n", VAR_3->offset);
   FUNC_6("  offset_hi         %u\n", VAR_3->offset_hi);
   FUNC_6("  disk_sectors      %u\n", VAR_3->disk_sectors);
   FUNC_6("  disk_sectors_hi   %u\n", VAR_3->disk_sectors_hi);
   FUNC_6("  stripe_count      %u\n", VAR_3->stripe_count);
   FUNC_6("  stripe_count_hi   %u\n", VAR_3->stripe_count_hi);
   FUNC_6("  strip_sectors     %u\n", VAR_3->strip_sectors);
   FUNC_6("  status            %u (%s)\n", VAR_3->status,
    FUNC_4(VAR_3->status));
   FUNC_6("  type              %u (%s)\n", VAR_3->type,
    FUNC_5(VAR_3->type));
   FUNC_6("  total_disks       %u\n", VAR_3->total_disks);
   FUNC_6("  total_domains     %u\n", VAR_3->total_domains);
   FUNC_6("  failed_disk_num   %u\n", VAR_3->failed_disk_num);
   FUNC_6("  ddf               %u\n", VAR_3->ddf);
   FUNC_6("  disk_idx         ");
   for (VAR_6 = 0; VAR_6 < VAR_3->total_disks; VAR_6++)
    FUNC_6(" 0x%08x", VAR_3->disk_idx[VAR_6]);
   FUNC_6("\n");
  }
 }
 FUNC_6("=================================================\n");
}
