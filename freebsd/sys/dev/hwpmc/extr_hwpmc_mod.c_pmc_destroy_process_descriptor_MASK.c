
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmc_thread {int dummy; } ;
struct pmc_process {int pp_tds; } ;


 struct pmc_thread* FUNC_0 (int *) ;
 int FUNC_1 (struct pmc_thread*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct pmc_process*,int ) ;
 int FUNC_3 (struct pmc_thread*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(struct pmc_process *VAR_2)
{
 struct pmc_thread *VAR_3;

 while ((VAR_3 = FUNC_0(&VAR_2->pp_tds)) != ((void*)0)) {
  FUNC_1(VAR_3, VAR_1);
  FUNC_3(VAR_3);
 }
 FUNC_2(VAR_2, VAR_0);
}
