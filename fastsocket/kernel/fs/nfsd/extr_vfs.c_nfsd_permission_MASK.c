
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int mnt; } ;
struct svc_export {int ex_flags; TYPE_1__ ex_path; } ;
struct inode {int i_mode; int i_uid; int i_gid; } ;
struct dentry {struct inode* d_inode; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct svc_export*) ;
 int FUNC_8 (struct inode*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int) ;

__be32
FUNC_10(struct svc_rqst *VAR_17, struct svc_export *VAR_18,
     struct dentry *VAR_19, int VAR_20)
{
 struct inode *VAR_21 = VAR_19->d_inode;
 int VAR_22;

 if (VAR_20 == VAR_7)
  return 0;
 if (!(VAR_20 & VAR_5))
  if (VAR_20 & (VAR_13 | VAR_11 | VAR_12)) {
   if (FUNC_7(VAR_17, VAR_18) ||
       FUNC_3(VAR_18->ex_path.mnt))
    return VAR_16;
   if ( FUNC_1(VAR_21))
    return VAR_15;
  }
 if ((VAR_20 & VAR_12) && FUNC_0(VAR_21))
  return VAR_15;

 if (VAR_20 & VAR_6) {




  if (VAR_18->ex_flags & VAR_14)
   return 0;
  else
   VAR_20 = VAR_9 | VAR_8;
 }
 if ((VAR_20 & VAR_8) &&
     VAR_21->i_uid == FUNC_5())
  return 0;


 VAR_22 = FUNC_8(VAR_21, VAR_20 & (VAR_2|VAR_3|VAR_1));


 if (VAR_22 == -VAR_0 && FUNC_2(VAR_21->i_mode) &&
      (VAR_20 == (VAR_9 | VAR_8) ||
       VAR_20 == (VAR_9 | VAR_10)))
  VAR_22 = FUNC_8(VAR_21, VAR_1);

 return VAR_22? FUNC_9(VAR_22) : 0;
}
