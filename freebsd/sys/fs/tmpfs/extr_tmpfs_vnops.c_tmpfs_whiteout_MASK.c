
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_whiteout_args {int a_flags; struct componentname* a_cnp; struct vnode* a_dvp; } ;
struct vnode {int dummy; } ;
struct tmpfs_dirent {int * td_node; } ;
struct componentname {int dummy; } ;




 int VAR_0 ;

 int FUNC_0 (struct vnode*) ;
 int FUNC_1 (char*) ;
 struct tmpfs_dirent* FUNC_2 (int ,int *,struct componentname*) ;
 int FUNC_3 (struct vnode*,struct componentname*) ;
 int FUNC_4 (struct vnode*,struct componentname*) ;

__attribute__((used)) static int
FUNC_5(struct vop_whiteout_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_dvp;
 struct componentname *VAR_3 = VAR_1->a_cnp;
 struct tmpfs_dirent *VAR_4;

 switch (VAR_1->a_flags) {
 case 128:
  return (0);
 case 130:
  VAR_4 = FUNC_2(FUNC_0(VAR_2), ((void*)0), VAR_3);
  if (VAR_4 != ((void*)0))
   return (VAR_4->td_node == ((void*)0) ? 0 : VAR_0);
  return (FUNC_3(VAR_2, VAR_3));
 case 129:
  FUNC_4(VAR_2, VAR_3);
  return (0);
 default:
  FUNC_1("tmpfs_whiteout: unknown op");
 }
}
