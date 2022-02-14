
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {struct mount* v_mount; } ;
struct mount {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct mount*) ;
 int FUNC_2 (struct mount*) ;
 int FUNC_3 (struct mount*) ;
 int VAR_0 ;
 int FUNC_4 (struct vnode*,int ) ;

__attribute__((used)) static void
FUNC_5(struct vnode **VAR_1, struct mount *VAR_2)
{

 FUNC_0((*VAR_1)->v_mount == VAR_2, ("marker vnode mount list mismatch"));

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2);
 FUNC_4(*VAR_1, VAR_0);
 *VAR_1 = ((void*)0);
}
