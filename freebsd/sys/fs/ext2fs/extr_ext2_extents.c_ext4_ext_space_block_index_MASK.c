
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {int e2fs_bsize; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext4_extent_index {int dummy; } ;
struct ext4_extent_header {int dummy; } ;



__attribute__((used)) static inline int
FUNC_0(struct inode *VAR_0)
{
 struct m_ext2fs *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->i_e2fs;

 VAR_2 = (VAR_1->e2fs_bsize - sizeof(struct ext4_extent_header)) /
     sizeof(struct ext4_extent_index);

 return (VAR_2);
}
