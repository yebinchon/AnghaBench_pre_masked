
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vnode {int dummy; } ;
struct m_ext2fs {int e2fs_bsize; scalar_t__ e2fs_uhash; struct ext2fs* e2fs; } ;
struct inode {int i_flag; struct m_ext2fs* i_e2fs; } ;
struct ext2fs_htree_lookup_info {scalar_t__ h_hash_version; int h_info_len; int h_levels_num; TYPE_1__* h_levels; } ;
struct ext2fs_htree_root {struct ext2fs_htree_lookup_info h_info; int h_entries; int h_dotdot; } ;
struct ext2fs_direct_2 {int e2d_reclen; } ;
struct ext2fs {scalar_t__ e3fs_def_hash_version; int e3fs_hash_seed; } ;
struct componentname {int dummy; } ;
struct buf {scalar_t__ b_data; } ;
typedef int info ;
struct TYPE_2__ {int h_entry; int h_entries; } ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct vnode*,int ,int *,struct buf**) ;
 int FUNC_7 (struct inode*,struct ext2fs_direct_2*) ;
 int FUNC_8 (struct inode*,struct ext2fs_direct_2*) ;
 int FUNC_9 (struct vnode*,char*,struct componentname*,int) ;
 int FUNC_10 (struct ext2fs_htree_lookup_info*,int,int) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct inode*,char*,char*,int,int ,scalar_t__,int*,struct ext2fs_direct_2*) ;
 int FUNC_16 (char*,int ) ;
 char* FUNC_17 (int,int ,int) ;
 int FUNC_18 (char*,struct ext2fs_direct_2*,int) ;
 int FUNC_19 (struct ext2fs_htree_lookup_info*,int ,int) ;

int
FUNC_20(struct vnode *VAR_7, struct componentname *VAR_8,
    struct ext2fs_direct_2 *VAR_9)
{
 struct buf *VAR_10 = ((void*)0);
 struct inode *VAR_11;
 struct ext2fs *VAR_12;
 struct m_ext2fs *VAR_13;
 struct ext2fs_direct_2 *VAR_14, *VAR_15;
 struct ext2fs_htree_root *VAR_16;
 struct ext2fs_htree_lookup_info VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20;
 uint8_t VAR_21;
 char *VAR_22 = ((void*)0);
 char *VAR_23 = ((void*)0);
 int VAR_24 = 0;

 VAR_11 = FUNC_2(VAR_7);
 VAR_12 = VAR_11->i_e2fs->e2fs;
 VAR_13 = VAR_11->i_e2fs;
 VAR_18 = VAR_13->e2fs_bsize;

 VAR_22 = FUNC_17(VAR_18, VAR_4, VAR_5 | VAR_6);
 VAR_23 = FUNC_17(VAR_18, VAR_4, VAR_5 | VAR_6);

 if ((VAR_24 = FUNC_6(VAR_7, 0, ((void*)0), &VAR_10)) != 0)
  goto out;

 VAR_16 = (struct ext2fs_htree_root *)VAR_10->b_data;
 VAR_15 = (struct ext2fs_direct_2 *)((char *)&(VAR_16->h_dotdot));
 VAR_14 = (struct ext2fs_direct_2 *)((char *)VAR_15 + VAR_15->e2d_reclen);
 VAR_19 = (char *)VAR_16 + VAR_18 - (char *)VAR_14;
 FUNC_18(VAR_22, VAR_14, VAR_19);
 VAR_14 = (struct ext2fs_direct_2 *)VAR_22;
 while ((char *)VAR_14 < VAR_22 + VAR_19)
  VAR_14 = (struct ext2fs_direct_2 *)
      ((char *)VAR_14 + VAR_14->e2d_reclen);
 VAR_14->e2d_reclen = VAR_22 + VAR_18 - (char *)VAR_14;

 VAR_11->i_flag |= VAR_2;




 VAR_15->e2d_reclen = VAR_18 - FUNC_1(1);
 FUNC_19(&VAR_16->h_info, 0, sizeof(VAR_16->h_info));
 VAR_16->h_info.h_hash_version = VAR_12->e3fs_def_hash_version;
 VAR_16->h_info.h_info_len = sizeof(VAR_16->h_info);
 FUNC_12(VAR_16->h_entries, 1);
 FUNC_13(VAR_16->h_entries, 1);
 FUNC_14(VAR_16->h_entries,
     FUNC_11(VAR_11, sizeof(VAR_16->h_info)));

 FUNC_19(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.h_levels_num = 1;
 VAR_17.h_levels[0].h_entries = VAR_16->h_entries;
 VAR_17.h_levels[0].h_entry = VAR_16->h_entries;

 VAR_21 = VAR_16->h_info.h_hash_version;
 if (VAR_21 <= VAR_0)
  VAR_21 += VAR_13->e2fs_uhash;
 FUNC_15(VAR_11, VAR_22, VAR_23, VAR_18, VAR_12->e3fs_hash_seed,
     VAR_21, &VAR_20, VAR_9);
 FUNC_10(&VAR_17, VAR_20, 2);




 FUNC_8(VAR_11, (struct ext2fs_direct_2 *)VAR_10->b_data);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_10);
  VAR_24 = 0;
 } else {
  VAR_24 = FUNC_5(VAR_10);
 }
 VAR_11->i_flag |= VAR_1 | VAR_3;
 if (VAR_24)
  goto out;




 FUNC_7(VAR_11, (struct ext2fs_direct_2 *)VAR_22);
 VAR_24 = FUNC_9(VAR_7, VAR_22, VAR_8, VAR_18);
 if (VAR_24)
  goto out1;




 FUNC_7(VAR_11, (struct ext2fs_direct_2 *)VAR_23);
 VAR_24 = FUNC_9(VAR_7, VAR_23, VAR_8, VAR_18);

 FUNC_16(VAR_22, VAR_4);
 FUNC_16(VAR_23, VAR_4);
 return (VAR_24);
out:
 if (VAR_10 != ((void*)0))
  FUNC_4(VAR_10);
out1:
 FUNC_16(VAR_22, VAR_4);
 FUNC_16(VAR_23, VAR_4);
 return (VAR_24);
}
