
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_mount; } ;
struct tmpfs_dirent {int dummy; } ;
struct componentname {int cn_namelen; int cn_nameptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,struct tmpfs_dirent**) ;
 int FUNC_2 (struct vnode*,struct tmpfs_dirent*) ;

int
FUNC_3(struct vnode *VAR_0, struct componentname *VAR_1)
{
 struct tmpfs_dirent *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_0->v_mount), ((void*)0),
     VAR_1->cn_nameptr, VAR_1->cn_namelen, &VAR_2);
 if (VAR_3 != 0)
  return (VAR_3);
 FUNC_2(VAR_0, VAR_2);
 return (0);
}
