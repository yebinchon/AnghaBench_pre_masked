
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vnode {int dummy; } ;
struct inode {scalar_t__ i_offset; int i_count; scalar_t__ i_size; int i_flag; } ;
struct ext2fs_direct_2 {int e2d_reclen; scalar_t__ e2d_ino; int e2d_namlen; } ;
struct buf {scalar_t__ b_data; } ;
typedef int off_t ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_2 (struct vnode*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct vnode*,int ,char**,struct buf**) ;
 int FUNC_7 (struct inode*,struct ext2fs_direct_2*) ;
 int FUNC_8 (char*) ;

int
FUNC_9(struct vnode *VAR_2, struct ext2fs_direct_2 *VAR_3)
{
 struct ext2fs_direct_2 *VAR_4, *VAR_5;
 struct inode *VAR_6;
 struct buf *VAR_7;
 u_int VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 char *VAR_13;

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6->i_offset + VAR_6->i_count > VAR_6->i_size)
  VAR_6->i_size = VAR_6->i_offset + VAR_6->i_count;



 if ((VAR_9 = FUNC_6(VAR_2, (off_t)VAR_6->i_offset, &VAR_13,
     &VAR_7)) != 0)
  return (VAR_9);







 VAR_11 = FUNC_1(VAR_3->e2d_namlen);
 VAR_4 = (struct ext2fs_direct_2 *)VAR_13;
 VAR_8 = FUNC_1(VAR_4->e2d_namlen);
 VAR_12 = VAR_4->e2d_reclen - VAR_8;
 for (VAR_10 = VAR_4->e2d_reclen; VAR_10 < VAR_6->i_count; ) {
  VAR_5 = (struct ext2fs_direct_2 *)(VAR_13 + VAR_10);
  if (VAR_4->e2d_ino) {

   VAR_4->e2d_reclen = VAR_8;
   VAR_4 = (struct ext2fs_direct_2 *)((char *)VAR_4 + VAR_8);
  } else {

   VAR_12 += VAR_8;
  }
  VAR_8 = FUNC_1(VAR_5->e2d_namlen);
  VAR_12 += VAR_5->e2d_reclen - VAR_8;
  VAR_10 += VAR_5->e2d_reclen;
  FUNC_3((caddr_t)VAR_5, (caddr_t)VAR_4, VAR_8);
 }




 if (VAR_4->e2d_ino == 0) {
  if (VAR_12 + VAR_8 < VAR_11)
   FUNC_8("ext2_direnter: compact1");
  VAR_3->e2d_reclen = VAR_12 + VAR_8;
 } else {
  if (VAR_12 < VAR_11)
   FUNC_8("ext2_direnter: compact2");
  VAR_3->e2d_reclen = VAR_12;
  VAR_4->e2d_reclen = VAR_8;
  VAR_4 = (struct ext2fs_direct_2 *)((char *)VAR_4 + VAR_8);
 }
 FUNC_3((caddr_t)VAR_3, (caddr_t)VAR_4, (u_int)VAR_11);
 FUNC_7(VAR_6, (struct ext2fs_direct_2 *)VAR_7->b_data);
 if (FUNC_0(VAR_2)) {
  FUNC_4(VAR_7);
  VAR_9 = 0;
 } else {
  VAR_9 = FUNC_5(VAR_7);
 }
 VAR_6->i_flag |= VAR_0 | VAR_1;
 return (VAR_9);
}
