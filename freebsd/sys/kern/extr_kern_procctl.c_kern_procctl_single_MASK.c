
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct proc*,int ) ;
 int FUNC_1 (struct thread*,struct proc*,int) ;
 int FUNC_2 (struct thread*,struct proc*,void*) ;
 int FUNC_3 (struct thread*,struct proc*,int) ;
 int FUNC_4 (struct thread*,struct proc*,int) ;
 int FUNC_5 (struct thread*,struct proc*,void*) ;
 int FUNC_6 (struct thread*,struct proc*) ;
 int FUNC_7 (struct thread*,struct proc*,void*) ;
 int FUNC_8 (struct thread*,struct proc*,void*) ;
 int FUNC_9 (struct thread*,struct proc*) ;
 int FUNC_10 (struct thread*,struct proc*,void*) ;
 int FUNC_11 (struct thread*,struct proc*,int) ;
 int FUNC_12 (struct thread*,struct proc*,void*) ;
 int FUNC_13 (struct thread*,struct proc*,int) ;
 int FUNC_14 (struct thread*,struct proc*,void*) ;
 int FUNC_15 (struct thread*,struct proc*,int) ;
 int FUNC_16 (struct thread*,struct proc*,void*) ;

__attribute__((used)) static int
FUNC_17(struct thread *VAR_2, struct proc *VAR_3, int VAR_4, void *VAR_5)
{

 FUNC_0(VAR_3, VAR_1);
 switch (VAR_4) {
 case 143:
  return (FUNC_1(VAR_2, VAR_3, *(int *)VAR_5));
 case 142:
  return (FUNC_2(VAR_2, VAR_3, VAR_5));
 case 134:
  return (FUNC_3(VAR_2, VAR_3, *(int *)VAR_5));
 case 141:
  return (FUNC_4(VAR_2, VAR_3, *(int *)VAR_5));
 case 140:
  return (FUNC_5(VAR_2, VAR_3, VAR_5));
 case 133:
  return (FUNC_11(VAR_2, VAR_3, *(int *)VAR_5));
 case 132:
  return (FUNC_12(VAR_2, VAR_3, VAR_5));
 case 139:
  return (FUNC_6(VAR_2, VAR_3));
 case 136:
  return (FUNC_9(VAR_2, VAR_3));
 case 135:
  return (FUNC_10(VAR_2, VAR_3, VAR_5));
 case 138:
  return (FUNC_7(VAR_2, VAR_3, VAR_5));
 case 137:
  return (FUNC_8(VAR_2, VAR_3, VAR_5));
 case 131:
  return (FUNC_13(VAR_2, VAR_3, *(int *)VAR_5));
 case 130:
  return (FUNC_14(VAR_2, VAR_3, VAR_5));
 case 129:
  return (FUNC_15(VAR_2, VAR_3, *(int *)VAR_5));
 case 128:
  return (FUNC_16(VAR_2, VAR_3, VAR_5));
 default:
  return (VAR_0);
 }
}
