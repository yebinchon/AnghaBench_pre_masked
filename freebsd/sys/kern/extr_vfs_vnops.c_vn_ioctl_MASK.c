
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vnode {int v_type; } ;
struct vattr {int va_size; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct fiobmap2_arg {int runb; int runp; int bn; } ;
struct file {int f_offset; int f_flag; int f_cred; struct vnode* f_vnode; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct vnode*,int ,int *,int *,int *,int *) ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;
 int FUNC_2 (struct vnode*,int ,void*,int ,struct ucred*,struct thread*) ;
 int FUNC_3 (struct vnode*,int ) ;

 int FUNC_4 (struct ucred*,int ,struct vnode*) ;
 int FUNC_5 (struct vnode*,int) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_3, u_long VAR_4, void *VAR_5, struct ucred *VAR_6,
    struct thread *VAR_7)
{
 struct vattr VAR_8;
 struct vnode *VAR_9;
 struct fiobmap2_arg *VAR_10;
 int VAR_11;

 VAR_9 = VAR_3->f_vnode;
 switch (VAR_9->v_type) {
 case 129:
 case 128:
  switch (VAR_4) {
  case 131:
   FUNC_5(VAR_9, VAR_2 | VAR_1);
   VAR_11 = FUNC_1(VAR_9, &VAR_8, VAR_6);
   FUNC_3(VAR_9, 0);
   if (VAR_11 == 0)
    *(int *)VAR_5 = VAR_8.va_size - VAR_3->f_offset;
   return (VAR_11);
  case 133:
   VAR_10 = (struct fiobmap2_arg *)VAR_5;
   FUNC_5(VAR_9, VAR_2 | VAR_1);





    VAR_11 = FUNC_0(VAR_9, VAR_10->bn, ((void*)0),
        &VAR_10->bn, &VAR_10->runp, &VAR_10->runb);
   FUNC_3(VAR_9, 0);
   return (VAR_11);
  case 132:
  case 134:
   return (0);
  default:
   return (FUNC_2(VAR_9, VAR_4, VAR_5, VAR_3->f_flag,
       VAR_6, VAR_7));
  }
  break;
 case 130:
  return (FUNC_2(VAR_9, VAR_4, VAR_5, VAR_3->f_flag,
      VAR_6, VAR_7));
 default:
  return (VAR_0);
 }
}
