
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
struct sra_elt {scalar_t__ use_block_copy; } ;
typedef int block_stmt_iterator ;


 int FUNC_0 (int *,int **) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sra_elt*,int,int ,int **) ;
 int FUNC_4 (struct sra_elt*,int *,int **) ;
 int FUNC_5 (struct sra_elt*) ;
 int FUNC_6 (struct sra_elt*,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (struct sra_elt *VAR_0, tree VAR_1, block_stmt_iterator *VAR_2)
{
  bool VAR_3 = 1;
  tree VAR_4 = ((void*)0);


  if (VAR_1)
    {

      VAR_1 = FUNC_10 (VAR_1);
      VAR_3 = FUNC_4 (VAR_0, VAR_1, &VAR_4);
    }



  FUNC_6 (VAR_0, &VAR_4);

  if (!VAR_3)
    {






      tree VAR_5 = ((void*)0);
      FUNC_3 (VAR_0, 1, FUNC_5 (VAR_0),
      &VAR_5);
      FUNC_0 (VAR_4, &VAR_5);
      VAR_4 = VAR_5;
    }

  if (VAR_0->use_block_copy || !VAR_3)
    {



      if (VAR_4)
 {
   FUNC_7 (VAR_4);
   FUNC_8 (VAR_2, VAR_4);
 }
    }
  else
    {


      FUNC_2 (VAR_4);
      FUNC_7 (FUNC_1 (*VAR_2));
      FUNC_7 (VAR_4);
      FUNC_9 (VAR_2, VAR_4);
    }
}
