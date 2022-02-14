
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ sx_fdtmp; scalar_t__ sx_fdtarget; } ;
typedef TYPE_3__ xfs_swapext_t ;
struct TYPE_13__ {scalar_t__ i_mount; scalar_t__ i_ino; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_11__ {TYPE_1__* dentry; } ;
struct file {int f_mode; int f_flags; TYPE_2__ f_path; } ;
struct TYPE_10__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_4__* FUNC_3 (int ) ;
 struct file* FUNC_4 (int) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (TYPE_4__*,TYPE_4__*,TYPE_3__*) ;

int
FUNC_7(
 xfs_swapext_t *VAR_6)
{
 xfs_inode_t *VAR_7, *VAR_8;
 struct file *VAR_9, *VAR_10;
 int VAR_11 = 0;


 VAR_9 = FUNC_4((int)VAR_6->sx_fdtarget);
 if (!VAR_9) {
  VAR_11 = FUNC_1(VAR_1);
  goto out;
 }

 if (!(VAR_9->f_mode & VAR_4) ||
     !(VAR_9->f_mode & VAR_3) ||
     (VAR_9->f_flags & VAR_5)) {
  VAR_11 = FUNC_1(VAR_0);
  goto out_put_file;
 }

 VAR_10 = FUNC_4((int)VAR_6->sx_fdtmp);
 if (!VAR_10) {
  VAR_11 = FUNC_1(VAR_1);
  goto out_put_file;
 }

 if (!(VAR_10->f_mode & VAR_4) ||
     !(VAR_10->f_mode & VAR_3) ||
     (VAR_10->f_flags & VAR_5)) {
  VAR_11 = FUNC_1(VAR_0);
  goto out_put_tmp_file;
 }

 if (FUNC_0(VAR_9->f_path.dentry->d_inode) ||
     FUNC_0(VAR_10->f_path.dentry->d_inode)) {
  VAR_11 = FUNC_1(VAR_1);
  goto out_put_tmp_file;
 }

 VAR_7 = FUNC_3(VAR_9->f_path.dentry->d_inode);
 VAR_8 = FUNC_3(VAR_10->f_path.dentry->d_inode);

 if (VAR_7->i_mount != VAR_8->i_mount) {
  VAR_11 = FUNC_1(VAR_1);
  goto out_put_tmp_file;
 }

 if (VAR_7->i_ino == VAR_8->i_ino) {
  VAR_11 = FUNC_1(VAR_1);
  goto out_put_tmp_file;
 }

 if (FUNC_2(VAR_7->i_mount)) {
  VAR_11 = FUNC_1(VAR_2);
  goto out_put_tmp_file;
 }

 VAR_11 = FUNC_6(VAR_7, VAR_8, VAR_6);

 out_put_tmp_file:
 FUNC_5(VAR_10);
 out_put_file:
 FUNC_5(VAR_9);
 out:
 return VAR_11;
}
