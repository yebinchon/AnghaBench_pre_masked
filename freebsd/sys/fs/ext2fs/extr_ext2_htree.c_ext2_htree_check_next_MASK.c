
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vnode {int dummy; } ;
struct inode {TYPE_1__* i_e2fs; } ;
struct ext2fs_htree_node {scalar_t__ h_entries; } ;
struct ext2fs_htree_lookup_level {scalar_t__ h_entry; scalar_t__ h_entries; struct buf* h_bp; } ;
struct ext2fs_htree_lookup_info {int h_levels_num; struct ext2fs_htree_lookup_level* h_levels; } ;
struct buf {scalar_t__ b_data; } ;
struct TYPE_2__ {int e2fs_bsize; } ;


 struct vnode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buf*) ;
 scalar_t__ FUNC_2 (struct vnode*,int,int *,struct buf**) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_0, uint32_t VAR_1, const char *VAR_2,
    struct ext2fs_htree_lookup_info *VAR_3)
{
 struct vnode *VAR_4 = FUNC_0(VAR_0);
 struct ext2fs_htree_lookup_level *VAR_5;
 struct buf *VAR_6;
 uint32_t VAR_7;
 int VAR_8 = VAR_3->h_levels_num - 1;
 int VAR_9 = 0;

 do {
  VAR_5 = &VAR_3->h_levels[VAR_8];
  VAR_5->h_entry++;
  if (VAR_5->h_entry < VAR_5->h_entries +
      FUNC_4(VAR_5->h_entries))
   break;
  if (VAR_8 == 0)
   return (0);
  VAR_8--;
  VAR_9++;
 } while (1);

 VAR_7 = FUNC_5(VAR_5->h_entry);
 if ((VAR_1 & 1) == 0) {
  if (VAR_1 != (VAR_7 & ~1))
   return (0);
 }

 while (VAR_9 > 0) {
  VAR_9--;
  if (FUNC_2(VAR_4, FUNC_3(VAR_5->h_entry) *
      VAR_0->i_e2fs->e2fs_bsize, ((void*)0), &VAR_6) != 0)
   return (0);
  VAR_5 = &VAR_3->h_levels[VAR_8 + 1];
  FUNC_1(VAR_5->h_bp);
  VAR_5->h_bp = VAR_6;
  VAR_5->h_entry = VAR_5->h_entries =
      ((struct ext2fs_htree_node *)VAR_6->b_data)->h_entries;
 }

 return (1);
}
