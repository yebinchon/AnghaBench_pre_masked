
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct vnode {int dummy; } ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct ext2fs_searchslot {scalar_t__ slotstatus; int slotoffset; scalar_t__ slotfreespace; } ;
struct ext2fs_htree_lookup_info {int h_levels_num; TYPE_1__* h_levels; } ;
struct ext2fs_htree_entry {int dummy; } ;
struct buf {int b_data; } ;
typedef int info ;
typedef int doff_t ;
struct TYPE_2__ {struct ext2fs_htree_entry* h_entry; } ;


 int VAR_0 ;
 struct vnode* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct buf*) ;
 scalar_t__ FUNC_2 (struct vnode*,int,int *,struct buf**) ;
 int FUNC_3 (struct inode*,int,char const*,struct ext2fs_htree_lookup_info*) ;
 scalar_t__ FUNC_4 (struct inode*,char const*,int,int*,int *,struct ext2fs_htree_lookup_info*) ;
 int FUNC_5 (struct ext2fs_htree_entry*) ;
 int FUNC_6 (struct ext2fs_htree_lookup_info*) ;
 scalar_t__ FUNC_7 (struct inode*,int ,int*,char const*,int,int*,int*,int*,int*,struct ext2fs_searchslot*) ;
 int FUNC_8 (struct ext2fs_htree_lookup_info*,int ,int) ;

int
FUNC_9(struct inode *VAR_2, const char *VAR_3, int VAR_4,
    struct buf **VAR_5, int *VAR_6, doff_t *VAR_7,
    doff_t *VAR_8, doff_t *VAR_9,
    struct ext2fs_searchslot *VAR_10)
{
 struct vnode *VAR_11;
 struct ext2fs_htree_lookup_info VAR_12;
 struct ext2fs_htree_entry *VAR_13;
 struct m_ext2fs *VAR_14;
 struct buf *VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;
 uint8_t VAR_19;
 int VAR_20;
 int VAR_21 = 0;

 VAR_14 = VAR_2->i_e2fs;
 VAR_18 = VAR_14->e2fs_bsize;
 VAR_11 = FUNC_0(VAR_2);



 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 if (FUNC_4(VAR_2, VAR_3, VAR_4, &VAR_17,
     &VAR_19, &VAR_12))
  return (-1);

 do {
  VAR_13 = VAR_12.h_levels[VAR_12.h_levels_num - 1].h_entry;
  VAR_16 = FUNC_5(VAR_13);
  if (FUNC_2(VAR_11, VAR_16 * VAR_18, ((void*)0), &VAR_15) != 0) {
   FUNC_6(&VAR_12);
   return (-1);
  }

  *VAR_7 = VAR_16 * VAR_18;
  *VAR_6 = 0;
  *VAR_8 = VAR_16 * VAR_18;
  *VAR_9 = VAR_16 * VAR_18;

  if (VAR_10->slotstatus == VAR_1) {
   VAR_10->slotoffset = -1;
   VAR_10->slotfreespace = 0;
  }

  if (FUNC_7(VAR_2, VAR_15->b_data, &VAR_21,
      VAR_3, VAR_4, VAR_6, VAR_7, VAR_8,
      VAR_9, VAR_10) != 0) {
   FUNC_1(VAR_15);
   FUNC_6(&VAR_12);
   return (-1);
  }

  if (VAR_21) {
   *VAR_5 = VAR_15;
   FUNC_6(&VAR_12);
   return (0);
  }

  FUNC_1(VAR_15);
  VAR_20 = FUNC_3(VAR_2, VAR_17, VAR_3, &VAR_12);
 } while (VAR_20);

 FUNC_6(&VAR_12);
 return (VAR_0);
}
