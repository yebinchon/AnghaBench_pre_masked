
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct promise_raid_conf {scalar_t__ checksum; int integrity; int total_disks; int disk_offset_high; int disk_sectors_high; int disk_rebuild_high; int disk_rebuild; int total_sectors_high; int rebuild_lba64; int sector_size; scalar_t__ backup_time; int promise_id; } ;
struct g_provider {int sectorsize; int name; scalar_t__ mediasize; } ;
struct g_consumer {struct g_provider* provider; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct promise_raid_conf*,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (struct g_consumer*,scalar_t__,int,int*) ;
 struct promise_raid_conf* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct promise_raid_conf*,char*,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct g_consumer *VAR_11, struct promise_raid_conf **VAR_12)
{
 struct g_provider *VAR_13;
 struct promise_raid_conf *VAR_14;
 char *VAR_15;
 int VAR_16, VAR_17, VAR_18;
 uint32_t VAR_19, *VAR_20;

 VAR_13 = VAR_11->provider;
 VAR_18 = 0;

 if (VAR_13->sectorsize * 4 > VAR_1) {
  FUNC_0(1, "%s: Blocksize is too big.", VAR_13->name);
  return (VAR_18);
 }
next:

 VAR_15 = FUNC_4(VAR_11, VAR_13->mediasize - VAR_13->sectorsize *
     (63 - VAR_18 * VAR_8),
     VAR_13->sectorsize * 4, &VAR_16);
 if (VAR_15 == ((void*)0)) {
  FUNC_0(1, "Cannot read metadata from %s (error=%d).",
      VAR_13->name, VAR_16);
  return (VAR_18);
 }
 VAR_14 = (struct promise_raid_conf *)VAR_15;


 if (FUNC_8(VAR_14->promise_id, VAR_5, FUNC_7(VAR_5)) &&
     FUNC_8(VAR_14->promise_id, VAR_0, FUNC_7(VAR_0))) {
  if (VAR_18 == 0)
   FUNC_0(1,
       "Promise signature check failed on %s", VAR_13->name);
  FUNC_3(VAR_15);
  return (VAR_18);
 }
 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_2, VAR_3);
 FUNC_6(VAR_14, VAR_15, FUNC_1(sizeof(*VAR_14), VAR_13->sectorsize * 4));
 FUNC_3(VAR_15);


 for (VAR_19 = 0, VAR_20 = (uint32_t *)VAR_14, VAR_17 = 0; VAR_17 < 511; VAR_17++)
  VAR_19 += *VAR_20++;
 if (VAR_19 != VAR_14->checksum) {
  FUNC_0(1, "Promise checksum check failed on %s", VAR_13->name);
  FUNC_2(VAR_14, VAR_2);
  return (VAR_18);
 }

 if ((VAR_14->integrity & VAR_4) == 0) {
  FUNC_0(1, "Promise metadata is invalid on %s", VAR_13->name);
  FUNC_2(VAR_14, VAR_2);
  return (VAR_18);
 }

 if (VAR_14->total_disks > VAR_6) {
  FUNC_0(1, "Wrong number of disks on %s (%d)",
      VAR_13->name, VAR_14->total_disks);
  FUNC_2(VAR_14, VAR_2);
  return (VAR_18);
 }


 if (VAR_14->disk_offset_high == 0x8b8c8d8e &&
     VAR_14->disk_sectors_high == 0x8788898a &&
     VAR_14->disk_rebuild_high == 0x83848586) {
  VAR_14->disk_offset_high = 0;
  VAR_14->disk_sectors_high = 0;
  if (VAR_14->disk_rebuild == VAR_9)
   VAR_14->disk_rebuild_high = VAR_9;
  else
   VAR_14->disk_rebuild_high = 0;
  if (VAR_14->total_sectors_high == 0x15161718) {
   VAR_14->total_sectors_high = 0;
   VAR_14->backup_time = 0;
   if (VAR_14->rebuild_lba64 == 0x2122232425262728)
    VAR_14->rebuild_lba64 = VAR_10;
  }
 }
 if (VAR_14->sector_size < 1 || VAR_14->sector_size > 8)
  VAR_14->sector_size = 1;


 *VAR_12 = VAR_14;
 VAR_12++;
 VAR_18++;
 if (VAR_18 < VAR_7)
  goto next;

 return (VAR_18);
}
