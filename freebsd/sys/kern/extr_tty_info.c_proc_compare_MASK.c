
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {scalar_t__ p_state; scalar_t__ p_pid; } ;
typedef scalar_t__ fixpt_t ;





 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct proc*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_4(struct proc *VAR_1, struct proc *VAR_2)
{

 int VAR_3, VAR_4;
 fixpt_t VAR_5, VAR_6;

 if (VAR_1 == ((void*)0))
  return (1);





 FUNC_0(VAR_1);
 VAR_3 = FUNC_3(VAR_1, &VAR_5);
 FUNC_1(VAR_1);
 FUNC_0(VAR_2);
 VAR_4 = FUNC_3(VAR_2, &VAR_6);
 FUNC_1(VAR_2);




 switch (FUNC_2(VAR_3, VAR_4)) {
 case 129:
  return (0);
 case 128:
  return (1);
 case 130:
  break;
 }



 if (VAR_6 > VAR_5)
  return (1);
 if (VAR_5 > VAR_6)
  return (0);



 switch (FUNC_2(VAR_1->p_state == VAR_0, VAR_2->p_state == VAR_0)) {
 case 129:
  return (1);
 case 128:
  return (0);
 case 130:
  break;
 }

 return (VAR_2->p_pid > VAR_1->p_pid);
}
