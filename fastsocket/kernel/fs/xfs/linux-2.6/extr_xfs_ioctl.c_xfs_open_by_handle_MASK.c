
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int oflags; } ;
typedef TYPE_2__ xfs_fsop_handlereq_t ;
struct inode {int i_mode; } ;
struct TYPE_5__ {int mnt; } ;
struct file {int f_mode; int f_flags; TYPE_1__ f_path; struct inode* d_inode; } ;
struct dentry {int f_mode; int f_flags; TYPE_1__ f_path; struct inode* d_inode; } ;
struct cred {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct file*) ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct cred* FUNC_9 () ;
 struct file* FUNC_10 (struct file*,int ,int,struct cred const*) ;
 int FUNC_11 (struct file*) ;
 int FUNC_12 (int,struct file*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 struct file* FUNC_16 (struct file*,TYPE_2__*) ;

int
FUNC_17(
 struct file *VAR_11,
 xfs_fsop_handlereq_t *VAR_12)
{
 const struct cred *VAR_13 = FUNC_9();
 int VAR_14;
 int VAR_15;
 int VAR_16;
 struct file *VAR_17;
 struct inode *VAR_18;
 struct dentry *VAR_19;
 fmode_t VAR_20;

 if (!FUNC_8(VAR_0))
  return -FUNC_7(VAR_3);

 VAR_19 = FUNC_16(VAR_11, VAR_12);
 if (FUNC_1(VAR_19))
  return FUNC_4(VAR_19);
 VAR_18 = VAR_19->d_inode;


 if (!(FUNC_6(VAR_18->i_mode) || FUNC_5(VAR_18->i_mode))) {
  VAR_14 = -FUNC_7(VAR_3);
  goto out_dput;
 }


 VAR_12->oflags |= VAR_7;


 VAR_16 = VAR_12->oflags;
 VAR_20 = FUNC_3(VAR_16);
 if ((!(VAR_16 & VAR_6) || (VAR_16 & VAR_9)) &&
     (VAR_20 & VAR_5) && FUNC_0(VAR_18)) {
  VAR_14 = -FUNC_7(VAR_3);
  goto out_dput;
 }

 if ((VAR_20 & VAR_5) && FUNC_2(VAR_18)) {
  VAR_14 = -FUNC_7(VAR_1);
  goto out_dput;
 }


 if (FUNC_5(VAR_18->i_mode) && (VAR_20 & VAR_5)) {
  VAR_14 = -FUNC_7(VAR_2);
  goto out_dput;
 }

 VAR_15 = FUNC_13();
 if (VAR_15 < 0) {
  VAR_14 = VAR_15;
  goto out_dput;
 }

 VAR_17 = FUNC_10(VAR_19, FUNC_14(VAR_11->f_path.mnt),
      VAR_12->oflags, VAR_13);
 if (FUNC_1(VAR_17)) {
  FUNC_15(VAR_15);
  return FUNC_4(VAR_17);
 }

 if (VAR_18->i_mode & VAR_10) {
  VAR_17->f_flags |= VAR_8;
  VAR_17->f_mode |= VAR_4;
 }

 FUNC_12(VAR_15, VAR_17);
 return VAR_15;

 out_dput:
 FUNC_11(VAR_19);
 return VAR_14;
}
