
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct thread* comm; int mg; } ;


 int FUNC_0 (struct thread*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct thread *VAR_0)
{
 FUNC_1(&VAR_0->mg);
 FUNC_0(VAR_0->comm);
 FUNC_0(VAR_0);
}
