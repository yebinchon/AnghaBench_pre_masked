
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct vnode {scalar_t__ v_type; } ;
struct vattr {scalar_t__ va_flags; } ;
struct thread {int td_ucred; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vattr*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct vnode*,struct vattr*,int ) ;
 int FUNC_2 (struct vnode*,int ) ;
 int VAR_8 ;
 int FUNC_3 (int ,struct vnode*,scalar_t__) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct mount*) ;
 int FUNC_6 (struct vnode*,int) ;
 int FUNC_7 (struct vnode*,struct mount**,int) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_9, struct vnode *VAR_10, u_long VAR_11)
{
 struct mount *VAR_12;
 struct vattr VAR_13;
 int VAR_14;


 if (VAR_11 == VAR_7)
  return (VAR_0);







 if (VAR_10->v_type == VAR_6 || VAR_10->v_type == VAR_5) {
  VAR_14 = FUNC_4(VAR_9, VAR_4);
  if (VAR_14 != 0)
   return (VAR_14);
 }

 if ((VAR_14 = FUNC_7(VAR_10, &VAR_12, VAR_8 | VAR_3)) != 0)
  return (VAR_14);
 FUNC_0(&VAR_13);
 VAR_13.va_flags = VAR_11;
 FUNC_6(VAR_10, VAR_1 | VAR_2);




  VAR_14 = FUNC_1(VAR_10, &VAR_13, VAR_9->td_ucred);
 FUNC_2(VAR_10, 0);
 FUNC_5(VAR_12);
 return (VAR_14);
}
