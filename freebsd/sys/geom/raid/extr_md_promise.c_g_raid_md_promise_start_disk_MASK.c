
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct promise_raid_conf {scalar_t__ generation; int status; TYPE_1__* disks; } ;
struct g_raid_volume {int v_name; int v_disks_count; scalar_t__ v_raid_level; struct g_raid_subdisk* v_subdisks; struct g_raid_md_promise_pervolume* v_md_data; } ;
struct g_raid_subdisk {scalar_t__ sd_state; int sd_size; int sd_offset; int sd_rebuild_pos; struct g_raid_disk* sd_disk; } ;
struct g_raid_softc {int dummy; } ;
struct g_raid_md_promise_pervolume {int pv_started; struct promise_raid_conf* pv_meta; } ;
struct g_raid_md_promise_perdisk {int pd_subdisks; TYPE_5__** pd_meta; } ;
struct g_raid_disk {int d_subdisks; TYPE_4__* d_consumer; scalar_t__ d_md_data; struct g_raid_softc* d_softc; } ;
typedef int off_t ;
struct TYPE_8__ {int flags; int id; } ;
struct TYPE_11__ {int disk_offset; int disk_sectors; scalar_t__ generation; int disk_rebuild; scalar_t__ disk_rebuild_high; scalar_t__ disk_sectors_high; scalar_t__ disk_offset_high; TYPE_2__ disk; } ;
struct TYPE_10__ {TYPE_3__* provider; } ;
struct TYPE_9__ {int mediasize; int sectorsize; } ;
struct TYPE_7__ {int flags; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *,struct g_raid_subdisk*,int ) ;
 int FUNC_2 (int *,struct g_raid_subdisk*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (struct g_raid_disk*,int ) ;
 int FUNC_5 (struct g_raid_subdisk*,scalar_t__) ;
 int FUNC_6 (struct g_raid_subdisk*,int ,int ) ;
 int FUNC_7 (struct g_raid_disk*) ;
 int FUNC_8 (struct promise_raid_conf*,int ) ;
 int FUNC_9 (struct g_raid_volume*,int) ;
 int FUNC_10 (TYPE_5__**,int,int,int*,int*) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_11(struct g_raid_disk *VAR_20, int VAR_21,
    struct g_raid_volume *VAR_22)
{
 struct g_raid_softc *VAR_23;
 struct g_raid_subdisk *VAR_24;
 struct g_raid_md_promise_perdisk *VAR_25;
 struct g_raid_md_promise_pervolume *VAR_26;
 struct promise_raid_conf *VAR_27;
 off_t VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34 = 0;

 VAR_23 = VAR_20->d_softc;
 VAR_25 = (struct g_raid_md_promise_perdisk *)VAR_20->d_md_data;

 VAR_26 = VAR_22->v_md_data;
 VAR_27 = VAR_26->pv_meta;

 if (VAR_21 >= 0) {

  VAR_32 = FUNC_8(VAR_27, VAR_25->pd_meta[VAR_21]->disk.id);

  VAR_31 = FUNC_9(VAR_22, VAR_32);
 } else {
  VAR_32 = -1;
  VAR_31 = -1;
 }
 if (VAR_31 < 0) {
  FUNC_0(1, VAR_23, "Disk %s is not part of the volume %s",
      FUNC_7(VAR_20), VAR_22->v_name);

  if (VAR_21 >= 0 &&
      VAR_25->pd_meta[VAR_21]->disk.flags & VAR_15) {
   FUNC_4(VAR_20, VAR_3);
   return (0);
  }

  if (VAR_21 >= 0) {
   FUNC_3(VAR_25->pd_meta[VAR_21], VAR_14);
   for (VAR_33 = VAR_21; VAR_33 < VAR_25->pd_subdisks - 1; VAR_33++)
    VAR_25->pd_meta[VAR_33] = VAR_25->pd_meta[VAR_33 + 1];
   VAR_25->pd_meta[VAR_25->pd_subdisks - 1] = ((void*)0);
   VAR_25->pd_subdisks--;
  }

  if (!VAR_26->pv_started)
   goto nofit;




  FUNC_10(VAR_25->pd_meta, VAR_25->pd_subdisks,
      VAR_20->d_consumer->provider->mediasize /
      VAR_20->d_consumer->provider->sectorsize,
      &VAR_28, &VAR_29);
  if (VAR_29 == 0) {
   FUNC_0(1, VAR_23, "No free space on disk %s",
       FUNC_7(VAR_20));
   goto nofit;
  }
  VAR_30 = VAR_13;
  for (VAR_33 = 0; VAR_33 < VAR_22->v_disks_count; VAR_33++) {
   VAR_24 = &VAR_22->v_subdisks[VAR_33];
   if (VAR_24->sd_state != VAR_9)
    VAR_30 = VAR_24->sd_size;
   if (VAR_24->sd_state <= VAR_7 &&
       (VAR_31 < 0 ||
        VAR_22->v_subdisks[VAR_33].sd_state < VAR_24->sd_state))
    VAR_31 = VAR_33;
  }
  if (VAR_31 >= 0 &&
      VAR_22->v_raid_level != VAR_12 &&
      (off_t)VAR_29 * 512 < VAR_30) {
   FUNC_0(1, VAR_23, "Disk %s free space "
       "is too small (%ju < %ju)",
       FUNC_7(VAR_20),
       (off_t)VAR_29 * 512, VAR_30);
   VAR_31 = -1;
  }
  if (VAR_31 >= 0) {
   if (VAR_22->v_raid_level != VAR_12)
    VAR_29 = VAR_30 / 512;

   VAR_32 = FUNC_9(VAR_22, VAR_31);
  } else {
nofit:
   if (VAR_25->pd_subdisks == 0) {
    FUNC_4(VAR_20,
        VAR_2);
   }
   return (0);
  }
  FUNC_0(1, VAR_23, "Disk %s takes pos %d in the volume %s",
      FUNC_7(VAR_20), VAR_31, VAR_22->v_name);
  VAR_34 = 1;
 }

 VAR_24 = &VAR_22->v_subdisks[VAR_31];

 if (VAR_34 && VAR_24->sd_disk != ((void*)0)) {
  FUNC_4(VAR_24->sd_disk,
      VAR_3);
  FUNC_2(&VAR_24->sd_disk->d_subdisks,
      VAR_24, VAR_19);
 }
 VAR_22->v_subdisks[VAR_31].sd_disk = VAR_20;
 FUNC_1(&VAR_20->d_subdisks, VAR_24, VAR_19);


 if (VAR_34)
  FUNC_4(VAR_20, VAR_0);
 else if (VAR_27->disks[VAR_32].flags & VAR_15)
  FUNC_4(VAR_20, VAR_1);
 else
  FUNC_4(VAR_20, VAR_0);

 if (VAR_34) {
  VAR_24->sd_offset = (off_t)VAR_28 * 512;
  VAR_24->sd_size = (off_t)VAR_29 * 512;
 } else {
  VAR_24->sd_offset = (((off_t)VAR_25->pd_meta[VAR_21]->disk_offset_high
      << 32) + VAR_25->pd_meta[VAR_21]->disk_offset) * 512;
  VAR_24->sd_size = (((off_t)VAR_25->pd_meta[VAR_21]->disk_sectors_high
      << 32) + VAR_25->pd_meta[VAR_21]->disk_sectors) * 512;
 }

 if (VAR_34) {

  FUNC_5(VAR_24,
      VAR_8);
 } else if (VAR_27->disks[VAR_32].flags & VAR_15) {

  FUNC_5(VAR_24,
      VAR_7);
 } else if (VAR_27->disks[VAR_32].flags & VAR_17) {

  FUNC_5(VAR_24,
      VAR_10);
  if (VAR_25->pd_meta[VAR_21]->generation != VAR_27->generation)
   VAR_24->sd_rebuild_pos = 0;
  else {
   VAR_24->sd_rebuild_pos =
       (((off_t)VAR_25->pd_meta[VAR_21]->disk_rebuild_high << 32) +
        VAR_25->pd_meta[VAR_21]->disk_rebuild) * 512;
  }
 } else if (!(VAR_27->disks[VAR_32].flags & VAR_16)) {

  FUNC_5(VAR_24,
      VAR_8);
 } else if (VAR_25->pd_meta[VAR_21]->generation != VAR_27->generation ||
     (VAR_27->status & VAR_18)) {

  FUNC_5(VAR_24,
      VAR_11);
 } else {

  FUNC_5(VAR_24,
      VAR_6);
 }
 FUNC_6(VAR_24, VAR_5,
     VAR_4);

 return (VAR_34);
}
