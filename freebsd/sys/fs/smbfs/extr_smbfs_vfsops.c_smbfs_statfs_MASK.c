
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct statfs {int f_iosize; } ;
struct smbnode {int dummy; } ;
struct smbmount {struct smb_share* sm_share; struct smbnode* sm_root; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mount {int dummy; } ;
struct TYPE_2__ {int vc_txmax; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct smb_share*) ;
 struct smbmount* FUNC_1 (struct mount*) ;
 struct thread* VAR_1 ;
 int FUNC_2 (struct smb_cred*,struct thread*,int ) ;
 int FUNC_3 (struct smb_cred*) ;
 struct smb_cred* FUNC_4 () ;
 int FUNC_5 (struct smb_share*,struct statfs*,struct smb_cred*) ;
 int FUNC_6 (struct mount*,char*) ;

int
FUNC_7(struct mount *VAR_2, struct statfs *VAR_3)
{
 struct thread *VAR_4 = VAR_1;
 struct smbmount *VAR_5 = FUNC_1(VAR_2);
 struct smbnode *VAR_6 = VAR_5->sm_root;
 struct smb_share *VAR_7 = VAR_5->sm_share;
 struct smb_cred *VAR_8;
 int VAR_9;

 if (VAR_6 == ((void*)0)) {
  FUNC_6(VAR_2, "np == NULL");
  return VAR_0;
 }

 VAR_3->f_iosize = FUNC_0(VAR_7)->vc_txmax;
 VAR_8 = FUNC_4();
 FUNC_2(VAR_8, VAR_4, VAR_4->td_ucred);
 VAR_9 = FUNC_5(VAR_7, VAR_3, VAR_8);
 FUNC_3(VAR_8);
 return (VAR_9);
}
