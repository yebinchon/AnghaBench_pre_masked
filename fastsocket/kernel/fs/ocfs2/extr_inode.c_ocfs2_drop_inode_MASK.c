
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_inode_info {int ip_flags; scalar_t__ ip_blkno; } ;
struct inode {int i_nlink; } ;


 struct ocfs2_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ,char*,unsigned long long,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct inode *VAR_1)
{
 struct ocfs2_inode_info *VAR_2 = FUNC_0(VAR_1);

 FUNC_4();

 FUNC_3(0, "Drop inode %llu, nlink = %u, ip_flags = 0x%x\n",
      (unsigned long long)VAR_2->ip_blkno, VAR_1->i_nlink, VAR_2->ip_flags);

 if (VAR_2->ip_flags & VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1);

 FUNC_5();
}
