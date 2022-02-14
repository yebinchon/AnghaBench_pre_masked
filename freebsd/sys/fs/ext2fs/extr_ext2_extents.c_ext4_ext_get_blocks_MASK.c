
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint16_t ;
struct ucred {int dummy; } ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {int i_devvp; struct m_ext2fs* i_e2fs; scalar_t__ i_next_alloc_goal; int i_next_alloc_block; int i_mode; } ;
struct ext4_extent_path {struct ext4_extent* ep_ext; } ;
struct ext4_extent {scalar_t__ e_blk; scalar_t__ e_len; } ;
struct buf {int dummy; } ;
typedef scalar_t__ e4fs_daddr_t ;
typedef scalar_t__ daddr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,struct ucred*,struct buf**) ;
 int FUNC_2 (struct buf*) ;
 scalar_t__ FUNC_3 (struct inode*,struct ext4_extent_path*,scalar_t__) ;
 int FUNC_4 (struct ext4_extent_path*) ;
 scalar_t__ FUNC_5 (struct ext4_extent*) ;
 int FUNC_6 (struct inode*,scalar_t__,struct ext4_extent_path**) ;
 scalar_t__ FUNC_7 (struct inode*,scalar_t__,struct ext4_extent*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*,struct ext4_extent_path*,struct ext4_extent*) ;
 int FUNC_10 (struct inode*,scalar_t__,unsigned long,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct ext4_extent*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct inode*,scalar_t__,scalar_t__,struct ucred*,unsigned long*,int*) ;
 int FUNC_13 (struct ext4_extent_path*,int ) ;
 int FUNC_14 (struct m_ext2fs*,scalar_t__) ;

int
FUNC_15(struct inode *VAR_4, e4fs_daddr_t VAR_5,
    unsigned long VAR_6, struct ucred *VAR_7, struct buf **VAR_8,
    int *VAR_9, daddr_t *VAR_10)
{
 struct m_ext2fs *VAR_11;
 struct buf *VAR_12 = ((void*)0);
 struct ext4_extent_path *VAR_13;
 struct ext4_extent VAR_14, *VAR_15;
 e4fs_daddr_t VAR_16, VAR_17 = 0;
 unsigned long VAR_18 = 0;
 int VAR_19 = 0, VAR_20;

 if(VAR_8)
  *VAR_8 = ((void*)0);
 *VAR_9 = 0;


 VAR_13 = ((void*)0);
 if ((VAR_16 = FUNC_7(VAR_4, VAR_5, &VAR_14))) {
  if (VAR_16 == VAR_1) {

   VAR_17 = VAR_5 - VAR_14.e_blk +
       FUNC_5(&VAR_14);
   VAR_18 = VAR_14.e_len - (VAR_5 - VAR_14.e_blk);
   goto out;
  } else {
   VAR_19 = VAR_0;
   goto out2;
  }
 }

 VAR_19 = FUNC_6(VAR_4, VAR_5, &VAR_13);
 if (VAR_19) {
  goto out2;
 }

 VAR_20 = FUNC_8(VAR_4);
 if (VAR_13[VAR_20].ep_ext == ((void*)0) && VAR_20 != 0) {
  VAR_19 = VAR_0;
  goto out2;
 }

 if ((VAR_15 = VAR_13[VAR_20].ep_ext)) {
  uint64_t VAR_21 = VAR_15->e_blk;
  uint16_t VAR_22 = VAR_15->e_len;
  e4fs_daddr_t VAR_23 = FUNC_5(VAR_15);

  if (VAR_22 > VAR_2)
   goto out2;


  if (VAR_5 >= VAR_21 && VAR_5 < VAR_21 + VAR_22) {
   VAR_17 = VAR_5 - VAR_21 + VAR_23;
   VAR_18 = VAR_22 - (VAR_5 - VAR_21);
   FUNC_10(VAR_4, VAR_21, VAR_22,
       VAR_23, VAR_1);
   goto out;
  }
 }


 if (FUNC_0(VAR_4->i_mode) && (!VAR_4->i_next_alloc_block)) {
  VAR_4->i_next_alloc_goal = 0;
 }

 VAR_16 = FUNC_3(VAR_4, VAR_13, VAR_5);
 VAR_18 = VAR_6;
 VAR_17 = FUNC_12(VAR_4, VAR_5, VAR_16, VAR_7, &VAR_18, &VAR_19);
 if (!VAR_17)
  goto out2;


 VAR_14.e_blk = VAR_5;
 FUNC_11(&VAR_14, VAR_17);
 VAR_14.e_len = VAR_18;
 VAR_19 = FUNC_9(VAR_4, VAR_13, &VAR_14);
 if (VAR_19)
  goto out2;

 VAR_17 = FUNC_5(&VAR_14);
 FUNC_10(VAR_4, VAR_5, VAR_18, VAR_17, VAR_1);
 *VAR_9 = 1;

out:
 if (VAR_18 > VAR_6)
  VAR_18 = VAR_6;

 if (VAR_8)
 {
  VAR_11 = VAR_4->i_e2fs;
  VAR_19 = FUNC_1(VAR_4->i_devvp, FUNC_14(VAR_11, VAR_17),
      VAR_11->e2fs_bsize, VAR_7, &VAR_12);
  if (VAR_19) {
   FUNC_2(VAR_12);
  } else {
   *VAR_8 = VAR_12;
  }
 }

out2:
 if (VAR_13) {
  FUNC_4(VAR_13);
  FUNC_13(VAR_13, VAR_3);
 }

 if (VAR_10)
  *VAR_10 = VAR_17;

 return (VAR_19);
}
