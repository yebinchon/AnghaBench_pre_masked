
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct unionfs_mount {struct vnode* um_rootvp; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 struct unionfs_mount* FUNC_0 (struct mount*) ;
 int FUNC_1 (char*,struct vnode*,int ) ;
 int FUNC_2 (struct vnode*) ;
 int FUNC_3 (struct vnode*,int) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct mount *VAR_1, int VAR_2, struct vnode **VAR_3)
{
 struct unionfs_mount *VAR_4;
 struct vnode *VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = VAR_4->um_rootvp;

 FUNC_1("unionfs_root: rootvp=%p locked=%x\n",
     VAR_5, FUNC_2(VAR_5));

 FUNC_4(VAR_5);
 if (VAR_2 & VAR_0)
  FUNC_3(VAR_5, VAR_2);

 *VAR_3 = VAR_5;

 return (0);
}
