
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct the_nilfs {scalar_t__ ns_last_pseg; int ns_mount_state; void* ns_last_cno; void* ns_seg_seq; void* ns_last_seq; void* ns_nextnum; int ns_ctime; void* ns_cno; void* ns_segnum; scalar_t__ ns_pseg_offset; } ;
struct nilfs_segsum_info {scalar_t__ nblocks; scalar_t__ next; int ctime; } ;
struct nilfs_sb_info {int dummy; } ;
struct TYPE_2__ {int prev; } ;
struct nilfs_recovery_info {void* ri_cno; TYPE_1__ ri_used_segments; int ri_need_recovery; scalar_t__ ri_lsegs_end; scalar_t__ ri_lsegs_start; scalar_t__ ri_super_root; void* ri_lsegs_start_seq; void* ri_nextnum; void* ri_segnum; void* ri_seq; scalar_t__ ri_pseg_start; } ;
typedef scalar_t__ sector_t ;
typedef void* __u64 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nilfs_segsum_info*) ;
 scalar_t__ FUNC_2 (struct nilfs_segsum_info*) ;
 scalar_t__ FUNC_3 (struct nilfs_segsum_info*) ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct nilfs_sb_info*,scalar_t__,void*,struct nilfs_segsum_info*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct the_nilfs*,void*,scalar_t__*,scalar_t__*) ;
 void* FUNC_8 (struct the_nilfs*,scalar_t__) ;
 int FUNC_9 (int *,void*) ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct the_nilfs *VAR_5, struct nilfs_sb_info *VAR_6,
       struct nilfs_recovery_info *VAR_7)
{
 struct nilfs_segsum_info VAR_8;
 sector_t VAR_9, VAR_10, VAR_11 = 0;
 sector_t VAR_12, VAR_13;
 u64 VAR_14;
 __u64 VAR_15, VAR_16 = 0;
 __u64 VAR_17;
 FUNC_0(VAR_4);
 int VAR_18 = 0, VAR_19 = 0;
 int VAR_20;

 VAR_9 = VAR_5->ns_last_pseg;
 VAR_14 = VAR_5->ns_last_seq;
 VAR_17 = VAR_5->ns_last_cno;
 VAR_15 = FUNC_8(VAR_5, VAR_9);


 FUNC_7(VAR_5, VAR_15, &VAR_12, &VAR_13);

 for (;;) {

  VAR_20 = FUNC_5(VAR_6, VAR_9, VAR_14, &VAR_8, 1);
  if (VAR_20) {
   if (VAR_20 == VAR_2)
    goto failed;
   goto strayed;
  }
  VAR_10 = VAR_9 + VAR_8.nblocks - 1;
  if (FUNC_11(VAR_10 > VAR_13)) {
   VAR_20 = VAR_1;
   goto strayed;
  }


  VAR_7->ri_pseg_start = VAR_9;
  VAR_7->ri_seq = VAR_14;
  VAR_7->ri_segnum = VAR_15;
  VAR_16 = FUNC_8(VAR_5, VAR_8.next);
  VAR_7->ri_nextnum = VAR_16;
  VAR_18 = 0;

  if (!FUNC_1(&VAR_8)) {
   if (!VAR_19) {



    VAR_20 = VAR_1;
    goto failed;
   }
   if (!VAR_7->ri_lsegs_start && FUNC_2(&VAR_8)) {
    VAR_7->ri_lsegs_start = VAR_9;
    VAR_7->ri_lsegs_start_seq = VAR_14;
   }
   if (FUNC_3(&VAR_8))
    VAR_7->ri_lsegs_end = VAR_9;
   goto try_next_pseg;
  }


  VAR_7->ri_cno = VAR_17++;
  VAR_7->ri_super_root = VAR_10;
  VAR_7->ri_lsegs_start = VAR_7->ri_lsegs_end = 0;

  FUNC_6(&VAR_4);
  VAR_5->ns_pseg_offset = (VAR_11 = VAR_9)
   + VAR_8.nblocks - VAR_12;
  VAR_5->ns_seg_seq = VAR_14;
  VAR_5->ns_segnum = VAR_15;
  VAR_5->ns_cno = VAR_17;
  VAR_5->ns_ctime = VAR_8.ctime;
  VAR_5->ns_nextnum = VAR_16;

  if (VAR_19)
   VAR_7->ri_need_recovery = VAR_0;
  else {
   if (VAR_5->ns_mount_state & VAR_3)
    goto super_root_found;
   VAR_19 = 1;
  }


  VAR_9 += VAR_8.nblocks;
  if (VAR_9 < VAR_13)
   continue;
  goto feed_segment;

 try_next_pseg:

  VAR_9 += VAR_8.nblocks;
  if (VAR_9 < VAR_13)
   continue;
  goto feed_segment;

 strayed:

  if (!VAR_19)




   goto failed;

 feed_segment:

  if (VAR_18++)
   goto super_root_found;

  VAR_20 = FUNC_9(&VAR_4, VAR_15);
  if (FUNC_11(VAR_20))
   goto failed;

  VAR_14++;
  VAR_15 = VAR_16;
  FUNC_7(VAR_5, VAR_15, &VAR_12, &VAR_13);
  VAR_9 = VAR_12;
 }

 super_root_found:

 FUNC_4(&VAR_4, VAR_7->ri_used_segments.prev);
 VAR_5->ns_last_pseg = VAR_11;
 VAR_5->ns_last_seq = VAR_5->ns_seg_seq;
 VAR_5->ns_last_cno = VAR_7->ri_cno;
 return 0;

 failed:
 FUNC_6(&VAR_4);
 return (VAR_20 < 0) ? VAR_20 : FUNC_10(VAR_20);
}
