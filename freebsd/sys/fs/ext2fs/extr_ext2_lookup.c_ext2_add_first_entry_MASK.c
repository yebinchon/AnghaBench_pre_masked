
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct uio {int uio_offset; int uio_resid; int uio_iovcnt; struct thread* uio_td; int uio_segflg; int uio_rw; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct iovec {int iov_len; void* iov_base; } ;
struct inode {int i_offset; int i_flag; int i_size; TYPE_1__* i_e2fs; } ;
struct ext2fs_direct_tail {int dummy; } ;
struct ext2fs_direct_2 {int e2d_reclen; int e2d_namlen; } ;
struct componentname {int cn_cred; } ;
typedef void* caddr_t ;
struct TYPE_2__ {int e2fs_bsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct vnode*,struct uio*,int ,int ) ;
 struct inode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct inode*,struct ext2fs_direct_2*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (char*,struct ext2fs_direct_2*,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static int
FUNC_12(struct vnode *VAR_8, struct ext2fs_direct_2 *VAR_9,
    struct componentname *VAR_10)
{
 struct inode *VAR_11;
 struct iovec VAR_12;
 struct uio VAR_13;
 char* VAR_14 = ((void*)0);
 int VAR_15, VAR_16;

 VAR_11 = FUNC_4(VAR_8);
 VAR_15 = VAR_11->i_e2fs->e2fs_bsize;

 if (VAR_11->i_offset & (VAR_15 - 1))
  FUNC_10("ext2_add_first_entry: bad directory offset");

 if (FUNC_2(VAR_11->i_e2fs,
     VAR_1)) {
  VAR_9->e2d_reclen = VAR_15 - sizeof(struct ext2fs_direct_tail);
  VAR_14 = FUNC_8(VAR_15, VAR_4, VAR_5);
  if (!VAR_14) {
   VAR_16 = VAR_0;
   goto out;
  }
  FUNC_9(VAR_14, VAR_9, FUNC_1(VAR_9->e2d_namlen));
  FUNC_6(FUNC_0(VAR_14, VAR_15));
  FUNC_5(VAR_11, (struct ext2fs_direct_2 *)VAR_14);

  VAR_13.uio_offset = VAR_11->i_offset;
  VAR_13.uio_resid = VAR_15;
  VAR_12.iov_len = VAR_13.uio_resid;
  VAR_12.iov_base = (caddr_t)VAR_14;
 } else {
  VAR_9->e2d_reclen = VAR_15;
  VAR_13.uio_offset = VAR_11->i_offset;
  VAR_13.uio_resid = FUNC_1(VAR_9->e2d_namlen);
  VAR_12.iov_len = VAR_13.uio_resid;
  VAR_12.iov_base = (caddr_t)VAR_9;
 }

 VAR_13.uio_iov = &VAR_12;
 VAR_13.uio_iovcnt = 1;
 VAR_13.uio_rw = VAR_7;
 VAR_13.uio_segflg = VAR_6;
 VAR_13.uio_td = (struct thread *)0;
 VAR_16 = FUNC_3(VAR_8, &VAR_13, VAR_3, VAR_10->cn_cred);
 if (VAR_16)
  goto out;

 VAR_11->i_size = FUNC_11(VAR_11->i_size, VAR_15);
 VAR_11->i_flag |= VAR_2;

out:
 FUNC_7(VAR_14, VAR_4);
 return (VAR_16);

}
