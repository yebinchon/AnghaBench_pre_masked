
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct omp_for_data {int cond_code; int v; int * n2; int * n1; int for_stmt; int * step; } ;
struct omp_context {int dummy; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int **) ;
 int VAR_5 ;
 int * FUNC_4 (int,int ,int ,int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int **) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int **,struct omp_context*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_10 (struct omp_for_data *VAR_7, tree *VAR_8,
      tree *VAR_9, struct omp_context *VAR_10)
{
  tree VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  enum tree_code VAR_16;

  VAR_16 = VAR_7->cond_code;
  VAR_16 = VAR_16 == VAR_3 ? VAR_1 : VAR_2;



  if (FUNC_7 (VAR_7->step, 0))
    {
      HOST_WIDE_INT VAR_17 = FUNC_1 (VAR_7->step);
      if (VAR_17 == 1 || VAR_17 == -1)
 VAR_16 = VAR_0;
    }

  VAR_12 = FUNC_4 (VAR_16, VAR_5, VAR_7->v, VAR_7->n2);

  VAR_11 = FUNC_0 (VAR_7->for_stmt);
  VAR_13 = ((void*)0);
  FUNC_9 (VAR_11, VAR_12, &VAR_13, VAR_10);
  if (VAR_13 != ((void*)0))
    {
      FUNC_3 (VAR_13, VAR_9);


      VAR_14 = VAR_7->n1;
      if (VAR_16 == VAR_0
   && FUNC_7 (VAR_7->n2, 0)
   && ! FUNC_8 (VAR_7->n2))
 VAR_14 = FUNC_5 (FUNC_2 (VAR_7->v), 0);



      VAR_15 = FUNC_4 (VAR_4, VAR_6, VAR_7->v, VAR_14);
      FUNC_6 (VAR_15, VAR_8);
    }
}
