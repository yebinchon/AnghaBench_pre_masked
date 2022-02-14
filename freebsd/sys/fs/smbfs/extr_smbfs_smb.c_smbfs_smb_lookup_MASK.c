
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbnode {int n_ino; int n_vnode; } ;
struct smbfattr {int fa_attr; int fa_ino; } ;
struct smbfs_fctx {struct smbfattr f_attr; int f_flags; } ;
struct smb_cred {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct smbfattr*,int) ;
 int FUNC_3 (struct smbfs_fctx*,struct smb_cred*) ;
 int FUNC_4 (struct smbfs_fctx*,int,struct smb_cred*) ;
 int FUNC_5 (struct smbnode*,char const*,int,int,struct smb_cred*,struct smbfs_fctx**) ;

int
FUNC_6(struct smbnode *VAR_4, const char *VAR_5, int VAR_6,
 struct smbfattr *VAR_7, struct smb_cred *VAR_8)
{
 struct smbfs_fctx *VAR_9;
 int VAR_10;

 if (VAR_4 == ((void*)0) || (VAR_4->n_ino == 2 && VAR_5 == ((void*)0))) {
  FUNC_2(VAR_7, sizeof(*VAR_7));
  VAR_7->fa_attr = VAR_1;
  VAR_7->fa_ino = 2;
  return 0;
 }
 FUNC_1(!(VAR_6 == 2 && VAR_5[0] == '.' && VAR_5[1] == '.'));
 FUNC_1(!(VAR_6 == 1 && VAR_5[0] == '.'));
 FUNC_0(VAR_4->n_vnode, "smbfs_smb_lookup");
 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_6,
     VAR_3 | VAR_2 | VAR_1, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;
 VAR_9->f_flags |= VAR_0;
 VAR_10 = FUNC_4(VAR_9, 1, VAR_8);
 if (VAR_10 == 0) {
  *VAR_7 = VAR_9->f_attr;
  if (VAR_5 == ((void*)0))
   VAR_7->fa_ino = VAR_4->n_ino;
 }
 FUNC_3(VAR_9, VAR_8);
 return VAR_10;
}
