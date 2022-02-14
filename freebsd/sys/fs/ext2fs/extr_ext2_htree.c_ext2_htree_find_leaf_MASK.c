
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vnode {int dummy; } ;
struct m_ext2fs {scalar_t__ e2fs_uhash; int e2fs_bsize; struct ext2fs* e2fs; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct TYPE_2__ {scalar_t__ h_hash_version; int h_ind_levels; int h_info_len; } ;
struct ext2fs_htree_root {TYPE_1__ h_info; } ;
struct ext2fs_htree_node {struct ext2fs_htree_entry* h_entries; } ;
struct ext2fs_htree_lookup_level {struct buf* h_bp; struct ext2fs_htree_entry* h_entry; struct ext2fs_htree_entry* h_entries; } ;
struct ext2fs_htree_lookup_info {int h_levels_num; struct ext2fs_htree_lookup_level* h_levels; } ;
struct ext2fs_htree_entry {int dummy; } ;
struct ext2fs {int e3fs_hash_seed; } ;
struct buf {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct vnode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct vnode*,int,int *,struct buf**) ;
 int FUNC_2 (struct ext2fs_htree_entry*) ;
 int FUNC_3 (struct ext2fs_htree_entry*) ;
 int FUNC_4 (struct ext2fs_htree_entry*) ;
 int FUNC_5 (struct ext2fs_htree_entry*) ;
 int FUNC_6 (char const*,int,int ,scalar_t__,int*,int*) ;
 int FUNC_7 (struct ext2fs_htree_lookup_info*) ;
 scalar_t__ FUNC_8 (struct inode*,int) ;

__attribute__((used)) static int
FUNC_9(struct inode *VAR_3, const char *VAR_4, int VAR_5,
    uint32_t *VAR_6, uint8_t *VAR_7,
    struct ext2fs_htree_lookup_info *VAR_8)
{
 struct vnode *VAR_9;
 struct ext2fs *VAR_10;
 struct m_ext2fs *VAR_11;
 struct buf *VAR_12 = ((void*)0);
 struct ext2fs_htree_root *VAR_13;
 struct ext2fs_htree_entry *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 struct ext2fs_htree_lookup_level *VAR_19;
 uint32_t VAR_20 = 0, VAR_21 = 0;
 uint32_t VAR_22, VAR_23;
 uint8_t VAR_24;

 if (VAR_4 == ((void*)0) || VAR_8 == ((void*)0))
  return (-1);

 VAR_9 = FUNC_0(VAR_3);
 VAR_10 = VAR_3->i_e2fs->e2fs;
 VAR_11 = VAR_3->i_e2fs;

 if (FUNC_1(VAR_9, 0, ((void*)0), &VAR_12) != 0)
  return (-1);

 VAR_8->h_levels_num = 1;
 VAR_8->h_levels[0].h_bp = VAR_12;
 VAR_13 = (struct ext2fs_htree_root *)VAR_12->b_data;
 if (VAR_13->h_info.h_hash_version != VAR_1 &&
     VAR_13->h_info.h_hash_version != VAR_0 &&
     VAR_13->h_info.h_hash_version != VAR_2)
  goto error;

 VAR_24 = VAR_13->h_info.h_hash_version;
 if (VAR_24 <= VAR_2)
  VAR_24 += VAR_11->e2fs_uhash;
 *VAR_7 = VAR_24;

 FUNC_6(VAR_4, VAR_5, VAR_10->e3fs_hash_seed,
     VAR_24, &VAR_20, &VAR_21);
 *VAR_6 = VAR_20;

 if ((VAR_22 = VAR_13->h_info.h_ind_levels) > 1)
  goto error;

 VAR_14 = (struct ext2fs_htree_entry *)(((char *)&VAR_13->h_info) +
     VAR_13->h_info.h_info_len);

 if (FUNC_5(VAR_14) !=
     FUNC_8(VAR_3, VAR_13->h_info.h_info_len))
  goto error;

 while (1) {
  VAR_23 = FUNC_3(VAR_14);
  if (VAR_23 == 0 || VAR_23 > FUNC_5(VAR_14))
   goto error;

  VAR_15 = VAR_14 + 1;
  VAR_16 = VAR_14 + VAR_23 - 1;
  while (VAR_15 <= VAR_16) {
   VAR_17 = VAR_15 + (VAR_16 - VAR_15) / 2;
   if (FUNC_4(VAR_17) > VAR_20)
    VAR_16 = VAR_17 - 1;
   else
    VAR_15 = VAR_17 + 1;
  }
  VAR_18 = VAR_15 - 1;

  VAR_19 = &(VAR_8->h_levels[VAR_8->h_levels_num - 1]);
  VAR_19->h_bp = VAR_12;
  VAR_19->h_entries = VAR_14;
  VAR_19->h_entry = VAR_18;
  if (VAR_22 == 0)
   return (0);
  VAR_22--;
  if (FUNC_1(VAR_9,
      FUNC_2(VAR_18) * VAR_11->e2fs_bsize,
      ((void*)0), &VAR_12) != 0)
   goto error;
  VAR_14 = ((struct ext2fs_htree_node *)VAR_12->b_data)->h_entries;
  VAR_8->h_levels_num++;
  VAR_8->h_levels[VAR_8->h_levels_num - 1].h_bp = VAR_12;
 }

error:
 FUNC_7(VAR_8);
 return (-1);
}
