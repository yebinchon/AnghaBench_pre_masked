
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct df_ru_problem_data {int use_sites; } ;
struct df_ru_bb_info {int kill; int sparse_kill; } ;
struct df_ref {struct df_ref* next_ref; } ;
struct df {int dummy; } ;
struct dataflow {scalar_t__ problem_data; struct df* df; } ;
typedef enum df_ref_flags { ____Placeholder_df_ref_flags } df_ref_flags ;
typedef int bitmap ;
struct TYPE_2__ {unsigned int begin; unsigned int n_refs; } ;


 int VAR_0 ;
 int FUNC_0 (struct df_ref*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct df_ref*) ;
 TYPE_1__* FUNC_2 (struct df*,unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,unsigned int,unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_7 (struct dataflow *VAR_5,
        struct df_ru_bb_info *VAR_6,
        struct df_ref *VAR_7,
        enum df_ref_flags VAR_8)
{
  struct df *VAR_9 = VAR_5->df;
  while (VAR_7)
    {
      if ((VAR_8 == (FUNC_0 (VAR_7) & VAR_0))


   && (!(FUNC_0 (VAR_7) & VAR_1)))
 {
   unsigned int VAR_10 = FUNC_1 (VAR_7);
   unsigned int VAR_11 = FUNC_2 (VAR_9, VAR_10)->begin;
   unsigned int VAR_12 = FUNC_2 (VAR_9, VAR_10)->n_refs;
   if (!FUNC_3 (VAR_3, VAR_10))
     {





       if (!FUNC_3 (VAR_4, VAR_10))
  {
    if (VAR_12 > VAR_2)
      FUNC_5 (VAR_6->sparse_kill, VAR_10);
    else
      {
        struct df_ru_problem_data * VAR_13
   = (struct df_ru_problem_data *)VAR_5->problem_data;
        bitmap VAR_14
   = FUNC_6 (VAR_13->use_sites, VAR_10,
           VAR_11, VAR_12);
        FUNC_4 (VAR_6->kill, VAR_14);
      }
  }
       FUNC_5 (VAR_4, VAR_10);
     }
 }
      VAR_7 = VAR_7->next_ref;
    }
}
