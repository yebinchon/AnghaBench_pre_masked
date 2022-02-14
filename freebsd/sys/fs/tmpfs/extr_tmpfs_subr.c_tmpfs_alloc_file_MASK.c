
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_mount; } ;
struct vattr {int va_rdev; int va_mode; int va_type; } ;
struct tmpfs_node {scalar_t__ tn_links; int tn_gid; } ;
struct tmpfs_mount {int dummy; } ;
struct tmpfs_dirent {int dummy; } ;
struct componentname {int cn_flags; int cn_namelen; int cn_nameptr; TYPE_1__* cn_cred; } ;
struct TYPE_2__ {int cr_uid; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct tmpfs_mount* FUNC_2 (int ) ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct tmpfs_mount*,struct tmpfs_node*,int ,int ,struct tmpfs_dirent**) ;
 int FUNC_5 (int ,struct tmpfs_mount*,int ,int ,int ,int ,struct tmpfs_node*,char const*,int ,struct tmpfs_node**) ;
 int FUNC_6 (int ,struct tmpfs_node*,int ,struct vnode**) ;
 int FUNC_7 (struct vnode*,struct tmpfs_dirent*) ;
 int FUNC_8 (struct vnode*,struct componentname*) ;
 int FUNC_9 (struct tmpfs_mount*,struct tmpfs_dirent*) ;
 int FUNC_10 (struct tmpfs_mount*,struct tmpfs_node*) ;

int
FUNC_11(struct vnode *VAR_6, struct vnode **VAR_7, struct vattr *VAR_8,
    struct componentname *VAR_9, const char *VAR_10)
{
 int VAR_11;
 struct tmpfs_dirent *VAR_12;
 struct tmpfs_mount *VAR_13;
 struct tmpfs_node *VAR_14;
 struct tmpfs_node *VAR_15;
 struct tmpfs_node *VAR_16;

 FUNC_0(VAR_6, "tmpfs_alloc_file");
 FUNC_1(VAR_9->cn_flags & VAR_1);

 VAR_13 = FUNC_2(VAR_6->v_mount);
 VAR_14 = FUNC_3(VAR_6);
 *VAR_7 = ((void*)0);




 if (VAR_8->va_type == VAR_5) {


  FUNC_1(VAR_14->tn_links <= VAR_4);
  if (VAR_14->tn_links == VAR_4) {
   return (VAR_0);
  }

  VAR_16 = VAR_14;
  FUNC_1(VAR_16 != ((void*)0));
 } else
  VAR_16 = ((void*)0);


 VAR_11 = FUNC_5(VAR_6->v_mount, VAR_13, VAR_8->va_type,
     VAR_9->cn_cred->cr_uid, VAR_14->tn_gid, VAR_8->va_mode, VAR_16,
     VAR_10, VAR_8->va_rdev, &VAR_15);
 if (VAR_11 != 0)
  return (VAR_11);


 VAR_11 = FUNC_4(VAR_13, VAR_15, VAR_9->cn_nameptr, VAR_9->cn_namelen,
     &VAR_12);
 if (VAR_11 != 0) {
  FUNC_10(VAR_13, VAR_15);
  return (VAR_11);
 }


 VAR_11 = FUNC_6(VAR_6->v_mount, VAR_15, VAR_3, VAR_7);
 if (VAR_11 != 0) {
  FUNC_9(VAR_13, VAR_12);
  FUNC_10(VAR_13, VAR_15);
  return (VAR_11);
 }




 if (VAR_9->cn_flags & VAR_2)
  FUNC_8(VAR_6, VAR_9);
 FUNC_7(VAR_6, VAR_12);
 return (0);
}
