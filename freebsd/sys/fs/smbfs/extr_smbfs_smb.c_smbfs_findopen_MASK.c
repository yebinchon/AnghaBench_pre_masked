
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smbnode {TYPE_1__* n_mount; } ;
struct smbfs_fctx {int f_flags; int f_ssp; struct smb_cred* f_scred; struct smbnode* f_dnp; } ;
struct smb_cred {int dummy; } ;
struct TYPE_2__ {int sm_flags; int sm_share; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 struct smbfs_fctx* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct smbfs_fctx*,struct smb_cred*) ;
 int FUNC_4 (struct smbfs_fctx*,struct smbnode*,char const*,int,int,struct smb_cred*) ;
 int FUNC_5 (struct smbfs_fctx*,struct smbnode*,char const*,int,int,struct smb_cred*) ;

int
FUNC_6(struct smbnode *VAR_7, const char *VAR_8, int VAR_9, int VAR_10,
 struct smb_cred *VAR_11, struct smbfs_fctx **VAR_12)
{
 struct smbfs_fctx *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_2(sizeof(*VAR_13), VAR_0, VAR_1 | VAR_2);
 VAR_13->f_ssp = VAR_7->n_mount->sm_share;
 VAR_13->f_dnp = VAR_7;
 VAR_13->f_flags = VAR_4;
 VAR_13->f_scred = VAR_11;
 if (FUNC_0(FUNC_1(VAR_13->f_ssp)) < VAR_6 ||
     (VAR_7->n_mount->sm_flags & VAR_3)) {
  VAR_13->f_flags |= VAR_5;
  VAR_14 = FUNC_4(VAR_13, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 } else
  VAR_14 = FUNC_5(VAR_13, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_14)
  FUNC_3(VAR_13, VAR_11);
 else
  *VAR_12 = VAR_13;
 return VAR_14;
}
