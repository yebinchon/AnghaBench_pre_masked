
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_truncate_log {TYPE_2__* tl_recs; int tl_used; int tl_count; } ;
struct ocfs2_super {int sb; struct buffer_head* osb_tl_bh; struct inode* osb_tl_inode; } ;
struct TYPE_4__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int i_mutex; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;
struct TYPE_5__ {void* t_clusters; void* t_start; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct ocfs2_dinode*) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 void* FUNC_5 (unsigned int) ;
 void* FUNC_6 (int ) ;
 unsigned int FUNC_7 (void*) ;
 int FUNC_8 (int ,char*,int,unsigned int,unsigned int,...) ;
 int FUNC_9 (int,char*,unsigned long long,unsigned int,void*) ;
 int FUNC_10 (char*,unsigned long long,unsigned int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 unsigned int FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_16 (int *,struct buffer_head*) ;
 scalar_t__ FUNC_17 (struct ocfs2_truncate_log*,unsigned int) ;
 unsigned int FUNC_18 (int ) ;

int FUNC_19(struct ocfs2_super *VAR_2,
         handle_t *VAR_3,
         u64 VAR_4,
         unsigned int VAR_5)
{
 int VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9;
 struct inode *VAR_10 = VAR_2->osb_tl_inode;
 struct buffer_head *VAR_11 = VAR_2->osb_tl_bh;
 struct ocfs2_dinode *VAR_12;
 struct ocfs2_truncate_log *VAR_13;

 FUNC_10("start_blk = %llu, num_clusters = %u\n",
     (unsigned long long)VAR_4, VAR_5);

 FUNC_0(FUNC_13(&VAR_10->i_mutex));

 VAR_8 = FUNC_14(VAR_2->sb, VAR_4);

 VAR_12 = (struct ocfs2_dinode *) VAR_11->b_data;




 FUNC_0(!FUNC_3(VAR_12));

 VAR_13 = &VAR_12->id2.i_dealloc;
 VAR_9 = FUNC_6(VAR_13->tl_count);
 FUNC_9(VAR_9 > FUNC_18(VAR_2->sb) ||
   VAR_9 == 0,
   "Truncate record count on #%llu invalid "
   "wanted %u, actual %u\n",
   (unsigned long long)FUNC_2(VAR_10)->ip_blkno,
   FUNC_18(VAR_2->sb),
   FUNC_6(VAR_13->tl_count));


 VAR_7 = FUNC_6(VAR_13->tl_used);
 if (VAR_7 >= VAR_9) {
  VAR_6 = -VAR_0;
  FUNC_11(VAR_6);
  goto bail;
 }

 VAR_6 = FUNC_15(VAR_3, FUNC_1(VAR_10), VAR_11,
      VAR_1);
 if (VAR_6 < 0) {
  FUNC_11(VAR_6);
  goto bail;
 }

 FUNC_8(0, "Log truncate of %u clusters starting at cluster %u to "
      "%llu (index = %d)\n", VAR_5, VAR_8,
      (unsigned long long)FUNC_2(VAR_10)->ip_blkno, VAR_7);

 if (FUNC_17(VAR_13, VAR_8)) {




  VAR_7--;

  VAR_5 += FUNC_7(VAR_13->tl_recs[VAR_7].t_clusters);
  FUNC_8(0, "Coalesce with index %u (start = %u, clusters = %u)\n",
       VAR_7, FUNC_7(VAR_13->tl_recs[VAR_7].t_start),
       VAR_5);
 } else {
  VAR_13->tl_recs[VAR_7].t_start = FUNC_5(VAR_8);
  VAR_13->tl_used = FUNC_4(VAR_7 + 1);
 }
 VAR_13->tl_recs[VAR_7].t_clusters = FUNC_5(VAR_5);

 VAR_6 = FUNC_16(VAR_3, VAR_11);
 if (VAR_6 < 0) {
  FUNC_11(VAR_6);
  goto bail;
 }

bail:
 FUNC_12(VAR_6);
 return VAR_6;
}
