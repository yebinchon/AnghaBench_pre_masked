
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct ucred {int dummy; } ;
struct mount {int mnt_flag; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vnode*) ;

void
FUNC_2(struct vnode *VAR_2, struct ucred *VAR_3)
{
 struct mount *VAR_4;

 VAR_4 = VAR_2->v_mount;
 FUNC_0(VAR_2, "vfs_mark_atime");
 if (VAR_4 != ((void*)0) && (VAR_4->mnt_flag & (VAR_0 | VAR_1)) == 0)
  (void)FUNC_1(VAR_2);
}
