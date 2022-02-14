
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct inode {TYPE_1__* i_e2fs; } ;
struct ext2fs_htree_tail {scalar_t__ ht_checksum; } ;
struct ext2fs_htree_entry {int dummy; } ;
struct ext2fs_htree_count {int h_entries_max; int h_entries_num; } ;
struct ext2fs_direct_2 {int dummy; } ;
struct TYPE_2__ {int e2fs_bsize; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*,struct ext2fs_direct_2*,int,int,struct ext2fs_htree_tail*) ;
 struct ext2fs_htree_count* FUNC_1 (struct inode*,struct ext2fs_direct_2*,int*) ;

int
FUNC_2(struct inode *VAR_1, struct ext2fs_direct_2 *VAR_2)
{
 uint32_t VAR_3;
 struct ext2fs_htree_count *VAR_4;
 struct ext2fs_htree_tail *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_6);
 if (VAR_4 == ((void*)0))
  return (0);

 VAR_7 = VAR_4->h_entries_max;
 VAR_8 = VAR_4->h_entries_num;
 if (VAR_6 + (VAR_7 * sizeof(struct ext2fs_htree_entry)) >
     VAR_1->i_e2fs->e2fs_bsize - sizeof(struct ext2fs_htree_tail))
  return (VAR_0);

 VAR_5 = (struct ext2fs_htree_tail *)(((struct ext2fs_htree_entry *)VAR_4) + VAR_7);
 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_6, VAR_8, VAR_5);

 if (VAR_5->ht_checksum != VAR_3)
  return (VAR_0);

 return (0);
}
