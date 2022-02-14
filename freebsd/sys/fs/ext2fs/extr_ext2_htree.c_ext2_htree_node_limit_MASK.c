
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext2fs_htree_tail {int dummy; } ;
struct ext2fs_htree_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct inode *VAR_1)
{
 struct m_ext2fs *VAR_2;
 uint32_t VAR_3;

 VAR_2 = VAR_1->i_e2fs;
 VAR_3 = VAR_2->e2fs_bsize - FUNC_0(0);

 if (FUNC_1(VAR_2, VAR_0))
  VAR_3 -= sizeof(struct ext2fs_htree_tail);

 return (VAR_3 / sizeof(struct ext2fs_htree_entry));
}
