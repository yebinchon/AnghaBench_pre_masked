
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_truncate_log {int tl_used; } ;
struct ocfs2_super {struct buffer_head* osb_tl_bh; struct inode* osb_tl_inode; } ;
struct TYPE_3__ {struct ocfs2_truncate_log i_dealloc; } ;
struct ocfs2_dinode {TYPE_1__ id2; } ;
struct inode {int i_mutex; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int FUNC_3 (struct ocfs2_dinode*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ocfs2_super*,int *) ;
 struct inode* FUNC_16 (struct ocfs2_super*,int ,int ) ;
 int FUNC_17 (struct inode*,struct buffer_head**,int) ;
 int FUNC_18 (struct inode*,int) ;
 int FUNC_19 (struct ocfs2_super*,int *,struct inode*,struct buffer_head*) ;
 int * FUNC_20 (struct ocfs2_super*,int ) ;

int FUNC_21(struct ocfs2_super *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;
 handle_t *VAR_8;
 struct inode *VAR_9 = VAR_5->osb_tl_inode;
 struct inode *VAR_10 = ((void*)0);
 struct buffer_head *VAR_11 = VAR_5->osb_tl_bh;
 struct buffer_head *VAR_12 = ((void*)0);
 struct ocfs2_dinode *VAR_13;
 struct ocfs2_truncate_log *VAR_14;

 FUNC_9();

 FUNC_0(FUNC_13(&VAR_9->i_mutex));

 VAR_13 = (struct ocfs2_dinode *) VAR_11->b_data;




 FUNC_0(!FUNC_3(VAR_13));

 VAR_14 = &VAR_13->id2.i_dealloc;
 VAR_7 = FUNC_7(VAR_14->tl_used);
 FUNC_8(0, "Flush %u records from truncate log #%llu\n",
      VAR_7, (unsigned long long)FUNC_2(VAR_9)->ip_blkno);
 if (!VAR_7) {
  VAR_6 = 0;
  goto out;
 }

 VAR_10 = FUNC_16(VAR_5,
             VAR_1,
             VAR_3);
 if (!VAR_10) {
  VAR_6 = -VAR_0;
  FUNC_8(VAR_2, "Could not get bitmap inode!\n");
  goto out;
 }

 FUNC_12(&VAR_10->i_mutex);

 VAR_6 = FUNC_17(VAR_10, &VAR_12, 1);
 if (VAR_6 < 0) {
  FUNC_10(VAR_6);
  goto out_mutex;
 }

 VAR_8 = FUNC_20(VAR_5, VAR_4);
 if (FUNC_1(VAR_8)) {
  VAR_6 = FUNC_4(VAR_8);
  FUNC_10(VAR_6);
  goto out_unlock;
 }

 VAR_6 = FUNC_19(VAR_5, VAR_8, VAR_10,
            VAR_12);
 if (VAR_6 < 0)
  FUNC_10(VAR_6);

 FUNC_15(VAR_5, VAR_8);

out_unlock:
 FUNC_5(VAR_12);
 FUNC_18(VAR_10, 1);

out_mutex:
 FUNC_14(&VAR_10->i_mutex);
 FUNC_6(VAR_10);

out:
 FUNC_11(VAR_6);
 return VAR_6;
}
