
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * tree ;
struct ivopts_data {int dummy; } ;
struct iv_use {int ** op_p; } ;
struct iv_cand {int iv; } ;
typedef int * bitmap ;
struct TYPE_2__ {int * base; int step; } ;


 unsigned int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 struct ivopts_data* VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (struct ivopts_data*,int *,int **) ;
 unsigned int FUNC_3 (struct ivopts_data*,struct iv_use*,struct iv_cand*,int,int **) ;
 TYPE_1__* FUNC_4 (struct ivopts_data*,int *) ;
 scalar_t__ FUNC_5 (struct ivopts_data*,struct iv_use*,struct iv_cand*,int **) ;
 int FUNC_6 (struct ivopts_data*,struct iv_use*,struct iv_cand*,unsigned int,int *,int *) ;
 int FUNC_7 (int **,int ,int **,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9 (struct ivopts_data *VAR_5,
     struct iv_use *VAR_6, struct iv_cand *VAR_7)
{
  tree VAR_8 = VAR_1, VAR_9, VAR_10;
  bitmap VAR_11 = ((void*)0);
  unsigned VAR_12;


  if (!VAR_7->iv)
    {
      FUNC_6 (VAR_5, VAR_6, VAR_7, VAR_0, ((void*)0), VAR_1);
      return 0;
    }

  if (FUNC_5 (VAR_5, VAR_6, VAR_7, &VAR_8))
    {
      VAR_12 = FUNC_2 (VAR_5, VAR_8, &VAR_11);

      FUNC_6 (VAR_5, VAR_6, VAR_7, VAR_12, VAR_11, VAR_8);
      return VAR_12 != VAR_0;
    }




  VAR_12 = FUNC_3 (VAR_5, VAR_6, VAR_7, 0, &VAR_11);

  VAR_10 = *VAR_6->op_p;
  if (FUNC_0 (VAR_10) != VAR_2)
    {
      VAR_9 = FUNC_1 (VAR_10, 0);
      if (FUNC_0 (VAR_9) == VAR_2 && !FUNC_8 (FUNC_4 (VAR_5, VAR_9)->step))
 VAR_9 = FUNC_1 (VAR_10, 1);
      if (FUNC_0 (VAR_9) == VAR_2)
 {
   VAR_9 = FUNC_4 (VAR_5, VAR_9)->base;
   VAR_3 = VAR_5;
   FUNC_7 (&VAR_9, VAR_4, &VAR_11, ((void*)0));
 }
    }

  FUNC_6 (VAR_5, VAR_6, VAR_7, VAR_12, VAR_11, ((void*)0));
  return VAR_12 != VAR_0;
}
