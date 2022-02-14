
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_e2fs; } ;
struct ext2fs_htree_root_info {int h_info_len; scalar_t__ h_reserved1; } ;
struct ext2fs_htree_count {int dummy; } ;
struct ext2fs_direct_2 {int e2d_reclen; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct ext2fs_htree_count *
FUNC_1(struct inode *VAR_0, struct ext2fs_direct_2 *VAR_1, int *VAR_2)
{
 struct ext2fs_direct_2 *VAR_3;
 struct ext2fs_htree_root_info *VAR_4;
 int VAR_5;

 if (VAR_1->e2d_reclen == FUNC_0(VAR_0->i_e2fs))
  VAR_5 = 8;
 else if (VAR_1->e2d_reclen == 12) {
  VAR_3 = (struct ext2fs_direct_2 *)(((char *)VAR_1) + 12);
  if (VAR_3->e2d_reclen != FUNC_0(VAR_0->i_e2fs) - 12)
   return (((void*)0));

  VAR_4 = (struct ext2fs_htree_root_info *)(((char *)VAR_3 + 12));
  if (VAR_4->h_reserved1 ||
      VAR_4->h_info_len != sizeof(struct ext2fs_htree_root_info))
   return (((void*)0));

  VAR_5 = 32;
 } else
  return (((void*)0));

 if (VAR_2)
  *VAR_2 = VAR_5;

 return ((struct ext2fs_htree_count *)(((char *)VAR_1) + VAR_5));
}
