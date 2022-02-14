
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
typedef int accmode_t ;


 int VAR_0 ;


 struct ucred* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int FUNC_1 (struct ucred*,int ) ;

int
FUNC_2(struct vnode *VAR_3, int VAR_4, struct ucred *VAR_5,
    struct thread *VAR_6, accmode_t VAR_7)
{




 if (VAR_5 == VAR_1)
  return (0);





 switch (VAR_4) {
 case 129:

  return (FUNC_1(VAR_5, VAR_2));
 case 128:
  return (FUNC_0(VAR_3, VAR_7, VAR_5, VAR_6));
 default:
  return (VAR_0);
 }
}
