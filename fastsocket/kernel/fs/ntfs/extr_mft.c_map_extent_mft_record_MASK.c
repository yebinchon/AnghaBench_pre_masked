
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_21__ {TYPE_3__** extent_ntfs_inos; TYPE_3__* base_ntfs_ino; } ;
struct TYPE_22__ {unsigned long mft_no; int nr_extents; int count; int extent_lock; TYPE_2__ ext; TYPE_1__* vol; scalar_t__ seq_no; } ;
typedef TYPE_3__ ntfs_inode ;
struct TYPE_23__ {int sequence_number; } ;
struct TYPE_20__ {int sb; } ;
typedef int MFT_REF ;
typedef TYPE_4__ MFT_RECORD ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__**) ;
 TYPE_3__** FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;
 TYPE_4__* FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__**,TYPE_3__**,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (int ,char*,...) ;
 TYPE_3__* FUNC_19 (int ,unsigned long) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (TYPE_3__*) ;

MFT_RECORD *FUNC_22(ntfs_inode *VAR_3, MFT_REF VAR_4,
  ntfs_inode **VAR_5)
{
 MFT_RECORD *VAR_6;
 ntfs_inode *VAR_7 = ((void*)0);
 ntfs_inode **VAR_8 = ((void*)0);
 int VAR_9;
 unsigned long VAR_10 = FUNC_3(VAR_4);
 u16 VAR_11 = FUNC_4(VAR_4);
 bool VAR_12 = 0;

 FUNC_17("Mapping extent mft record 0x%lx (base mft record 0x%lx).",
   VAR_10, VAR_3->mft_no);

 FUNC_7(&VAR_3->count);





 FUNC_14(&VAR_3->extent_lock);
 if (VAR_3->nr_extents > 0) {
  VAR_8 = VAR_3->ext.extent_ntfs_inos;
  for (VAR_9 = 0; VAR_9 < VAR_3->nr_extents; VAR_9++) {
   if (VAR_10 != VAR_8[VAR_9]->mft_no)
    continue;
   VAR_7 = VAR_8[VAR_9];

   FUNC_7(&VAR_7->count);
   break;
  }
 }
 if (FUNC_11(VAR_7 != ((void*)0))) {
  FUNC_15(&VAR_3->extent_lock);
  FUNC_6(&VAR_3->count);

  VAR_6 = FUNC_12(VAR_7);

  FUNC_6(&VAR_7->count);
  if (FUNC_11(!FUNC_2(VAR_6))) {

   if (FUNC_11(FUNC_10(VAR_6->sequence_number) == VAR_11)) {
    FUNC_17("Done 1.");
    *VAR_5 = VAR_7;
    return VAR_6;
   }
   FUNC_21(VAR_7);
   FUNC_18(VAR_3->vol->sb, "Found stale extent mft "
     "reference! Corrupt filesystem. "
     "Run chkdsk.");
   return FUNC_1(-VAR_0);
  }
map_err_out:
  FUNC_18(VAR_3->vol->sb, "Failed to map extent "
    "mft record, error code %ld.", -FUNC_5(VAR_6));
  return VAR_6;
 }

 VAR_7 = FUNC_19(VAR_3->vol->sb, VAR_10);
 if (FUNC_20(!VAR_7)) {
  FUNC_15(&VAR_3->extent_lock);
  FUNC_6(&VAR_3->count);
  return FUNC_1(-VAR_1);
 }
 VAR_7->vol = VAR_3->vol;
 VAR_7->seq_no = VAR_11;
 VAR_7->nr_extents = -1;
 VAR_7->ext.base_ntfs_ino = VAR_3;

 VAR_6 = FUNC_12(VAR_7);
 if (FUNC_2(VAR_6)) {
  FUNC_15(&VAR_3->extent_lock);
  FUNC_6(&VAR_3->count);
  FUNC_16(VAR_7);
  goto map_err_out;
 }

 if (VAR_11 && (FUNC_10(VAR_6->sequence_number) != VAR_11)) {
  FUNC_18(VAR_3->vol->sb, "Found stale extent mft "
    "reference! Corrupt filesystem. Run chkdsk.");
  VAR_12 = 1;
  VAR_6 = FUNC_1(-VAR_0);
  goto unm_err_out;
 }

 if (!(VAR_3->nr_extents & 3)) {
  ntfs_inode **VAR_13;
  int VAR_14 = (VAR_3->nr_extents + 4) * sizeof(ntfs_inode *);

  VAR_13 = FUNC_9(VAR_14, VAR_2);
  if (FUNC_20(!VAR_13)) {
   FUNC_18(VAR_3->vol->sb, "Failed to allocate "
     "internal buffer.");
   VAR_12 = 1;
   VAR_6 = FUNC_1(-VAR_1);
   goto unm_err_out;
  }
  if (VAR_3->nr_extents) {
   FUNC_0(!VAR_3->ext.extent_ntfs_inos);
   FUNC_13(VAR_13, VAR_3->ext.extent_ntfs_inos, VAR_14 -
     4 * sizeof(ntfs_inode *));
   FUNC_8(VAR_3->ext.extent_ntfs_inos);
  }
  VAR_3->ext.extent_ntfs_inos = VAR_13;
 }
 VAR_3->ext.extent_ntfs_inos[VAR_3->nr_extents++] = VAR_7;
 FUNC_15(&VAR_3->extent_lock);
 FUNC_6(&VAR_3->count);
 FUNC_17("Done 2.");
 *VAR_5 = VAR_7;
 return VAR_6;
unm_err_out:
 FUNC_21(VAR_7);
 FUNC_15(&VAR_3->extent_lock);
 FUNC_6(&VAR_3->count);




 if (VAR_12)
  FUNC_16(VAR_7);
 return VAR_6;
}
