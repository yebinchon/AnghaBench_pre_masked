
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbfs_fctx {int f_flags; struct smbfs_fctx* f_rname; struct smb_cred* f_scred; } ;
struct smb_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct smbfs_fctx*,int ) ;
 int FUNC_1 (struct smbfs_fctx*) ;
 int FUNC_2 (struct smbfs_fctx*) ;

int
FUNC_3(struct smbfs_fctx *VAR_2, struct smb_cred *VAR_3)
{
 VAR_2->f_scred = VAR_3;
 if (VAR_2->f_flags & VAR_1) {
  FUNC_1(VAR_2);
 } else
  FUNC_2(VAR_2);
 if (VAR_2->f_rname)
  FUNC_0(VAR_2->f_rname, VAR_0);
 FUNC_0(VAR_2, VAR_0);
 return 0;
}
