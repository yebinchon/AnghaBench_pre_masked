
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int dummy; } ;
struct ocfs2_inode_info {int ip_flags; scalar_t__ ip_blkno; int ip_lock; struct ocfs2_lock_res ip_inode_lockres; } ;
struct ocfs2_dinode {int i_generation; int i_flags; int i_dtime; } ;
struct inode {scalar_t__ i_generation; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct ocfs2_inode_info* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 unsigned long long FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,unsigned long long,...) ;
 int FUNC_7 (int,char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct ocfs2_lock_res*,int) ;
 int FUNC_12 (struct inode*,int ) ;
 scalar_t__ FUNC_13 (struct inode*,struct ocfs2_lock_res*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct ocfs2_super*) ;
 int FUNC_16 (struct inode*,struct buffer_head**) ;
 int FUNC_17 (struct inode*,struct ocfs2_dinode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct ocfs2_lock_res*) ;
 int FUNC_20 (struct ocfs2_lock_res*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_3,
      struct buffer_head **VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_inode_info *VAR_6 = FUNC_1(VAR_3);
 struct ocfs2_lock_res *VAR_7 = &VAR_6->ip_inode_lockres;
 struct ocfs2_dinode *VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_2(VAR_3->i_sb);

 FUNC_8();

 if (FUNC_15(VAR_9))
  goto bail;

 FUNC_21(&VAR_6->ip_lock);
 if (VAR_6->ip_flags & VAR_1) {
  FUNC_6(0, "Orphaned inode %llu was deleted while we "
       "were waiting on a lock. ip_flags = 0x%x\n",
       (unsigned long long)VAR_6->ip_blkno, VAR_6->ip_flags);
  FUNC_22(&VAR_6->ip_lock);
  VAR_5 = -VAR_0;
  goto bail;
 }
 FUNC_22(&VAR_6->ip_lock);

 if (!FUNC_19(VAR_7))
  goto bail;



 FUNC_14(FUNC_0(VAR_3));

 FUNC_12(VAR_3, 0);

 if (FUNC_13(VAR_3, VAR_7)) {
  FUNC_6(0, "Trusting LVB on inode %llu\n",
       (unsigned long long)VAR_6->ip_blkno);
  FUNC_18(VAR_3);
 } else {


  VAR_5 = FUNC_16(VAR_3, VAR_4);
  if (VAR_5 < 0) {
   FUNC_9(VAR_5);
   goto bail_refresh;
  }
  VAR_8 = (struct ocfs2_dinode *) (*VAR_4)->b_data;
  FUNC_7(VAR_3->i_generation !=
    FUNC_4(VAR_8->i_generation),
    "Invalid dinode %llu disk generation: %u "
    "inode->i_generation: %u\n",
    (unsigned long long)VAR_6->ip_blkno,
    FUNC_4(VAR_8->i_generation),
    VAR_3->i_generation);
  FUNC_7(FUNC_5(VAR_8->i_dtime) ||
    !(VAR_8->i_flags & FUNC_3(VAR_2)),
    "Stale dinode %llu dtime: %llu flags: 0x%x\n",
    (unsigned long long)VAR_6->ip_blkno,
    (unsigned long long)FUNC_5(VAR_8->i_dtime),
    FUNC_4(VAR_8->i_flags));

  FUNC_17(VAR_3, VAR_8);
  FUNC_20(VAR_7);
 }

 VAR_5 = 0;
bail_refresh:
 FUNC_11(VAR_7, VAR_5);
bail:
 FUNC_10(VAR_5);
 return VAR_5;
}
