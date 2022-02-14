
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct mount {int dummy; } ;
typedef int acl_type_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vnode*,int ,int ,int ,struct thread*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct vnode*,int ) ;
 int FUNC_6 (struct mount*) ;
 int FUNC_7 (struct vnode*,int) ;
 int FUNC_8 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_9(struct thread *VAR_4, struct vnode *VAR_5, acl_type_t VAR_6)
{
 struct mount *VAR_7;
 int VAR_8;

 FUNC_0(VAR_6);
 VAR_8 = FUNC_8(VAR_5, &VAR_7, VAR_3 | VAR_2);
 if (VAR_8 != 0)
  return (VAR_8);
 FUNC_7(VAR_5, VAR_0 | VAR_1);
 FUNC_1(VAR_5);





 VAR_8 = FUNC_2(VAR_5, FUNC_4(VAR_6), 0, VAR_4->td_ucred, VAR_4);



 FUNC_3(VAR_5, 0);
 FUNC_6(VAR_7);
 return (VAR_8);
}
