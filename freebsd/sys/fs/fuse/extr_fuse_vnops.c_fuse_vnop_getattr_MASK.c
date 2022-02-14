
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_getattr_args {struct ucred* a_cred; struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct vattr {int va_type; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {int dataflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vattr*,int) ;
 struct thread* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (struct vnode*,struct vattr*,struct ucred*,struct thread*) ;
 scalar_t__ FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;

__attribute__((used)) static int
FUNC_7(struct vop_getattr_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct vattr *VAR_5 = VAR_3->a_vap;
 struct ucred *VAR_6 = VAR_3->a_cred;
 struct thread *VAR_7 = VAR_2;

 int VAR_8 = 0;
 int VAR_9;

 VAR_9 = FUNC_2(FUNC_5(VAR_4))->dataflags;



 if (!(VAR_9 & VAR_1)) {
  if (!FUNC_4(VAR_4)) {
   FUNC_1(FUNC_2(FUNC_5(VAR_4)));
   VAR_8 = VAR_0;
   return VAR_8;
  } else {
   goto fake;
  }
 }
 VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8 == VAR_0 && FUNC_4(VAR_4)) {

  goto fake;
 } else {
  return VAR_8;
 }

fake:
 FUNC_0(VAR_5, sizeof(*VAR_5));
 VAR_5->va_type = FUNC_6(VAR_4);

 return 0;
}
