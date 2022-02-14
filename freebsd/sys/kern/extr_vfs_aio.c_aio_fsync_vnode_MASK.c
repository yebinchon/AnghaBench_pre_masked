
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int * v_object; } ;
struct thread {int dummy; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vnode*,int ,struct thread*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct vnode*,int) ;
 int FUNC_7 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_5, struct vnode *VAR_6)
{
 struct mount *VAR_7;
 int VAR_8;

 if ((VAR_8 = FUNC_7(VAR_6, &VAR_7, VAR_4 | VAR_3)) != 0)
  goto drop;
 FUNC_6(VAR_6, VAR_0 | VAR_1);
 if (VAR_6->v_object != ((void*)0)) {
  FUNC_0(VAR_6->v_object);
  FUNC_4(VAR_6->v_object, 0, 0, 0);
  FUNC_1(VAR_6->v_object);
 }
 VAR_8 = FUNC_2(VAR_6, VAR_2, VAR_5);

 FUNC_3(VAR_6, 0);
 FUNC_5(VAR_7);
drop:
 return (VAR_8);
}
