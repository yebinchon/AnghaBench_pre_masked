
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext2fs_htree_lookup_info {int h_levels_num; TYPE_1__* h_levels; } ;
struct ext2fs_direct_2 {int dummy; } ;
struct buf {scalar_t__ b_data; } ;
struct TYPE_2__ {struct buf* h_bp; } ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct inode*,struct ext2fs_direct_2*) ;

__attribute__((used)) static int
FUNC_2(struct inode* VAR_0, struct ext2fs_htree_lookup_info *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->h_levels_num; VAR_2++) {
  struct buf *VAR_4 = VAR_1->h_levels[VAR_2].h_bp;
  FUNC_1(VAR_0, (struct ext2fs_direct_2 *)VAR_4->b_data);
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3)
   return (VAR_3);
 }

 return (0);
}
