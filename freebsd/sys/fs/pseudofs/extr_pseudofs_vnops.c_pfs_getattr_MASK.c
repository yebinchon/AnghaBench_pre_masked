
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vop_getattr_args {struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {TYPE_3__* v_mount; int v_type; struct pfs_vdata* v_data; } ;
struct vattr {int va_nlink; int va_mode; scalar_t__ va_gid; scalar_t__ va_uid; int va_ctime; int va_mtime; int va_atime; int va_fsid; scalar_t__ va_filerev; scalar_t__ va_size; scalar_t__ va_bytes; int va_blocksize; scalar_t__ va_flags; int va_fileid; int va_type; } ;
struct proc {TYPE_4__* p_ucred; } ;
struct pfs_vdata {int pvd_pid; struct pfs_node* pvd_pn; } ;
struct pfs_node {int pn_type; int * pn_attr; int pn_name; } ;
struct TYPE_8__ {scalar_t__ cr_rgid; scalar_t__ cr_ruid; } ;
struct TYPE_5__ {int * val; } ;
struct TYPE_6__ {TYPE_1__ f_fsid; } ;
struct TYPE_7__ {TYPE_2__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct proc*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pfs_node*) ;
 int FUNC_5 (struct pfs_node*) ;
 int FUNC_6 (struct pfs_node*) ;
 int FUNC_7 (int ,struct pfs_node*,int ,struct proc**) ;





 int FUNC_8 (int ,struct proc*,struct pfs_node*,struct vattr*) ;
 int FUNC_9 (struct pfs_node*,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11(struct vop_getattr_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct pfs_vdata *VAR_5 = VAR_4->v_data;
 struct pfs_node *VAR_6 = VAR_5->pvd_pn;
 struct vattr *VAR_7 = VAR_3->a_vap;
 struct proc *VAR_8;
 int VAR_9 = 0;

 FUNC_1(("%s", VAR_6->pn_name));
 FUNC_4(VAR_6);

 if (!FUNC_7(VAR_2, VAR_6, VAR_5->pvd_pid, &VAR_8))
  FUNC_0 (VAR_0);

 VAR_7->va_type = VAR_4->v_type;
 VAR_7->va_fileid = FUNC_9(VAR_6, VAR_5->pvd_pid);
 VAR_7->va_flags = 0;
 VAR_7->va_blocksize = VAR_1;
 VAR_7->va_bytes = VAR_7->va_size = 0;
 VAR_7->va_filerev = 0;
 VAR_7->va_fsid = VAR_4->v_mount->mnt_stat.f_fsid.val[0];
 VAR_7->va_nlink = 1;
 FUNC_3(&VAR_7->va_ctime);
 VAR_7->va_atime = VAR_7->va_mtime = VAR_7->va_ctime;

 switch (VAR_6->pn_type) {
 case 130:
 case 129:
 case 132:





  VAR_7->va_mode = 0555;
  break;
 case 131:
 case 128:
  VAR_7->va_mode = 0444;
  break;
 default:
  FUNC_10("shouldn't be here!\n");
  VAR_7->va_mode = 0;
  break;
 }

 if (VAR_8 != ((void*)0)) {
  VAR_7->va_uid = VAR_8->p_ucred->cr_ruid;
  VAR_7->va_gid = VAR_8->p_ucred->cr_rgid;
 } else {
  VAR_7->va_uid = 0;
  VAR_7->va_gid = 0;
 }

 if (VAR_6->pn_attr != ((void*)0))
  VAR_9 = FUNC_8(VAR_2, VAR_8, VAR_6, VAR_7);

 if(VAR_8 != ((void*)0))
  FUNC_2(VAR_8);

 FUNC_0 (VAR_9);
}
