
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_inode_info {int ip_flags; int ip_lock; struct inode* ip_next_orphan; scalar_t__ ip_blkno; } ;
struct inode {int dummy; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,char*,unsigned long long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_super*,int) ;
 int FUNC_5 (struct ocfs2_super*,int) ;
 int FUNC_6 (struct ocfs2_super*,int,struct inode**) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_3,
     int VAR_4)
{
 int VAR_5 = 0;
 struct inode *VAR_6 = ((void*)0);
 struct inode *VAR_7;
 struct ocfs2_inode_info *VAR_8;

 FUNC_2(0, "Recover inodes from orphan dir in slot %d\n", VAR_4);

 FUNC_5(VAR_3, VAR_4);
 VAR_5 = FUNC_6(VAR_3, VAR_4, &VAR_6);
 FUNC_4(VAR_3, VAR_4);



 if (VAR_5)
  FUNC_3(VAR_5);

 while (VAR_6) {
  VAR_8 = FUNC_0(VAR_6);
  FUNC_2(0, "iput orphan %llu\n", (unsigned long long)VAR_8->ip_blkno);

  VAR_7 = VAR_8->ip_next_orphan;

  FUNC_7(&VAR_8->ip_lock);




  VAR_8->ip_flags &= ~(VAR_0|VAR_2);



  VAR_8->ip_flags |= VAR_1;
  FUNC_8(&VAR_8->ip_lock);

  FUNC_1(VAR_6);

  VAR_6 = VAR_7;
 }

 return VAR_5;
}
