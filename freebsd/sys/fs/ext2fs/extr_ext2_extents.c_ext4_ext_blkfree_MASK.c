
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_blocks; int i_flag; int i_vnode; struct m_ext2fs* i_e2fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,scalar_t__,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct inode *VAR_2, uint64_t VAR_3, int VAR_4, int VAR_5)
{
 struct m_ext2fs *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = VAR_2->i_e2fs;
 VAR_8 = VAR_4;

 for(VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_1(VAR_2, VAR_3 + VAR_7, VAR_6->e2fs_bsize);

 if (VAR_2->i_blocks >= VAR_8)
  VAR_2->i_blocks -= (FUNC_0(VAR_6->e2fs_bsize)*VAR_8);
 else
  VAR_2->i_blocks = 0;

 VAR_2->i_flag |= VAR_0 | VAR_1;
 FUNC_2(VAR_2->i_vnode, 1);
}
