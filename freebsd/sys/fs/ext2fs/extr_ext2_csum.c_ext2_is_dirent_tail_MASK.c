
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m_ext2fs {int dummy; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext2fs_direct_tail {scalar_t__ e2dt_reserved_zero1; int e2dt_rec_len; scalar_t__ e2dt_reserved_zero2; scalar_t__ e2dt_reserved_ft; } ;
struct ext2fs_direct_2 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;

int
FUNC_1(struct inode *VAR_2, struct ext2fs_direct_2 *VAR_3)
{
 struct m_ext2fs *VAR_4;
 struct ext2fs_direct_tail *VAR_5;

 VAR_4 = VAR_2->i_e2fs;

 if (!FUNC_0(VAR_4, VAR_0))
  return (0);

 VAR_5 = (struct ext2fs_direct_tail *)VAR_3;
 if (VAR_5->e2dt_reserved_zero1 == 0 &&
     VAR_5->e2dt_rec_len == sizeof(struct ext2fs_direct_tail) &&
     VAR_5->e2dt_reserved_zero2 == 0 &&
     VAR_5->e2dt_reserved_ft == VAR_1)
  return (1);

 return (0);
}
