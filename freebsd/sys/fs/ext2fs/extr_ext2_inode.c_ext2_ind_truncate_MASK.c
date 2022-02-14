
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct TYPE_4__ {scalar_t__ bv_cnt; } ;
struct TYPE_3__ {scalar_t__ bv_cnt; } ;
struct bufobj {TYPE_2__ bo_clean; TYPE_1__ bo_dirty; } ;
struct vnode {struct bufobj v_bufobj; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct m_ext2fs {scalar_t__ e2fs_maxfilesize; scalar_t__ e2fs_bsize; long e2fs_fsize; } ;
struct inode {scalar_t__ i_size; int i_flag; scalar_t__* i_ib; scalar_t__* i_db; int i_blocks; struct m_ext2fs* i_e2fs; } ;
struct buf {scalar_t__ b_bufsize; int b_flags; scalar_t__ b_data; } ;
typedef scalar_t__ off_t ;
typedef int e4fs_daddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct m_ext2fs*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct inode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct buf*,int) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct m_ext2fs*,scalar_t__) ;
 void* FUNC_9 (struct m_ext2fs*,struct inode*,int) ;
 int FUNC_10 (long) ;
 int FUNC_11 (struct buf*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (struct inode*,int,int,struct ucred*,struct buf**,int) ;
 int FUNC_14 (struct inode*,int,long) ;
 int FUNC_15 (struct inode*,int,int ,int,int,int*) ;
 int FUNC_16 (struct vnode*,int) ;
 int FUNC_17 (struct m_ext2fs*,int) ;
 int FUNC_18 (struct m_ext2fs*,scalar_t__) ;
 int FUNC_19 (struct m_ext2fs*,long) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (struct vnode*,scalar_t__) ;
 int FUNC_22 (struct vnode*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_23(struct vnode *VAR_11, off_t VAR_12, int VAR_13, struct ucred *VAR_14,
    struct thread *VAR_15)
{
 struct vnode *VAR_16 = VAR_11;
 e4fs_daddr_t VAR_17;
 struct inode *VAR_18;
 e4fs_daddr_t VAR_19, VAR_20, VAR_21[VAR_5], VAR_22[VAR_5];
 uint32_t VAR_23[VAR_4 + VAR_5];
 uint32_t VAR_24[VAR_4 + VAR_5];
 struct m_ext2fs *VAR_25;
 struct buf *VAR_26;
 int VAR_27, VAR_28, VAR_29;
 e4fs_daddr_t VAR_30, VAR_31, VAR_32 = 0;
 int VAR_33, VAR_34, VAR_35;
 off_t VAR_36;




 VAR_18 = FUNC_4(VAR_16);




 VAR_25 = VAR_18->i_e2fs;
 VAR_36 = VAR_18->i_size;





 if (VAR_36 < VAR_12) {
  if (VAR_12 > VAR_18->i_e2fs->e2fs_maxfilesize)
   return (VAR_3);
  FUNC_21(VAR_16, VAR_12);
  VAR_27 = FUNC_8(VAR_25, VAR_12 - 1);
  VAR_20 = FUNC_18(VAR_25, VAR_12 - 1);
  VAR_13 |= VAR_0;
  VAR_33 = FUNC_13(VAR_18, VAR_20, VAR_27 + 1, VAR_14, &VAR_26, VAR_13);
  if (VAR_33) {
   FUNC_21(VAR_11, VAR_36);
   return (VAR_33);
  }
  VAR_18->i_size = VAR_12;
  if (VAR_26->b_bufsize == VAR_25->e2fs_bsize)
   VAR_26->b_flags |= VAR_1;
  if (VAR_13 & VAR_8)
   FUNC_11(VAR_26);
  else if (FUNC_2(VAR_16))
   FUNC_7(VAR_26);
  else
   FUNC_6(VAR_26);
  VAR_18->i_flag |= VAR_6 | VAR_7;
  return (FUNC_16(VAR_16, !FUNC_2(VAR_16)));
 }
 VAR_27 = FUNC_8(VAR_25, VAR_12);
 if (VAR_27 == 0) {
  VAR_18->i_size = VAR_12;
 } else {
  VAR_20 = FUNC_18(VAR_25, VAR_12);
  VAR_13 |= VAR_0;
  VAR_33 = FUNC_13(VAR_18, VAR_20, VAR_27, VAR_14, &VAR_26, VAR_13);
  if (VAR_33)
   return (VAR_33);
  VAR_18->i_size = VAR_12;
  VAR_28 = FUNC_9(VAR_25, VAR_18, VAR_20);
  FUNC_12((char *)VAR_26->b_data + VAR_27, (u_int)(VAR_28 - VAR_27));
  FUNC_5(VAR_26, VAR_28);
  if (VAR_26->b_bufsize == VAR_25->e2fs_bsize)
   VAR_26->b_flags |= VAR_1;
  if (VAR_13 & VAR_8)
   FUNC_11(VAR_26);
  else if (FUNC_2(VAR_16))
   FUNC_7(VAR_26);
  else
   FUNC_6(VAR_26);
 }






 VAR_17 = FUNC_18(VAR_25, VAR_12 + VAR_25->e2fs_bsize - 1) - 1;
 VAR_21[VAR_9] = VAR_17 - VAR_4;
 VAR_21[VAR_2] = VAR_21[VAR_9] - FUNC_3(VAR_25);
 VAR_21[VAR_10] = VAR_21[VAR_2] - FUNC_3(VAR_25) * FUNC_3(VAR_25);
 VAR_31 = FUNC_10(VAR_25->e2fs_bsize);






 for (VAR_29 = VAR_10; VAR_29 >= VAR_9; VAR_29--) {
  VAR_23[VAR_4 + VAR_29] = VAR_18->i_ib[VAR_29];
  if (VAR_21[VAR_29] < 0) {
   VAR_18->i_ib[VAR_29] = 0;
   VAR_21[VAR_29] = -1;
  }
 }
 for (VAR_34 = 0; VAR_34 < VAR_4; VAR_34++) {
  VAR_23[VAR_34] = VAR_18->i_db[VAR_34];
  if (VAR_34 > VAR_17)
   VAR_18->i_db[VAR_34] = 0;
 }
 VAR_18->i_flag |= VAR_6 | VAR_7;
 VAR_35 = FUNC_16(VAR_16, !FUNC_2(VAR_16));







 for (VAR_34 = 0; VAR_34 < VAR_4; VAR_34++) {
  VAR_24[VAR_34] = VAR_18->i_db[VAR_34];
  VAR_18->i_db[VAR_34] = VAR_23[VAR_34];
 }
 for (VAR_34 = 0; VAR_34 < VAR_5; VAR_34++) {
  VAR_24[VAR_4 + VAR_34] = VAR_18->i_ib[VAR_34];
  VAR_18->i_ib[VAR_34] = VAR_23[VAR_4 + VAR_34];
 }
 VAR_18->i_size = VAR_36;
 VAR_33 = FUNC_22(VAR_16, VAR_12, (int)VAR_25->e2fs_bsize);
 if (VAR_33 && (VAR_35 == 0))
  VAR_35 = VAR_33;
 FUNC_21(VAR_16, VAR_12);




 VAR_22[VAR_9] = -VAR_4;
 VAR_22[VAR_2] = VAR_22[VAR_9] - FUNC_3(VAR_25) - 1;
 VAR_22[VAR_10] = VAR_22[VAR_2] - FUNC_3(VAR_25) * FUNC_3(VAR_25) - 1;
 for (VAR_29 = VAR_10; VAR_29 >= VAR_9; VAR_29--) {
  VAR_19 = VAR_18->i_ib[VAR_29];
  if (VAR_19 != 0) {
   VAR_33 = FUNC_15(VAR_18, VAR_22[VAR_29],
       FUNC_17(VAR_25, VAR_19), VAR_21[VAR_29], VAR_29, &VAR_30);
   if (VAR_33)
    VAR_35 = VAR_33;
   VAR_32 += VAR_30;
   if (VAR_21[VAR_29] < 0) {
    VAR_18->i_ib[VAR_29] = 0;
    FUNC_14(VAR_18, VAR_19, VAR_25->e2fs_fsize);
    VAR_32 += VAR_31;
   }
  }
  if (VAR_21[VAR_29] >= 0)
   goto done;
 }




 for (VAR_34 = VAR_4 - 1; VAR_34 > VAR_17; VAR_34--) {
  long VAR_37;

  VAR_19 = VAR_18->i_db[VAR_34];
  if (VAR_19 == 0)
   continue;
  VAR_18->i_db[VAR_34] = 0;
  VAR_37 = FUNC_9(VAR_25, VAR_18, VAR_34);
  FUNC_14(VAR_18, VAR_19, VAR_37);
  VAR_32 += FUNC_10(VAR_37);
 }
 if (VAR_17 < 0)
  goto done;





 VAR_19 = VAR_18->i_db[VAR_17];
 if (VAR_19 != 0) {
  long VAR_38, VAR_39;





  VAR_38 = FUNC_9(VAR_25, VAR_18, VAR_17);
  VAR_18->i_size = VAR_12;
  VAR_39 = FUNC_9(VAR_25, VAR_18, VAR_17);
  if (VAR_39 == 0)
   FUNC_20("ext2_truncate: newspace");
  if (VAR_38 - VAR_39 > 0) {





   VAR_19 += FUNC_19(VAR_25, VAR_39);
   FUNC_14(VAR_18, VAR_19, VAR_38 - VAR_39);
   VAR_32 += FUNC_10(VAR_38 - VAR_39);
  }
 }
done:
 VAR_18->i_size = VAR_12;
 if (VAR_18->i_blocks >= VAR_32)
  VAR_18->i_blocks -= VAR_32;
 else
  VAR_18->i_blocks = 0;
 VAR_18->i_flag |= VAR_6;
 FUNC_21(VAR_16, VAR_12);
 return (VAR_35);
}
