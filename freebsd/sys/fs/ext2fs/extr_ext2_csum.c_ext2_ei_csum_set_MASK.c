
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct m_ext2fs {int dummy; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext2fs_dinode {int e2di_chksum_lo; scalar_t__ e2di_extra_isize; int e2di_chksum_hi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct m_ext2fs*) ;
 int FUNC_2 (struct inode*,struct ext2fs_dinode*) ;

void
FUNC_3(struct inode *VAR_3, struct ext2fs_dinode *VAR_4)
{
 struct m_ext2fs *VAR_5;
 uint32_t VAR_6;

 VAR_5 = VAR_3->i_e2fs;

 if (!FUNC_0(VAR_5, VAR_1))
  return;

 VAR_6 = FUNC_2(VAR_3, VAR_4);

 VAR_4->e2di_chksum_lo = VAR_6 & 0xFFFF;
 if ((FUNC_1(VAR_5) > VAR_0 &&
     VAR_4->e2di_extra_isize >= VAR_2))
  VAR_4->e2di_chksum_hi = VAR_6 >> 16;
}
