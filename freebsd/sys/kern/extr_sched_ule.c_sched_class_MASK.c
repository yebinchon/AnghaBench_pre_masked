
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_pri_class; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ) ;

void
FUNC_1(struct thread *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1, VAR_0);
 if (VAR_1->td_pri_class == VAR_2)
  return;
 VAR_1->td_pri_class = VAR_2;
}
