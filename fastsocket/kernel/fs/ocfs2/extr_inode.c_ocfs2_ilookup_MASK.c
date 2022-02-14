
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct ocfs2_find_inode_args {scalar_t__ fi_sysfile_type; int fi_ino; scalar_t__ fi_flags; int fi_blkno; } ;
struct inode {int dummy; } ;


 struct inode* FUNC_0 (struct super_block*,int ,int ,struct ocfs2_find_inode_args*) ;
 int FUNC_1 (struct super_block*,int ) ;
 int VAR_0 ;

struct inode *FUNC_2(struct super_block *VAR_1, u64 VAR_2)
{
 struct ocfs2_find_inode_args VAR_3;

 VAR_3.fi_blkno = VAR_2;
 VAR_3.fi_flags = 0;
 VAR_3.fi_ino = FUNC_1(VAR_1, VAR_2);
 VAR_3.fi_sysfile_type = 0;

 return FUNC_0(VAR_1, VAR_2, VAR_0, &VAR_3);
}
