
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int capabilities; scalar_t__ protocol; } ;
struct smb_sb_info {TYPE_3__ opt; TYPE_2__* ops; TYPE_1__* mnt; } ;
struct smb_fattr {long f_mode; int attr; int f_atime; int f_mtime; } ;
struct inode {int i_mapping; scalar_t__ i_size; } ;
struct iattr {int ia_valid; scalar_t__ ia_uid; unsigned int ia_mode; int ia_atime; int ia_mtime; scalar_t__ ia_size; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_5__ {int (* truncate ) (struct inode*,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ uid; scalar_t__ gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (char*,int ,long,long) ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct iattr*) ;
 int FUNC_4 () ;
 struct smb_sb_info* FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct inode*,struct smb_fattr*) ;
 int FUNC_7 (struct dentry*,int ) ;
 int FUNC_8 (struct dentry*,struct smb_fattr*) ;
 int FUNC_9 (struct dentry*,struct iattr*,int ,int ) ;
 int FUNC_10 (struct dentry*,struct smb_fattr*) ;
 int FUNC_11 (struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (struct inode*,scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 (struct inode*,scalar_t__) ;

int
FUNC_16(struct dentry *VAR_15, struct iattr *VAR_16)
{
 struct inode *VAR_17 = VAR_15->d_inode;
 struct smb_sb_info *VAR_18 = FUNC_5(VAR_15);
 unsigned int VAR_19 = (VAR_11 | VAR_10 | VAR_12);
 int VAR_20, VAR_21, VAR_22 = 0;
 struct smb_fattr VAR_23;

 FUNC_4();

 VAR_20 = FUNC_12(VAR_15);
 if (VAR_20)
  goto out;

 if ((VAR_20 = FUNC_3(VAR_17, VAR_16)) < 0)
  goto out;

 VAR_20 = -VAR_6;
 if ((VAR_16->ia_valid & VAR_5) && (VAR_16->ia_uid != VAR_18->mnt->uid))
  goto out;

 if ((VAR_16->ia_valid & VAR_1) && (VAR_16->ia_uid != VAR_18->mnt->gid))
  goto out;

 if ((VAR_16->ia_valid & VAR_2) && (VAR_16->ia_mode & ~VAR_19))
  goto out;

 if ((VAR_16->ia_valid & VAR_4) != 0) {
  FUNC_1("changing %s/%s, old size=%ld, new size=%ld\n",
   FUNC_0(VAR_15),
   (long) VAR_17->i_size, (long) VAR_16->ia_size);

  FUNC_2(VAR_17->i_mapping);

  VAR_20 = FUNC_7(VAR_15, VAR_7);
  if (VAR_20)
   goto out;
  VAR_20 = VAR_18->ops->truncate(VAR_17, VAR_16->ia_size);
  if (VAR_20)
   goto out;
  VAR_20 = FUNC_15(VAR_17, VAR_16->ia_size);
  if (VAR_20)
   goto out;
  VAR_22 = 1;
 }

 if (VAR_18->opt.capabilities & VAR_8) {

  VAR_16->ia_valid &= ~VAR_4;

  VAR_20 = FUNC_9(VAR_15, VAR_16, 0, 0);
  if (!VAR_20)
   VAR_22 = 1;

  goto out;
 }






 FUNC_6(VAR_17, &VAR_23);

 VAR_21 = 0;
 if ((VAR_16->ia_valid & VAR_3) != 0) {
  VAR_23.f_mtime = VAR_16->ia_mtime;
  VAR_21 = 1;
 }
 if ((VAR_16->ia_valid & VAR_0) != 0) {
  VAR_23.f_atime = VAR_16->ia_atime;

  if (VAR_18->opt.protocol >= VAR_9)
   VAR_21 = 1;
 }
 if (VAR_21) {
  VAR_20 = FUNC_10(VAR_15, &VAR_23);
  if (VAR_20)
   goto out;
  VAR_22 = 1;
 }





 if ((VAR_16->ia_valid & VAR_2) != 0) {
  FUNC_1("%s/%s mode change, old=%x, new=%x\n",
   FUNC_0(VAR_15), VAR_23.f_mode, VAR_16->ia_mode);
  VAR_21 = 0;
  if (VAR_16->ia_mode & VAR_13) {
   if (VAR_23.attr & VAR_14) {
    VAR_23.attr &= ~VAR_14;
    VAR_21 = 1;
   }
  } else {
   if (!(VAR_23.attr & VAR_14)) {
    VAR_23.attr |= VAR_14;
    VAR_21 = 1;
   }
  }
  if (VAR_21) {
   VAR_20 = FUNC_8(VAR_15, &VAR_23);
   if (VAR_20)
    goto out;
   VAR_22 = 1;
  }
 }
 VAR_20 = 0;

out:
 if (VAR_22)
  FUNC_11(VAR_15);
 FUNC_14();
 return VAR_20;
}
