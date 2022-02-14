
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ dc_task; struct inode* root_inode; } ;
struct ocfs2_inode_info {int ip_flags; int ip_lock; scalar_t__ ip_blkno; } ;
struct inode {unsigned long long i_ino; int i_sb; } ;


 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_inode_info *VAR_6 = FUNC_0(VAR_4);
 struct ocfs2_super *VAR_7 = FUNC_1(VAR_4->i_sb);



 if (VAR_4 == VAR_7->root_inode) {
  FUNC_2(VAR_0, "Skipping delete of root inode.\n");
  goto bail;
 }






 if (VAR_3 == VAR_7->dc_task) {
  FUNC_2(0, "Skipping delete of %lu because we're currently "
       "in downconvert\n", VAR_4->i_ino);
  goto bail;
 }

 FUNC_3(&VAR_6->ip_lock);



 if (VAR_6->ip_flags & VAR_2) {
  FUNC_2(VAR_0, "Skipping delete of system file %llu\n",
       (unsigned long long)VAR_6->ip_blkno);
  goto bail_unlock;
 }




 if (VAR_6->ip_flags & VAR_1) {
  FUNC_2(0, "Skipping delete of %lu because another node "
       "has done this for us.\n", VAR_4->i_ino);
  goto bail_unlock;
 }

 VAR_5 = 1;
bail_unlock:
 FUNC_4(&VAR_6->ip_lock);
bail:
 return VAR_5;
}
