
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; } ;
struct ucred {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct smbnode {int dummy; } ;
struct smbmount {struct smbnode* sm_root; } ;
struct smbfattr {int dummy; } ;
struct smb_cred {int dummy; } ;
struct mount {int dummy; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vnode* FUNC_1 (struct smbnode*) ;
 struct smbmount* FUNC_2 (struct mount*) ;
 struct smbnode* FUNC_3 (struct vnode*) ;
 int VAR_2 ;
 struct thread* VAR_3 ;
 int FUNC_4 (struct smb_cred*,struct thread*,struct ucred*) ;
 int FUNC_5 (struct smb_cred*) ;
 struct smb_cred* FUNC_6 () ;
 int FUNC_7 (struct mount*,int *,int *,int ,struct smbfattr*,struct vnode**) ;
 int FUNC_8 (int *,int *,int ,struct smbfattr*,struct smb_cred*) ;
 int FUNC_9 (struct vnode*,int,struct thread*) ;

__attribute__((used)) static int
FUNC_10(struct mount *VAR_4, int VAR_5, struct vnode **VAR_6)
{
 struct smbmount *VAR_7 = FUNC_2(VAR_4);
 struct vnode *VAR_8;
 struct smbnode *VAR_9;
 struct smbfattr VAR_10;
 struct thread *VAR_11;
 struct ucred *VAR_12;
 struct smb_cred *VAR_13;
 int VAR_14;

 VAR_11 = VAR_3;
 VAR_12 = VAR_11->td_ucred;

 if (VAR_7->sm_root) {
  *VAR_6 = FUNC_1(VAR_7->sm_root);
  return FUNC_9(*VAR_6, VAR_0 | VAR_1, VAR_11);
 }
 VAR_13 = FUNC_6();
 FUNC_4(VAR_13, VAR_11, VAR_12);
 VAR_14 = FUNC_8(((void*)0), ((void*)0), 0, &VAR_10, VAR_13);
 if (VAR_14)
  goto out;
 VAR_14 = FUNC_7(VAR_4, ((void*)0), ((void*)0), 0, &VAR_10, &VAR_8);
 if (VAR_14)
  goto out;
 FUNC_0(VAR_8, "smbfs_root");
 VAR_8->v_vflag |= VAR_2;
 VAR_9 = FUNC_3(VAR_8);
 VAR_7->sm_root = VAR_9;
 *VAR_6 = VAR_8;
out:
 FUNC_5(VAR_13);
 return VAR_14;
}
