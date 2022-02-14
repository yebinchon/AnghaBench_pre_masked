
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct inode {int i_flag; int i_size; int i_offset; scalar_t__ i_count; int i_endoff; TYPE_1__* i_e2fs; int i_mode; int i_number; } ;
struct ext2fs_direct_2 {int e2d_name; int e2d_type; scalar_t__ e2d_namlen; int e2d_ino; } ;
struct componentname {int cn_flags; int cn_thread; int cn_cred; scalar_t__ cn_namelen; int cn_nameptr; } ;
typedef int off_t ;
struct TYPE_3__ {int e2fs_bsize; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_4 (struct vnode*) ;
 int FUNC_5 (int ,int ,unsigned int) ;
 int FUNC_6 (struct vnode*,struct ext2fs_direct_2*) ;
 int FUNC_7 (struct vnode*,struct ext2fs_direct_2*,struct componentname*) ;
 int FUNC_8 (struct vnode*,struct ext2fs_direct_2*,struct componentname*) ;
 int FUNC_9 (struct vnode*,struct componentname*,struct ext2fs_direct_2*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (struct vnode*,int ,int ,int ,int ) ;
 int FUNC_12 (char*) ;

int
FUNC_13(struct inode *VAR_8, struct vnode *VAR_9, struct componentname *VAR_10)
{
 struct inode *VAR_11;
 struct ext2fs_direct_2 VAR_12;
 int VAR_13 = VAR_8->i_e2fs->e2fs_bsize;
 int VAR_14;






 VAR_11 = FUNC_4(VAR_9);
 VAR_12.e2d_ino = VAR_8->i_number;
 VAR_12.e2d_namlen = VAR_10->cn_namelen;
 if (FUNC_2(VAR_8->i_e2fs,
     VAR_1))
  VAR_12.e2d_type = FUNC_0(FUNC_3(VAR_8->i_mode));
 else
  VAR_12.e2d_type = VAR_2;
 FUNC_5(VAR_10->cn_nameptr, VAR_12.e2d_name, (unsigned)VAR_10->cn_namelen + 1);

 if (FUNC_10(VAR_11)) {
  VAR_14 = FUNC_8(VAR_9, &VAR_12, VAR_10);
  if (VAR_14) {
   VAR_11->i_flag &= ~VAR_4;
   VAR_11->i_flag |= VAR_3 | VAR_5;
  }
  return (VAR_14);
 }

 if (FUNC_1(VAR_8->i_e2fs, VAR_0) &&
     !FUNC_10(VAR_11)) {
  if ((VAR_11->i_size / VAR_13) == 1 &&
      VAR_11->i_offset == VAR_13) {




   return FUNC_9(VAR_9, VAR_10, &VAR_12);
  }
 }







 if (VAR_11->i_count == 0)
  return FUNC_7(VAR_9, &VAR_12, VAR_10);

 VAR_14 = FUNC_6(VAR_9, &VAR_12);
 if (!VAR_14 && VAR_11->i_endoff && VAR_11->i_endoff < VAR_11->i_size)
  VAR_14 = FUNC_11(VAR_9, (off_t)VAR_11->i_endoff, VAR_6,
      VAR_10->cn_cred, VAR_10->cn_thread);
 return (VAR_14);
}
