
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omp_region {int sched_kind; scalar_t__ exit; scalar_t__ cont; int entry; } ;
struct omp_for_data {int sched_kind; int have_ordered; int * chunk_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omp_region*,struct omp_for_data*,int,int) ;
 int FUNC_1 (struct omp_region*,struct omp_for_data*) ;
 int FUNC_2 (struct omp_region*,struct omp_for_data*) ;
 int FUNC_3 (int ,struct omp_for_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7 (struct omp_region *VAR_3)
{
  struct omp_for_data VAR_4;

  FUNC_6 ();

  FUNC_3 (FUNC_4 (VAR_3->entry), &VAR_4);
  VAR_3->sched_kind = VAR_4.sched_kind;

  if (VAR_4.sched_kind == VAR_2
      && !VAR_4.have_ordered
      && VAR_3->cont
      && VAR_3->exit)
    {
      if (VAR_4.chunk_size == ((void*)0))
 FUNC_2 (VAR_3, &VAR_4);
      else
 FUNC_1 (VAR_3, &VAR_4);
    }
  else
    {
      int VAR_5 = VAR_4.sched_kind + VAR_4.have_ordered * 4;
      int VAR_6 = VAR_1 + VAR_5;
      int VAR_7 = VAR_0 + VAR_5;
      FUNC_0 (VAR_3, &VAR_4, VAR_6, VAR_7);
    }

  FUNC_5 (((void*)0));
}
