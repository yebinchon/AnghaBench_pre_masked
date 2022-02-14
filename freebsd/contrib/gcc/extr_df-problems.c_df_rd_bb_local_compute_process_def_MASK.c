
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct df_ref {struct df_ref* next_ref; } ;
struct df_rd_problem_data {int def_sites; } ;
struct df_rd_bb_info {int gen; int kill; int sparse_kill; } ;
struct df {int dummy; } ;
struct dataflow {scalar_t__ problem_data; struct df* df; } ;
typedef enum df_ref_flags { ____Placeholder_df_ref_flags } df_ref_flags ;
typedef int bitmap ;
struct TYPE_2__ {unsigned int begin; unsigned int n_refs; } ;


 int VAR_0 ;
 int FUNC_0 (struct df_ref*) ;
 unsigned int FUNC_1 (struct df_ref*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (struct df_ref*) ;
 TYPE_1__* FUNC_3 (struct df*,unsigned int) ;
 unsigned int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,unsigned int) ;
 int FUNC_6 (int ,unsigned int,unsigned int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ,unsigned int,unsigned int,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10 (struct dataflow *VAR_7,
        struct df_rd_bb_info *VAR_8,
        struct df_ref *VAR_9,
        enum df_ref_flags VAR_10)
{
  struct df *VAR_11 = VAR_7->df;
  while (VAR_9)
    {
      if (VAR_10 == (FUNC_0 (VAR_9) & VAR_0))
 {
   unsigned int VAR_12 = FUNC_2 (VAR_9);
   unsigned int VAR_13 = FUNC_3 (VAR_11, VAR_12)->begin;
   unsigned int VAR_14 = FUNC_3 (VAR_11, VAR_12)->n_refs;



   if (!FUNC_5 (VAR_5, VAR_12))
     {


       if ((!FUNC_5 (VAR_6, VAR_12))


    && (!((FUNC_0 (VAR_9) & VAR_3)
    || (FUNC_0 (VAR_9) & VAR_1))))
  {
    if (VAR_14 > VAR_4)
      {
        FUNC_8 (VAR_8->sparse_kill, VAR_12);
        FUNC_6(VAR_8->gen, VAR_13, VAR_14);
      }
    else
      {
        struct df_rd_problem_data * VAR_15
   = (struct df_rd_problem_data *)VAR_7->problem_data;
        bitmap VAR_16 = FUNC_9 (VAR_15->def_sites,
         VAR_12, VAR_13, VAR_14);
        FUNC_7 (VAR_8->kill, VAR_16);
        FUNC_4 (VAR_8->gen, VAR_16);
      }
  }

       FUNC_8 (VAR_6, VAR_12);


       if (!(FUNC_0 (VAR_9)
       & (VAR_2 | VAR_1)))
  FUNC_8 (VAR_8->gen, FUNC_1 (VAR_9));
     }
 }
      VAR_9 = VAR_9->next_ref;
    }
}
