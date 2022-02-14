
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ocfs2_super {unsigned long long local_alloc_bits; unsigned long long bitmap_cpg; int local_alloc_state; struct buffer_head* local_alloc_bh; int slot_num; int sb; } ;
struct ocfs2_local_alloc {scalar_t__ la_size; scalar_t__ la_bm_off; } ;
struct TYPE_4__ {scalar_t__ i_total; scalar_t__ i_used; } ;
struct TYPE_5__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; scalar_t__ i_flags; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_7 ;
 struct ocfs2_local_alloc* FUNC_1 (struct ocfs2_dinode*) ;
 int VAR_8 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 unsigned long long FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,unsigned long long,...) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 struct inode* FUNC_10 (struct ocfs2_super*,int ,int ) ;
 int FUNC_11 (struct ocfs2_dinode*) ;
 unsigned long long FUNC_12 (int ) ;
 unsigned long long FUNC_13 (int ,int ) ;
 int FUNC_14 (struct inode*,struct buffer_head**,int ) ;

int FUNC_15(struct ocfs2_super *VAR_9)
{
 int VAR_10 = 0;
 struct ocfs2_dinode *VAR_11 = ((void*)0);
 struct buffer_head *VAR_12 = ((void*)0);
 u32 VAR_13;
 struct inode *VAR_14 = ((void*)0);
 struct ocfs2_local_alloc *VAR_15;

 FUNC_7();

 if (VAR_9->local_alloc_bits == 0)
  goto bail;

 if (VAR_9->local_alloc_bits >= VAR_9->bitmap_cpg) {
  FUNC_6(VAR_3, "Requested local alloc window %d is larger "
       "than max possible %u. Using defaults.\n",
       VAR_9->local_alloc_bits, (VAR_9->bitmap_cpg - 1));
  VAR_9->local_alloc_bits =
   FUNC_13(VAR_9->sb,
          VAR_6);
 }


 VAR_14 = FUNC_10(VAR_9, VAR_1,
         VAR_9->slot_num);
 if (!VAR_14) {
  VAR_10 = -VAR_0;
  FUNC_8(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_14(VAR_14, &VAR_12,
          VAR_4);
 if (VAR_10 < 0) {
  FUNC_8(VAR_10);
  goto bail;
 }

 VAR_11 = (struct ocfs2_dinode *) VAR_12->b_data;
 VAR_15 = FUNC_1(VAR_11);

 if (!(FUNC_5(VAR_11->i_flags) &
     (VAR_8|VAR_5))) {
  FUNC_6(VAR_2, "Invalid local alloc inode, %llu\n",
       (unsigned long long)FUNC_0(VAR_14)->ip_blkno);
  VAR_10 = -VAR_0;
  goto bail;
 }

 if ((VAR_15->la_size == 0) ||
     (FUNC_4(VAR_15->la_size) > FUNC_12(VAR_14->i_sb))) {
  FUNC_6(VAR_2, "Local alloc size is invalid (la_size = %u)\n",
       FUNC_4(VAR_15->la_size));
  VAR_10 = -VAR_0;
  goto bail;
 }


 VAR_13 = FUNC_11(VAR_11);



 if (VAR_13
     || VAR_11->id1.bitmap1.i_used
     || VAR_11->id1.bitmap1.i_total
     || VAR_15->la_bm_off)
  FUNC_6(VAR_2, "Local alloc hasn't been recovered!\n"
       "found = %u, set = %u, taken = %u, off = %u\n",
       VAR_13, FUNC_5(VAR_11->id1.bitmap1.i_used),
       FUNC_5(VAR_11->id1.bitmap1.i_total),
       FUNC_1(VAR_11)->la_bm_off);

 VAR_9->local_alloc_bh = VAR_12;
 VAR_9->local_alloc_state = VAR_7;

bail:
 if (VAR_10 < 0)
  FUNC_2(VAR_12);
 if (VAR_14)
  FUNC_3(VAR_14);

 FUNC_6(0, "Local alloc window bits = %d\n", VAR_9->local_alloc_bits);

 FUNC_9(VAR_10);
 return VAR_10;
}
