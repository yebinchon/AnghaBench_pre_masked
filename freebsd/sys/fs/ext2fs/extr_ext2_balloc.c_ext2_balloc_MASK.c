
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct m_ext2fs {int e2fs_bsize; } ;
struct inode {size_t i_next_alloc_block; int i_flag; scalar_t__* i_db; size_t i_size; scalar_t__* i_ib; int i_next_alloc_goal; struct ext2mount* i_ump; struct m_ext2fs* i_e2fs; } ;
struct indir {size_t in_off; size_t in_lbn; } ;
struct ext2mount {int dummy; } ;
struct buf {int b_bufsize; void* b_blkno; int b_flags; int b_lblkno; scalar_t__ b_data; } ;
typedef scalar_t__ e4fs_daddr_t ;
typedef size_t e2fs_lbn_t ;
typedef scalar_t__ e2fs_daddr_t ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ext2mount*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct vnode* FUNC_1 (struct inode*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct vnode*,size_t,int,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct vnode*,size_t,size_t,int,int ,int ,int,int ,struct buf**) ;
 scalar_t__ FUNC_8 (struct m_ext2fs*,void*) ;
 int FUNC_9 (struct inode*,size_t,scalar_t__,int,struct ucred*,scalar_t__*) ;
 int FUNC_10 (struct inode*,scalar_t__,int) ;
 scalar_t__ FUNC_11 (struct inode*,size_t,int,scalar_t__*,int ) ;
 int FUNC_12 (struct inode*,size_t,int,struct ucred*,struct buf**,int) ;
 int FUNC_13 (struct vnode*,size_t,struct indir*,int*) ;
 void* FUNC_14 (struct m_ext2fs*,scalar_t__) ;
 struct buf* FUNC_15 (struct vnode*,size_t,int,int ,int ,int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct buf*) ;

int
FUNC_18(struct inode *VAR_16, e2fs_lbn_t VAR_17, int VAR_18, struct ucred *VAR_19,
    struct buf **VAR_20, int VAR_21)
{
 struct m_ext2fs *VAR_22;
 struct ext2mount *VAR_23;
 struct buf *VAR_24, *VAR_25;
 struct vnode *VAR_26 = FUNC_1(VAR_16);
 struct indir VAR_27[VAR_7 + 2];
 e4fs_daddr_t VAR_28, VAR_29;
 e2fs_daddr_t *VAR_30, VAR_31;
 int VAR_32, VAR_33, VAR_34;

 *VAR_20 = ((void*)0);
 if (VAR_17 < 0)
  return (VAR_4);
 VAR_22 = VAR_16->i_e2fs;
 VAR_23 = VAR_16->i_ump;






 if (VAR_17 == VAR_16->i_next_alloc_block + 1) {
  VAR_16->i_next_alloc_block++;
  VAR_16->i_next_alloc_goal++;
 }

 if (VAR_16->i_flag & VAR_9)
  return (FUNC_12(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21));




 if (VAR_17 < VAR_5) {
  VAR_28 = VAR_16->i_db[VAR_17];




  if (VAR_28 != 0) {
   VAR_34 = FUNC_4(VAR_26, VAR_17, VAR_22->e2fs_bsize, VAR_14, &VAR_24);
   if (VAR_34) {
    return (VAR_34);
   }
   VAR_24->b_blkno = FUNC_14(VAR_22, VAR_28);
   if (VAR_16->i_size >= (VAR_17 + 1) * VAR_22->e2fs_bsize) {
    *VAR_20 = VAR_24;
    return (0);
   }
  } else {
   FUNC_0(VAR_23);
   VAR_34 = FUNC_9(VAR_16, VAR_17,
       FUNC_11(VAR_16, VAR_17, (int)VAR_17, &VAR_16->i_db[0], 0),
       VAR_22->e2fs_bsize, VAR_19, &VAR_29);
   if (VAR_34)
    return (VAR_34);




   if (VAR_29 > VAR_15)
    return (VAR_4);
   VAR_24 = FUNC_15(VAR_26, VAR_17, VAR_22->e2fs_bsize, 0, 0, 0);
   VAR_24->b_blkno = FUNC_14(VAR_22, VAR_29);
   if (VAR_21 & VAR_0)
    FUNC_17(VAR_24);
  }
  VAR_16->i_db[VAR_17] = FUNC_8(VAR_22, VAR_24->b_blkno);
  VAR_16->i_flag |= VAR_8 | VAR_10;
  *VAR_20 = VAR_24;
  return (0);
 }



 VAR_31 = 0;
 if ((VAR_34 = FUNC_13(VAR_26, VAR_17, VAR_27, &VAR_32)) != 0)
  return (VAR_34);







 --VAR_32;
 VAR_28 = VAR_16->i_ib[VAR_27[0].in_off];
 if (VAR_28 == 0) {
  FUNC_0(VAR_23);
  VAR_31 = FUNC_11(VAR_16, VAR_17, VAR_27[0].in_off +
      VAR_6, &VAR_16->i_db[0], 0);
  if ((VAR_34 = FUNC_9(VAR_16, VAR_17, VAR_31, VAR_22->e2fs_bsize, VAR_19,
      &VAR_29)))
   return (VAR_34);
  if (VAR_29 > VAR_15)
   return (VAR_4);
  VAR_28 = VAR_29;
  VAR_24 = FUNC_15(VAR_26, VAR_27[1].in_lbn, VAR_22->e2fs_bsize, 0, 0, 0);
  VAR_24->b_blkno = FUNC_14(VAR_22, VAR_29);
  FUNC_17(VAR_24);




  if ((VAR_34 = FUNC_6(VAR_24)) != 0) {
   FUNC_10(VAR_16, VAR_28, VAR_22->e2fs_bsize);
   return (VAR_34);
  }
  VAR_16->i_ib[VAR_27[0].in_off] = VAR_29;
  VAR_16->i_flag |= VAR_8 | VAR_10;
 }



 for (VAR_33 = 1;;) {
  VAR_34 = FUNC_4(VAR_26,
      VAR_27[VAR_33].in_lbn, (int)VAR_22->e2fs_bsize, VAR_14, &VAR_24);
  if (VAR_34) {
   return (VAR_34);
  }
  VAR_30 = (e2fs_daddr_t *)VAR_24->b_data;
  VAR_28 = VAR_30[VAR_27[VAR_33].in_off];
  if (VAR_33 == VAR_32)
   break;
  VAR_33 += 1;
  if (VAR_28 != 0) {
   FUNC_3(VAR_24);
   continue;
  }
  FUNC_0(VAR_23);
  if (VAR_31 == 0)
   VAR_31 = FUNC_11(VAR_16, VAR_17, VAR_27[VAR_33].in_off, VAR_30,
       VAR_24->b_lblkno);
  VAR_34 = FUNC_9(VAR_16, VAR_17, VAR_31, (int)VAR_22->e2fs_bsize, VAR_19, &VAR_29);
  if (VAR_34) {
   FUNC_5(VAR_24);
   return (VAR_34);
  }
  if (VAR_29 > VAR_15)
   return (VAR_4);
  VAR_28 = VAR_29;
  VAR_25 = FUNC_15(VAR_26, VAR_27[VAR_33].in_lbn, VAR_22->e2fs_bsize, 0, 0, 0);
  VAR_25->b_blkno = FUNC_14(VAR_22, VAR_28);
  FUNC_17(VAR_25);




  if ((VAR_34 = FUNC_6(VAR_25)) != 0) {
   FUNC_10(VAR_16, VAR_28, VAR_22->e2fs_bsize);
   FUNC_5(VAR_24);
   return (VAR_34);
  }
  VAR_30[VAR_27[VAR_33 - 1].in_off] = VAR_28;




  if (VAR_21 & VAR_11) {
   FUNC_6(VAR_24);
  } else {
   if (VAR_24->b_bufsize == VAR_22->e2fs_bsize)
    VAR_24->b_flags |= VAR_3;
   FUNC_2(VAR_24);
  }
 }



 if (VAR_28 == 0) {
  FUNC_0(VAR_23);
  VAR_31 = FUNC_11(VAR_16, VAR_17, VAR_27[VAR_33].in_off, &VAR_30[0],
      VAR_24->b_lblkno);
  if ((VAR_34 = FUNC_9(VAR_16,
      VAR_17, VAR_31, (int)VAR_22->e2fs_bsize, VAR_19, &VAR_29)) != 0) {
   FUNC_5(VAR_24);
   return (VAR_34);
  }
  if (VAR_29 > VAR_15)
   return (VAR_4);
  VAR_28 = VAR_29;
  VAR_25 = FUNC_15(VAR_26, VAR_17, VAR_22->e2fs_bsize, 0, 0, 0);
  VAR_25->b_blkno = FUNC_14(VAR_22, VAR_28);
  if (VAR_21 & VAR_0)
   FUNC_17(VAR_25);
  VAR_30[VAR_27[VAR_33].in_off] = VAR_28;




  if (VAR_21 & VAR_11) {
   FUNC_6(VAR_24);
  } else {
   if (VAR_24->b_bufsize == VAR_22->e2fs_bsize)
    VAR_24->b_flags |= VAR_3;
   FUNC_2(VAR_24);
  }
  *VAR_20 = VAR_25;
  return (0);
 }
 FUNC_5(VAR_24);
 if (VAR_21 & VAR_0) {
  int VAR_35 = (VAR_21 & VAR_1) >> VAR_2;

  if (VAR_35 && (VAR_26->v_mount->mnt_flag & VAR_13) == 0) {
   VAR_34 = FUNC_7(VAR_26, VAR_16->i_size, VAR_17,
       (int)VAR_22->e2fs_bsize, VAR_14,
       VAR_12, VAR_35, 0, &VAR_25);
  } else {
   VAR_34 = FUNC_4(VAR_26, VAR_17, (int)VAR_22->e2fs_bsize, VAR_14, &VAR_25);
  }
  if (VAR_34) {
   FUNC_5(VAR_25);
   return (VAR_34);
  }
 } else {
  VAR_25 = FUNC_15(VAR_26, VAR_17, VAR_22->e2fs_bsize, 0, 0, 0);
  VAR_25->b_blkno = FUNC_14(VAR_22, VAR_28);
 }
 *VAR_20 = VAR_25;
 return (0);
}
