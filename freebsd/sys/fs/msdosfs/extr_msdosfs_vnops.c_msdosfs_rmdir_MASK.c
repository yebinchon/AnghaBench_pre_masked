
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vop_rmdir_args {struct componentname* a_cnp; struct vnode* a_dvp; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct denode {int de_flag; } ;
struct componentname {int cn_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct denode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct denode*,int ,int ,int ) ;
 int FUNC_3 (struct denode*) ;
 int FUNC_4 (struct denode*,struct denode*) ;

__attribute__((used)) static int
FUNC_5(struct vop_rmdir_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct vnode *VAR_5 = VAR_3->a_dvp;
 struct componentname *VAR_6 = VAR_3->a_cnp;
 struct denode *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_0(VAR_5);
 VAR_9 = 0;
 if (!FUNC_3(VAR_7) || VAR_7->de_flag & VAR_0) {
  VAR_9 = VAR_1;
  goto out;
 }
 VAR_9 = FUNC_4(VAR_8, VAR_7);
 if (VAR_9)
  goto out;





 FUNC_1(VAR_5);



 VAR_9 = FUNC_2(VAR_7, (u_long)0, VAR_2, VAR_6->cn_cred);
 FUNC_1(VAR_4);

out:
 return (VAR_9);
}
