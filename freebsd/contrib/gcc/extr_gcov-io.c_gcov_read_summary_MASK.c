
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_summary {struct gcov_ctr_summary* ctrs; void* checksum; } ;
struct gcov_ctr_summary {void* sum_max; void* run_max; void* sum_all; void* runs; void* num; } ;


 unsigned int VAR_0 ;
 void* FUNC_0 () ;
 void* FUNC_1 () ;

void
FUNC_2 (struct gcov_summary *VAR_1)
{
  unsigned VAR_2;
  struct gcov_ctr_summary *VAR_3;

  VAR_1->checksum = FUNC_1 ();
  for (VAR_3 = VAR_1->ctrs, VAR_2 = VAR_0; VAR_2--; VAR_3++)
    {
      VAR_3->num = FUNC_1 ();
      VAR_3->runs = FUNC_1 ();
      VAR_3->sum_all = FUNC_0 ();
      VAR_3->run_max = FUNC_0 ();
      VAR_3->sum_max = FUNC_0 ();
    }
}
