
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {int dummy; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext2fs_direct_tail {int e2dt_checksum; } ;
struct ext2fs_direct_2 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;
 int FUNC_1 (struct inode*,struct ext2fs_direct_2*,int) ;
 struct ext2fs_direct_tail* FUNC_2 (struct inode*,struct ext2fs_direct_2*) ;

void
FUNC_3(struct inode *VAR_1, struct ext2fs_direct_2 *VAR_2)
{
 struct m_ext2fs *VAR_3;
 struct ext2fs_direct_tail *VAR_4;

 VAR_3 = VAR_1->i_e2fs;

 if (!FUNC_0(VAR_3, VAR_0))
  return;

 VAR_4 = FUNC_2(VAR_1, VAR_2);
 if (VAR_4 == ((void*)0))
  return;

 VAR_4->e2dt_checksum =
     FUNC_1(VAR_1, VAR_2, (char *)VAR_4 - (char *)VAR_2);
}
