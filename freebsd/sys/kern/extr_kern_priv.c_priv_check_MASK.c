
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;


 int FUNC_0 (int,char*) ;
 struct thread* VAR_0 ;
 int FUNC_1 (int ,int) ;

int
FUNC_2(struct thread *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1 == VAR_0, ("priv_check: td != curthread"));

 return (FUNC_1(VAR_1->td_ucred, VAR_2));
}
