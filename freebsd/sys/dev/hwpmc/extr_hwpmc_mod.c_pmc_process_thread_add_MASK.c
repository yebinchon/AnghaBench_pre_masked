
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_proc; } ;
struct pmc_process {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pmc_process* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pmc_process*,struct thread*,int ) ;

__attribute__((used)) static void
FUNC_2(struct thread *VAR_2)
{
 struct pmc_process *VAR_3;

 VAR_3 = FUNC_0(VAR_2->td_proc, VAR_1);
 if (VAR_3 != ((void*)0))
  FUNC_1(VAR_3, VAR_2, VAR_0);
}
