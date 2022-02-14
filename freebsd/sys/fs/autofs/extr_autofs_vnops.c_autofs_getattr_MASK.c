
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_getattr_args {int a_cred; struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; struct mount* v_mount; struct autofs_node* v_data; } ;
struct vattr {int va_mode; int va_nlink; scalar_t__ va_spare; scalar_t__ va_filerev; void* va_bytes; scalar_t__ va_rdev; scalar_t__ va_flags; scalar_t__ va_gen; int va_birthtime; int va_ctime; int va_atime; int va_mtime; void* va_blocksize; void* va_size; int va_fileid; int va_fsid; scalar_t__ va_gid; scalar_t__ va_uid; scalar_t__ va_type; } ;
struct TYPE_3__ {int * val; } ;
struct TYPE_4__ {TYPE_1__ f_fsid; } ;
struct mount {TYPE_2__ mnt_stat; } ;
struct autofs_node {int an_ctime; int an_fileno; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct vnode*,struct vattr*,int ) ;
 int FUNC_2 (struct autofs_node*,int *,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct vnode*,char*,int ,struct vnode**) ;
 int VAR_4 ;
 int FUNC_5 (struct vnode*) ;

__attribute__((used)) static int
FUNC_6(struct vop_getattr_args *VAR_5)
{
 struct vnode *VAR_6, *VAR_7;
 struct autofs_node *VAR_8;
 struct mount *VAR_9;
 struct vattr *VAR_10;
 int VAR_11;

 VAR_6 = VAR_5->a_vp;
 VAR_8 = VAR_6->v_data;
 VAR_9 = VAR_6->v_mount;
 VAR_10 = VAR_5->a_vap;

 FUNC_0(VAR_5->a_vp->v_type == VAR_2, ("!VDIR"));







 if (VAR_3 && FUNC_2(VAR_8, ((void*)0), 0) == 0 &&
     FUNC_3(VAR_4) == 0) {
  VAR_11 = FUNC_4(VAR_6, "", 0, &VAR_7);
  if (VAR_11 != 0)
   return (VAR_11);

  if (VAR_7 != ((void*)0)) {
   VAR_11 = FUNC_1(VAR_7, VAR_5->a_vap,
       VAR_5->a_cred);
   FUNC_5(VAR_7);
   return (VAR_11);
  }
 }

 VAR_10->va_type = VAR_2;
 VAR_10->va_mode = 0755;
 VAR_10->va_nlink = 3;
 VAR_10->va_uid = 0;
 VAR_10->va_gid = 0;
 VAR_10->va_rdev = VAR_0;
 VAR_10->va_fsid = VAR_9->mnt_stat.f_fsid.val[0];
 VAR_10->va_fileid = VAR_8->an_fileno;
 VAR_10->va_size = VAR_1;
 VAR_10->va_blocksize = VAR_1;
 VAR_10->va_mtime = VAR_8->an_ctime;
 VAR_10->va_atime = VAR_8->an_ctime;
 VAR_10->va_ctime = VAR_8->an_ctime;
 VAR_10->va_birthtime = VAR_8->an_ctime;
 VAR_10->va_gen = 0;
 VAR_10->va_flags = 0;
 VAR_10->va_rdev = 0;
 VAR_10->va_bytes = VAR_1;
 VAR_10->va_filerev = 0;
 VAR_10->va_spare = 0;

 return (0);
}
