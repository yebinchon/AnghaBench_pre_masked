
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct m_ext2fs {int e2fs_maxfilesize; int e2fs_bsize; } ;
struct inode {int i_size; int i_flag; struct m_ext2fs* i_e2fs; } ;
struct buf {int b_bufsize; int b_flags; scalar_t__ b_data; } ;
typedef int off_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct buf*,int) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct m_ext2fs*,int) ;
 int FUNC_6 (struct m_ext2fs*,struct inode*,int) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct inode*,int,int,struct ucred*,struct buf**,int) ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct inode*,int,int,struct ucred*,struct thread*) ;
 int FUNC_12 (struct m_ext2fs*,int) ;
 int FUNC_13 (struct vnode*,int) ;
 int FUNC_14 (struct vnode*,int,int) ;

__attribute__((used)) static int
FUNC_15(struct vnode *VAR_6, off_t VAR_7, int VAR_8,
    struct ucred *VAR_9, struct thread *VAR_10)
{
 struct vnode *VAR_11 = VAR_6;
 int32_t VAR_12;
 struct m_ext2fs *VAR_13;
 struct inode *VAR_14;
 struct buf *VAR_15;
 uint32_t VAR_16, VAR_17;
 int VAR_18, VAR_19;
 off_t VAR_20;

 VAR_14 = FUNC_1(VAR_11);
 VAR_13 = VAR_14->i_e2fs;
 VAR_20 = VAR_14->i_size;

 if (VAR_20 < VAR_7) {
  if (VAR_7 > VAR_14->i_e2fs->e2fs_maxfilesize) {
   return (VAR_2);
  }
  FUNC_13(VAR_11, VAR_7);
  VAR_17 = FUNC_5(VAR_13, VAR_7 - 1);
  VAR_16 = FUNC_12(VAR_13, VAR_7 - 1);
  VAR_8 |= VAR_0;
  VAR_18 = FUNC_9(VAR_14, VAR_16, VAR_17 + 1, VAR_9, &VAR_15, VAR_8);
  if (VAR_18) {
   FUNC_13(VAR_6, VAR_20);
   return (VAR_18);
  }
  VAR_14->i_size = VAR_7;
  if (VAR_15->b_bufsize == VAR_13->e2fs_bsize)
   VAR_15->b_flags |= VAR_1;
  if (VAR_8 & VAR_5)
   FUNC_7(VAR_15);
  else if (FUNC_0(VAR_11))
   FUNC_4(VAR_15);
  else
   FUNC_3(VAR_15);
  VAR_14->i_flag |= VAR_3 | VAR_4;
  return (FUNC_10(VAR_11, !FUNC_0(VAR_11)));
 }

 VAR_12 = (VAR_7 + VAR_13->e2fs_bsize - 1) / VAR_13->e2fs_bsize;
 VAR_18 = FUNC_11(VAR_14, VAR_12, VAR_8, VAR_9, VAR_10);
 if (VAR_18)
  return (VAR_18);

 VAR_17 = FUNC_5(VAR_13, VAR_7);
 if (VAR_17 == 0) {
  VAR_14->i_size = VAR_7;
 } else {
  VAR_16 = FUNC_12(VAR_13, VAR_7);
  VAR_8 |= VAR_0;
  VAR_18 = FUNC_9(VAR_14, VAR_16, VAR_17, VAR_9, &VAR_15, VAR_8);
  if (VAR_18) {
   return (VAR_18);
  }
  VAR_14->i_size = VAR_7;
  VAR_19 = FUNC_6(VAR_13, VAR_14, VAR_16);
  FUNC_8((char *)VAR_15->b_data + VAR_17, (u_int)(VAR_19 - VAR_17));
  FUNC_2(VAR_15, VAR_19);
  if (VAR_15->b_bufsize == VAR_13->e2fs_bsize)
   VAR_15->b_flags |= VAR_1;
  if (VAR_8 & VAR_5)
   FUNC_7(VAR_15);
  else if (FUNC_0(VAR_11))
   FUNC_4(VAR_15);
  else
   FUNC_3(VAR_15);
 }

 VAR_14->i_size = VAR_20;
 VAR_18 = FUNC_14(VAR_11, VAR_7, (int)VAR_13->e2fs_bsize);
 if (VAR_18)
  return (VAR_18);

 FUNC_13(VAR_11, VAR_7);

 VAR_14->i_size = VAR_7;
 VAR_14->i_flag |= VAR_3 | VAR_4;
 VAR_18 = FUNC_10(VAR_11, !FUNC_0(VAR_11));

 return (VAR_18);
}
