
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int v_bufobj; struct mount* v_mount; } ;
struct mount {int mnt_iosize_max; } ;
struct inode {size_t* i_db; size_t* i_ib; int i_flags; } ;
struct indir {size_t in_off; size_t in_lbn; } ;
struct ext2mount {size_t um_seqinc; int um_e2fs; } ;
struct buf {int b_flags; scalar_t__ b_data; void* b_blkno; int b_iooffset; int b_ioflags; int b_iocmd; } ;
typedef size_t e2fs_lbn_t ;
typedef size_t e2fs_daddr_t ;
typedef size_t daddr_t ;
struct TYPE_3__ {int ru_inblock; } ;
struct TYPE_4__ {TYPE_1__ td_ru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (struct ext2mount*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 struct ext2mount* FUNC_4 (struct mount*) ;
 struct inode* FUNC_5 (struct vnode*) ;
 void* FUNC_6 (struct ext2mount*,size_t) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct buf*) ;
 int FUNC_10 (struct buf*) ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct vnode*,size_t,struct indir*,int*) ;
 struct buf* FUNC_13 (struct vnode*,size_t,int,int ,int ,int ) ;
 int FUNC_14 (int *,size_t) ;
 scalar_t__ FUNC_15 (struct ext2mount*,size_t,size_t) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,struct buf*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_18 (struct buf*,int ) ;

int
FUNC_19(struct vnode *VAR_10, daddr_t VAR_11, daddr_t *VAR_12, int *VAR_13, int *VAR_14)
{
 struct inode *VAR_15;
 struct buf *VAR_16;
 struct ext2mount *VAR_17;
 struct mount *VAR_18;
 struct indir VAR_19[VAR_5 + 1], *VAR_20;
 daddr_t VAR_21;
 e2fs_lbn_t VAR_22;
 int VAR_23, VAR_24, VAR_25 = 0, VAR_26;
 int *VAR_27;

 VAR_20 = ((void*)0);
 VAR_15 = FUNC_5(VAR_10);
 VAR_18 = VAR_10->v_mount;
 VAR_17 = FUNC_4(VAR_18);

 VAR_26 = FUNC_0(VAR_17->um_e2fs);

 if (VAR_13) {
  VAR_25 = VAR_18->mnt_iosize_max / VAR_26 - 1;
  *VAR_13 = 0;
 }
 if (VAR_14)
  *VAR_14 = 0;


 VAR_20 = VAR_19;
 VAR_27 = &VAR_24;
 VAR_23 = FUNC_12(VAR_10, VAR_11, VAR_20, VAR_27);
 if (VAR_23)
  return (VAR_23);

 VAR_24 = *VAR_27;
 if (VAR_24 == 0) {
  *VAR_12 = FUNC_6(VAR_17, VAR_15->i_db[VAR_11]);
  if (*VAR_12 == 0) {
   *VAR_12 = -1;
  } else if (VAR_13) {
   daddr_t VAR_28 = VAR_11;

   for (++VAR_11; VAR_11 < VAR_4 && *VAR_13 < VAR_25 &&
       FUNC_15(VAR_17, VAR_15->i_db[VAR_11 - 1], VAR_15->i_db[VAR_11]);
       ++VAR_11, ++*VAR_13);
   VAR_11 = VAR_28;
   if (VAR_14 && (VAR_11 > 0)) {
    for (--VAR_11; (VAR_11 >= 0) && (*VAR_14 < VAR_25) &&
     FUNC_15(VAR_17, VAR_15->i_db[VAR_11],
      VAR_15->i_db[VAR_11 + 1]);
      --VAR_11, ++*VAR_14);
   }
  }
  return (0);
 }


 VAR_21 = VAR_15->i_ib[VAR_20->in_off];

 for (VAR_16 = ((void*)0), ++VAR_20; --VAR_24; ++VAR_20) {






  VAR_22 = VAR_20->in_lbn;
  if ((VAR_21 == 0 && !FUNC_14(&VAR_10->v_bufobj, VAR_22)) || VAR_22 == VAR_11)
   break;




  if (VAR_16)
   FUNC_7(VAR_16);

  VAR_16 = FUNC_13(VAR_10, VAR_22, VAR_26, 0, 0, 0);
  if ((VAR_16->b_flags & VAR_2) == 0) {




   VAR_16->b_blkno = FUNC_6(VAR_17, VAR_21);
   VAR_16->b_iocmd = VAR_1;
   VAR_16->b_flags &= ~VAR_3;
   VAR_16->b_ioflags &= ~VAR_0;
   FUNC_18(VAR_16, 0);
   VAR_16->b_iooffset = FUNC_11(VAR_16->b_blkno);
   FUNC_9(VAR_16);







   VAR_8->td_ru.ru_inblock++;
   VAR_23 = FUNC_10(VAR_16);
   if (VAR_23) {
    FUNC_8(VAR_16);
    return (VAR_23);
   }
  }

  VAR_21 = ((e2fs_daddr_t *)VAR_16->b_data)[VAR_20->in_off];
  if (VAR_24 == 1 && VAR_21 && VAR_13) {
   for (VAR_11 = VAR_20->in_off + 1;
       VAR_11 < FUNC_1(VAR_17) && *VAR_13 < VAR_25 &&
       FUNC_15(VAR_17,
       ((e2fs_daddr_t *)VAR_16->b_data)[VAR_11 - 1],
       ((e2fs_daddr_t *)VAR_16->b_data)[VAR_11]);
       ++VAR_11, ++*VAR_13);
   VAR_11 = VAR_20->in_off;
   if (VAR_14 && VAR_11) {
    for (--VAR_11; VAR_11 >= 0 && *VAR_14 < VAR_25 &&
     FUNC_15(VAR_17,
     ((e2fs_daddr_t *)VAR_16->b_data)[VAR_11],
     ((e2fs_daddr_t *)VAR_16->b_data)[VAR_11 + 1]);
     --VAR_11, ++*VAR_14);
   }
  }
 }
 if (VAR_16)
  FUNC_7(VAR_16);
 if ((VAR_15->i_flags & VAR_6) && VAR_21 > 0 && VAR_21 < VAR_17->um_seqinc) {
  *VAR_12 = -1;
  return (0);
 }
 *VAR_12 = FUNC_6(VAR_17, VAR_21);
 if (*VAR_12 == 0) {
  *VAR_12 = -1;
 }
 return (0);
}
