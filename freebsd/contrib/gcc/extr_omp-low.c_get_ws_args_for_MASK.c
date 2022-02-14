
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * tree ;
struct omp_for_data {scalar_t__ n1; scalar_t__ n2; scalar_t__ step; scalar_t__ chunk_size; } ;
typedef TYPE_1__* basic_block ;
struct TYPE_3__ {int succs; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,struct omp_for_data*) ;
 int * FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 () ;
 int VAR_3 ;
 int * FUNC_7 (int *,int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_5)
{
  tree VAR_6;

  if (FUNC_1 (VAR_5) == VAR_1)
    {
      struct omp_for_data VAR_7;
      tree VAR_8;

      FUNC_4 (VAR_5, &VAR_7);

      VAR_8 = VAR_0;
      if (VAR_7.chunk_size)
 {
   VAR_6 = FUNC_5 (VAR_3, VAR_7.chunk_size);
   VAR_8 = FUNC_7 (((void*)0), VAR_6, VAR_8);
 }

      VAR_6 = FUNC_5 (VAR_3, VAR_7.step);
      VAR_8 = FUNC_7 (((void*)0), VAR_6, VAR_8);

      VAR_6 = FUNC_5 (VAR_3, VAR_7.n2);
      VAR_8 = FUNC_7 (((void*)0), VAR_6, VAR_8);

      VAR_6 = FUNC_5 (VAR_3, VAR_7.n1);
      VAR_8 = FUNC_7 (((void*)0), VAR_6, VAR_8);

      return VAR_8;
    }
  else if (FUNC_1 (VAR_5) == VAR_2)
    {
      basic_block VAR_9 = FUNC_2 (VAR_5);
      VAR_6 = FUNC_3 (VAR_4, FUNC_0 (VAR_9->succs));
      VAR_6 = FUNC_7 (((void*)0), VAR_6, ((void*)0));
      return VAR_6;
    }

  FUNC_6 ();
}
