
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_getpages_args {int a_rahead; int a_rbehind; int a_count; int a_m; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct vnode*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct vnode*,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_2(struct vop_getpages_args *VAR_6)
{
 struct vnode *VAR_7;

 VAR_7 = VAR_6->a_vp;
 if (VAR_7->v_type == VAR_2 || VAR_7->v_type == VAR_1)
  return (VAR_0);

 if (VAR_5)
  return (FUNC_0(VAR_7, VAR_6->a_m, VAR_6->a_count,
      VAR_6->a_rbehind, VAR_6->a_rahead, VAR_3,
      VAR_4));
 return (FUNC_1(VAR_7, VAR_6->a_m, VAR_6->a_count,
     VAR_6->a_rbehind, VAR_6->a_rahead, ((void*)0), ((void*)0)));
}
