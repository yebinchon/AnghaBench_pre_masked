
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_reclaim_args {struct vnode* a_vp; } ;
struct vnode {int * v_data; } ;
struct denode {char* de_Name; scalar_t__ de_flag; int de_refcnt; } ;


 int VAR_0 ;
 struct denode* FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct denode*,int ) ;
 int FUNC_2 (char*,struct denode*,char*,int ) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vop_reclaim_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;
 struct denode *VAR_3 = FUNC_0(VAR_2);
 FUNC_3(VAR_2);






 FUNC_1(VAR_3, VAR_0);
 VAR_2->v_data = ((void*)0);

 return (0);
}
