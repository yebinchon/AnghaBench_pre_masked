
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int bg_extends; } ;
struct ocfs2_super {TYPE_1__ alloc_stats; } ;
struct TYPE_5__ {int i_used; int i_total; } ;
struct TYPE_6__ {TYPE_2__ bitmap1; } ;
struct ocfs2_dinode {int i_flags; TYPE_3__ id1; int i_blkno; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_wanted; struct buffer_head* ac_bh; int ac_max_block; scalar_t__ ac_alloc_slot; struct inode* ac_inode; } ;
struct inode {int i_sb; int i_mutex; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int *,int) ;
 int FUNC_16 (int ,char*,unsigned long long) ;
 struct inode* FUNC_17 (struct ocfs2_super*,int,scalar_t__) ;
 int FUNC_18 (struct inode*,struct buffer_head**,int) ;
 scalar_t__ FUNC_19 (struct inode*) ;

__attribute__((used)) static int FUNC_20(struct ocfs2_super *VAR_5,
           struct ocfs2_alloc_context *VAR_6,
           int VAR_7,
           u32 VAR_8,
           u64 *VAR_9,
           int VAR_10)
{
 int VAR_11;
 u32 VAR_12 = VAR_6->ac_bits_wanted;
 struct inode *VAR_13;
 struct buffer_head *VAR_14 = ((void*)0);
 struct ocfs2_dinode *VAR_15;
 u32 VAR_16;

 FUNC_10();

 VAR_13 = FUNC_17(VAR_5, VAR_7, VAR_8);
 if (!VAR_13) {
  FUNC_11(-VAR_1);
  return -VAR_1;
 }

 FUNC_13(&VAR_13->i_mutex);

 VAR_11 = FUNC_18(VAR_13, &VAR_14, 1);
 if (VAR_11 < 0) {
  FUNC_14(&VAR_13->i_mutex);
  FUNC_6(VAR_13);

  FUNC_11(VAR_11);
  return VAR_11;
 }

 VAR_6->ac_inode = VAR_13;
 VAR_6->ac_alloc_slot = VAR_8;

 VAR_15 = (struct ocfs2_dinode *) VAR_14->b_data;



 FUNC_0(!FUNC_1(VAR_15));

 if (!(VAR_15->i_flags & FUNC_4(VAR_4))) {
  FUNC_16(VAR_13->i_sb, "Invalid chain allocator %llu",
       (unsigned long long)FUNC_8(VAR_15->i_blkno));
  VAR_11 = -VAR_2;
  goto bail;
 }

 VAR_16 = FUNC_7(VAR_15->id1.bitmap1.i_total) -
  FUNC_7(VAR_15->id1.bitmap1.i_used);

 if (VAR_12 > VAR_16) {

  if (FUNC_19(VAR_13)) {
   FUNC_9(0, "Disk Full: wanted=%u, free_bits=%u\n",
        VAR_12, VAR_16);
   VAR_11 = -VAR_3;
   goto bail;
  }

  if (!(VAR_10 & VAR_0)) {
   FUNC_9(0, "Alloc File %u Full: wanted=%u, free_bits=%u, "
        "and we don't alloc a new group for it.\n",
        VAR_8, VAR_12, VAR_16);
   VAR_11 = -VAR_3;
   goto bail;
  }

  VAR_11 = FUNC_15(VAR_5, VAR_13, VAR_14,
       VAR_6->ac_max_block,
       VAR_9, VAR_10);
  if (VAR_11 < 0) {
   if (VAR_11 != -VAR_3)
    FUNC_11(VAR_11);
   goto bail;
  }
  FUNC_2(&VAR_5->alloc_stats.bg_extends);


  FUNC_0(VAR_12 >
         (FUNC_7(VAR_15->id1.bitmap1.i_total)
   - FUNC_7(VAR_15->id1.bitmap1.i_used)));
 }

 FUNC_5(VAR_14);
 VAR_6->ac_bh = VAR_14;
bail:
 FUNC_3(VAR_14);

 FUNC_12(VAR_11);
 return VAR_11;
}
