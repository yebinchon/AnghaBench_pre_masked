
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_quad_t ;
struct vop_advlockasync_args {int * a_cookiep; int * a_task; int a_flags; int a_fl; int a_op; int a_id; int a_vp; } ;
struct vop_advlock_args {int a_flags; int a_fl; int a_op; int a_id; int a_vp; } ;
struct lockf {int dummy; } ;


 int FUNC_0 (struct vop_advlockasync_args*,struct lockf**,int ) ;

int
FUNC_1(struct vop_advlock_args *VAR_0, struct lockf **VAR_1, u_quad_t VAR_2)
{
 struct vop_advlockasync_args VAR_3;

 VAR_3.a_vp = VAR_0->a_vp;
 VAR_3.a_id = VAR_0->a_id;
 VAR_3.a_op = VAR_0->a_op;
 VAR_3.a_fl = VAR_0->a_fl;
 VAR_3.a_flags = VAR_0->a_flags;
 VAR_3.a_task = ((void*)0);
 VAR_3.a_cookiep = ((void*)0);

 return (FUNC_0(&VAR_3, VAR_1, VAR_2));
}
