
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vnode {int dummy; } ;
struct m_ext2fs {scalar_t__ e2fs_bsize; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct buf {int b_flags; scalar_t__ b_bcount; scalar_t__ b_bufsize; int b_blkno; scalar_t__ b_data; int b_iooffset; int b_iocmd; } ;
typedef int int32_t ;
typedef int e4fs_daddr_t ;
typedef int e2fs_lbn_t ;
typedef int e2fs_daddr_t ;
typedef int daddr_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 struct vnode* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct m_ext2fs*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct buf*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct inode*,int,scalar_t__) ;
 int FUNC_13 (int*,int ) ;
 int FUNC_14 (struct m_ext2fs*,int) ;
 struct buf* FUNC_15 (struct vnode*,int,int,int ,int ,int ) ;
 int* FUNC_16 (scalar_t__,int ,int ) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (struct buf*,int ) ;

__attribute__((used)) static int
FUNC_19(struct inode *VAR_7, daddr_t VAR_8, daddr_t VAR_9,
    daddr_t VAR_10, int VAR_11, e4fs_daddr_t *VAR_12)
{
 struct buf *VAR_13;
 struct m_ext2fs *VAR_14 = VAR_7->i_e2fs;
 struct vnode *VAR_15;
 e2fs_daddr_t *VAR_16, *VAR_17;
 int VAR_18, VAR_19, VAR_20 = 0, VAR_21 = 0;
 e2fs_lbn_t VAR_22, VAR_23, VAR_24;
 e4fs_daddr_t VAR_25, VAR_26, VAR_27 = 0;






 VAR_26 = 1;
 for (VAR_18 = VAR_6; VAR_18 < VAR_11; VAR_18++)
  VAR_26 *= FUNC_2(VAR_14);
 VAR_24 = VAR_10;
 if (VAR_10 > 0)
  VAR_24 /= VAR_26;
 VAR_19 = FUNC_7(VAR_14->e2fs_bsize);
 VAR_15 = FUNC_1(VAR_7);
 VAR_13 = FUNC_15(VAR_15, VAR_8, (int)VAR_14->e2fs_bsize, 0, 0, 0);
 if ((VAR_13->b_flags & (VAR_2 | VAR_1)) == 0) {
  VAR_13->b_iocmd = VAR_0;
  if (VAR_13->b_bcount > VAR_13->b_bufsize)
   FUNC_17("ext2_indirtrunc: bad buffer size");
  VAR_13->b_blkno = VAR_9;
  FUNC_18(VAR_13, 0);
  VAR_13->b_iooffset = FUNC_11(VAR_13->b_blkno);
  FUNC_6(VAR_13);
  VAR_20 = FUNC_8(VAR_13);
 }
 if (VAR_20) {
  FUNC_5(VAR_13);
  *VAR_12 = 0;
  return (VAR_20);
 }
 VAR_16 = (e2fs_daddr_t *)VAR_13->b_data;
 VAR_17 = FUNC_16(VAR_14->e2fs_bsize, VAR_4, VAR_5);
 FUNC_3((caddr_t)VAR_16, (caddr_t)VAR_17, (u_int)VAR_14->e2fs_bsize);
 FUNC_10((caddr_t)&VAR_16[VAR_24 + 1],
     (FUNC_2(VAR_14) - (VAR_24 + 1)) * sizeof(e2fs_daddr_t));
 if (VAR_24 == -1)
  VAR_13->b_flags |= VAR_3;
 if (FUNC_0(VAR_15)) {
  FUNC_4(VAR_13);
 } else {
  VAR_20 = FUNC_9(VAR_13);
  if (VAR_20)
   VAR_21 = VAR_20;
 }
 VAR_16 = VAR_17;




 for (VAR_18 = FUNC_2(VAR_14) - 1, VAR_23 = VAR_8 + 1 - VAR_18 * VAR_26; VAR_18 > VAR_24;
     VAR_18--, VAR_23 += VAR_26) {
  VAR_22 = VAR_16[VAR_18];
  if (VAR_22 == 0)
   continue;
  if (VAR_11 > VAR_6) {
   if ((VAR_20 = FUNC_19(VAR_7, VAR_23,
       FUNC_14(VAR_14, VAR_22), (int32_t)-1, VAR_11 - 1, &VAR_25)) != 0)
    VAR_21 = VAR_20;
   VAR_27 += VAR_25;
  }
  FUNC_12(VAR_7, VAR_22, VAR_14->e2fs_bsize);
  VAR_27 += VAR_19;
 }




 if (VAR_11 > VAR_6 && VAR_10 >= 0) {
  VAR_24 = VAR_10 % VAR_26;
  VAR_22 = VAR_16[VAR_18];
  if (VAR_22 != 0) {
   if ((VAR_20 = FUNC_19(VAR_7, VAR_23, FUNC_14(VAR_14, VAR_22),
       VAR_24, VAR_11 - 1, &VAR_25)) != 0)
    VAR_21 = VAR_20;
   VAR_27 += VAR_25;
  }
 }
 FUNC_13(VAR_17, VAR_4);
 *VAR_12 = VAR_27;
 return (VAR_21);
}
