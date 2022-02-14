
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_handle {scalar_t__ ih_blkno; scalar_t__ ih_generation; } ;
struct inode {scalar_t__ i_generation; int * d_op; } ;
struct dentry {scalar_t__ i_generation; int * d_op; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*,struct super_block*,struct ocfs2_inode_handle*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int VAR_3 ;
 struct inode* FUNC_10 (struct ocfs2_super*,scalar_t__,int ,int ) ;
 struct inode* FUNC_11 (struct super_block*,scalar_t__) ;
 int FUNC_12 (struct ocfs2_super*,int) ;
 int FUNC_13 (struct ocfs2_super*,int) ;
 int FUNC_14 (struct ocfs2_super*,scalar_t__,int*) ;

__attribute__((used)) static struct dentry *FUNC_15(struct super_block *VAR_4,
  struct ocfs2_inode_handle *VAR_5)
{
 struct inode *VAR_6;
 struct ocfs2_super *VAR_7 = FUNC_2(VAR_4);
 u64 VAR_8 = VAR_5->ih_blkno;
 int VAR_9, VAR_10;
 struct dentry *VAR_11;

 FUNC_7("(0x%p, 0x%p)\n", VAR_4, VAR_5);

 if (VAR_8 == 0) {
  FUNC_6(0, "nfs wants inode with blkno: 0\n");
  VAR_11 = FUNC_0(-VAR_1);
  goto bail;
 }

 VAR_6 = FUNC_11(VAR_4, VAR_8);




 if (VAR_6)
  goto check_gen;





 VAR_9 = FUNC_12(VAR_7, 1);
 if (VAR_9 < 0) {
  FUNC_6(VAR_2, "getting nfs sync lock(EX) failed %d\n", VAR_9);
  goto check_err;
 }

 VAR_9 = FUNC_14(VAR_7, VAR_8, &VAR_10);
 if (VAR_9 < 0) {
  if (VAR_9 == -VAR_0) {





   FUNC_6(0, "test inode bit failed %d\n", VAR_9);
   VAR_9 = -VAR_1;
  } else {
   FUNC_6(VAR_2, "test inode bit failed %d\n", VAR_9);
  }
  goto unlock_nfs_sync;
 }


 if (!VAR_10) {
  FUNC_6(0, "inode %llu suballoc bit is clear\n",
       (unsigned long long)VAR_8);
  VAR_9 = -VAR_1;
  goto unlock_nfs_sync;
 }

 VAR_6 = FUNC_10(VAR_7, VAR_8, 0, 0);

unlock_nfs_sync:
 FUNC_13(VAR_7, 1);

check_err:
 if (VAR_9 < 0) {
  if (VAR_9 == -VAR_1) {
   FUNC_6(0, "stale inode ino: %llu generation: %u\n",
        (unsigned long long)VAR_8, VAR_5->ih_generation);
  }
  VAR_11 = FUNC_0(VAR_9);
  goto bail;
 }

 if (FUNC_1(VAR_6)) {
  FUNC_8(FUNC_3(VAR_6));
  VAR_11 = (void *)VAR_6;
  goto bail;
 }

check_gen:
 if (VAR_5->ih_generation != VAR_6->i_generation) {
  FUNC_5(VAR_6);
  FUNC_6(0, "stale inode ino: %llu generation: %u\n",
       (unsigned long long)VAR_8, VAR_5->ih_generation);
  VAR_11 = FUNC_0(-VAR_1);
  goto bail;
 }

 VAR_11 = FUNC_4(VAR_6);
 if (!FUNC_1(VAR_11))
  VAR_11->d_op = &VAR_3;
 else
  FUNC_8(FUNC_3(VAR_11));

bail:
 FUNC_9(VAR_11);
 return VAR_11;
}
