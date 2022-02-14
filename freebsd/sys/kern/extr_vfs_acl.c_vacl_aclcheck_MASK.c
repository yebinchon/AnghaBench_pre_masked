
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct thread {int td_ucred; } ;
struct acl {int dummy; } ;
typedef int acl_type_t ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,int ,struct acl*,int ,struct thread*) ;
 struct acl* FUNC_1 (int ) ;
 int FUNC_2 (struct acl const*,struct acl*,int ) ;
 int FUNC_3 (struct acl*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct thread *VAR_1, struct vnode *VAR_2, acl_type_t VAR_3,
    const struct acl *VAR_4)
{
 struct acl *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_0);
 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_3);
 if (VAR_6 != 0)
  goto out;
 VAR_6 = FUNC_0(VAR_2, FUNC_4(VAR_3), VAR_5,
     VAR_1->td_ucred, VAR_1);
out:
 FUNC_3(VAR_5);
 return (VAR_6);
}
