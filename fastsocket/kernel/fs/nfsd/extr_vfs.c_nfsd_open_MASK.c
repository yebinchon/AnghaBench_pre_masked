
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct svc_fh {TYPE_2__* fh_export; struct dentry* fh_dentry; } ;
struct inode {int i_fop; int i_mode; } ;
struct file {int f_mode; } ;
struct dentry {struct inode* d_inode; } ;
typedef scalar_t__ __be32 ;
struct TYPE_3__ {int mnt; } ;
struct TYPE_4__ {TYPE_1__ ex_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct file*) ;
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
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 () ;
 struct file* FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (struct dentry*) ;
 scalar_t__ FUNC_8 (struct svc_rqst*,struct svc_fh*,int,int) ;
 int FUNC_9 (struct file*,int) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (struct inode*) ;

__be32
FUNC_15(struct svc_rqst *VAR_13, struct svc_fh *VAR_14, int VAR_15,
   int VAR_16, struct file **VAR_17)
{
 struct dentry *VAR_18;
 struct inode *VAR_19;
 int VAR_20 = VAR_9|VAR_7;
 __be32 VAR_21;
 int VAR_22 = 0;

 FUNC_13();






 VAR_21 = FUNC_8(VAR_13, VAR_14, VAR_15, VAR_16 | VAR_4);
 if (VAR_21)
  goto out;

 VAR_18 = VAR_14->fh_dentry;
 VAR_19 = VAR_18->d_inode;




 VAR_21 = VAR_12;
 if (FUNC_0(VAR_19) && (VAR_16 & VAR_6))
  goto out;





 if (FUNC_3((VAR_19)->i_mode) && FUNC_10(VAR_19))
  goto out;

 if (!VAR_19->i_fop)
  goto out;





 if (!(VAR_16 & VAR_3))
  VAR_22 = FUNC_4(VAR_19, VAR_8 | ((VAR_16 & VAR_6) ? VAR_11 : 0));
 if (VAR_22)
  goto out_nfserr;

 if (VAR_16 & VAR_6) {
  if (VAR_16 & VAR_5)
   VAR_20 = VAR_10|VAR_7;
  else
   VAR_20 = VAR_11|VAR_7;

  FUNC_14(VAR_19);
 }
 *VAR_17 = FUNC_6(FUNC_7(VAR_18), FUNC_11(VAR_14->fh_export->ex_path.mnt),
       VAR_20, FUNC_5());
 if (FUNC_1(*VAR_17)) {
  VAR_22 = FUNC_2(*VAR_17);
  *VAR_17 = ((void*)0);
 } else {
  VAR_22 = FUNC_9(*VAR_17, VAR_16);

  if (VAR_16 & VAR_2)
   (*VAR_17)->f_mode |= VAR_1;
  else
   (*VAR_17)->f_mode |= VAR_0;
 }

out_nfserr:
 VAR_21 = FUNC_12(VAR_22);
out:
 FUNC_13();
 return VAR_21;
}
