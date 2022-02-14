
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufobj {int dummy; } ;
struct vnode {struct bufobj v_bufobj; int v_interlock; int v_vnlock; int v_rl; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, int VAR_1)
{
 struct vnode *VAR_2;
 struct bufobj *VAR_3;

 VAR_2 = VAR_0;
 FUNC_3(&VAR_2->v_rl);
 FUNC_1(VAR_2->v_vnlock);
 FUNC_2(&VAR_2->v_interlock);
 VAR_3 = &VAR_2->v_bufobj;
 FUNC_4(FUNC_0(VAR_3));
}
