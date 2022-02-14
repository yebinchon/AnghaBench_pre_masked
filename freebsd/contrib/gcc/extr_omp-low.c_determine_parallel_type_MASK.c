
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
struct omp_region {scalar_t__ type; int is_combined_parallel; int ws_args; TYPE_1__* inner; int * exit; int * entry; } ;
typedef int * basic_block ;
struct TYPE_2__ {scalar_t__ type; int is_combined_parallel; int * exit; int * entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;

__attribute__((used)) static void
FUNC_9 (struct omp_region *VAR_6)
{
  basic_block VAR_7, VAR_8;
  basic_block VAR_9, VAR_10;

  if (VAR_6 == ((void*)0) || VAR_6->inner == ((void*)0)
      || VAR_6->exit == ((void*)0) || VAR_6->inner->exit == ((void*)0))
    return;


  if (VAR_6->type != VAR_4
      || (VAR_6->inner->type != VAR_3
   && VAR_6->inner->type != VAR_5))
    return;



  VAR_7 = VAR_6->entry;
  VAR_8 = VAR_6->exit;
  VAR_9 = VAR_6->inner->entry;
  VAR_10 = VAR_6->inner->exit;

  if (FUNC_7 (VAR_7) == VAR_9
      && FUNC_7 (VAR_10) == VAR_8
      && FUNC_8 (VAR_7, VAR_9)
      && (FUNC_2 (FUNC_6 (VAR_7))
   || (FUNC_5 (VAR_9)
       && FUNC_5 (VAR_8))))
    {
      tree VAR_11 = FUNC_6 (VAR_9);

      if (VAR_6->inner->type == VAR_3)
 {
   tree VAR_12 = FUNC_1 (VAR_11);
   tree VAR_13 = FUNC_3 (VAR_12, VAR_1);
   if (VAR_13 == ((void*)0)
       || FUNC_0 (VAR_13) == VAR_2
       || FUNC_3 (VAR_12, VAR_0))
     {
       VAR_6->is_combined_parallel = 0;
       VAR_6->inner->is_combined_parallel = 0;
       return;
     }
 }

      VAR_6->is_combined_parallel = 1;
      VAR_6->inner->is_combined_parallel = 1;
      VAR_6->ws_args = FUNC_4 (VAR_11);
    }
}
