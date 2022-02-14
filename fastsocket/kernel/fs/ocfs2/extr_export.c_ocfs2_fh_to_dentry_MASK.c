
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct ocfs2_inode_handle {int ih_blkno; scalar_t__ ih_generation; } ;
struct fid {int * raw; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct dentry* FUNC_1 (struct super_block*,struct ocfs2_inode_handle*) ;

__attribute__((used)) static struct dentry *FUNC_2(struct super_block *VAR_0,
  struct fid *VAR_1, int VAR_2, int VAR_3)
{
 struct ocfs2_inode_handle VAR_4;

 if (VAR_2 < 3 || VAR_3 > 2)
  return ((void*)0);

 VAR_4.ih_blkno = (u64)FUNC_0(VAR_1->raw[0]) << 32;
 VAR_4.ih_blkno |= (u64)FUNC_0(VAR_1->raw[1]);
 VAR_4.ih_generation = FUNC_0(VAR_1->raw[2]);
 return FUNC_1(VAR_0, &VAR_4);
}
