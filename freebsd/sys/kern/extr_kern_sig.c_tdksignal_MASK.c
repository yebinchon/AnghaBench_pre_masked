
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
typedef int ksiginfo_t ;


 int FUNC_0 (int ,struct thread*,int,int *) ;

void
FUNC_1(struct thread *VAR_0, int VAR_1, ksiginfo_t *VAR_2)
{

 (void) FUNC_0(VAR_0->td_proc, VAR_0, VAR_1, VAR_2);
}
