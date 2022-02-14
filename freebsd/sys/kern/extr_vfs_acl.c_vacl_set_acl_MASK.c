
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct mount {int dummy; } ;
struct acl {int dummy; } ;
typedef int acl_type_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vnode*,int ,struct acl*,int ,struct thread*) ;
 int FUNC_3 (struct vnode*,int ) ;
 int VAR_4 ;
 struct acl* FUNC_4 (int ) ;
 int FUNC_5 (struct acl const*,struct acl*,int ) ;
 int FUNC_6 (struct acl*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct vnode*,int ,struct acl*) ;
 int FUNC_9 (struct mount*) ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_12(struct thread *VAR_5, struct vnode *VAR_6, acl_type_t VAR_7,
    const struct acl *VAR_8)
{
 struct acl *VAR_9;
 struct mount *VAR_10;
 int VAR_11;

 FUNC_0(VAR_7);
 VAR_9 = FUNC_4(VAR_2);
 VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_7);
 if (VAR_11 != 0)
  goto out;
 VAR_11 = FUNC_11(VAR_6, &VAR_10, VAR_4 | VAR_3);
 if (VAR_11 != 0)
  goto out;
 FUNC_10(VAR_6, VAR_0 | VAR_1);
 FUNC_1(VAR_6);





 VAR_11 = FUNC_2(VAR_6, FUNC_7(VAR_7), VAR_9,
     VAR_5->td_ucred, VAR_5);



 FUNC_3(VAR_6, 0);
 FUNC_9(VAR_10);
out:
 FUNC_6(VAR_9);
 return (VAR_11);
}
