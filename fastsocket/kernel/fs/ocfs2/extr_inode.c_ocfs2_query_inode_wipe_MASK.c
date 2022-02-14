
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {scalar_t__ ip_blkno; int ip_flags; } ;
struct ocfs2_dinode {int i_flags; int i_orphaned_slot; scalar_t__ i_dtime; int i_blkno; } ;
struct inode {int i_nlink; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,unsigned long long,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_4,
      struct buffer_head *VAR_5,
      int *VAR_6)
{
 int VAR_7 = 0;
 struct ocfs2_inode_info *VAR_8 = FUNC_0(VAR_4);
 struct ocfs2_dinode *VAR_9;

 *VAR_6 = 0;




 if (!FUNC_7(VAR_4)) {
  FUNC_5(0, "Skipping delete of %llu because flags changed\n",
       (unsigned long long)VAR_8->ip_blkno);
  goto bail;
 }



 if (VAR_4->i_nlink) {
  FUNC_5(0, "Skipping delete of %llu because nlink = %u\n",
       (unsigned long long)VAR_8->ip_blkno, VAR_4->i_nlink);
  goto bail;
 }


 VAR_9 = (struct ocfs2_dinode *) VAR_5->b_data;
 if (!(VAR_9->i_flags & FUNC_1(VAR_3))) {

  VAR_7 = -VAR_1;
  FUNC_5(VAR_2,
       "Inode %llu (on-disk %llu) not orphaned! "
       "Disk flags  0x%x, inode flags 0x%x\n",
       (unsigned long long)VAR_8->ip_blkno,
       (unsigned long long)FUNC_4(VAR_9->i_blkno),
       FUNC_3(VAR_9->i_flags), VAR_8->ip_flags);
  goto bail;
 }


 if (VAR_9->i_dtime) {
  VAR_7 = -VAR_1;
  FUNC_6(VAR_7);
  goto bail;
 }
 VAR_7 = FUNC_8(VAR_4, 1);
 if (VAR_7 == -VAR_0) {
  VAR_7 = 0;
  FUNC_5(0, "Skipping delete of %llu because it is in use on "
       "other nodes\n", (unsigned long long)VAR_8->ip_blkno);
  goto bail;
 }
 if (VAR_7 < 0) {
  FUNC_6(VAR_7);
  goto bail;
 }

 *VAR_6 = 1;
 FUNC_5(0, "Inode %llu is ok to wipe from orphan dir %u\n",
      (unsigned long long)VAR_8->ip_blkno,
      FUNC_2(VAR_9->i_orphaned_slot));

bail:
 return VAR_7;
}
