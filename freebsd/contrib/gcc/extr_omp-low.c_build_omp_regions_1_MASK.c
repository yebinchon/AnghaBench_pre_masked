
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct omp_region {scalar_t__ type; void* cont; struct omp_region* outer; void* exit; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int block_stmt_iterator ;
typedef void* basic_block ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct omp_region*) ;
 void* FUNC_6 (int ,void*) ;
 int FUNC_7 (struct omp_region*) ;
 struct omp_region* FUNC_8 (void*,int,struct omp_region*) ;
 void* FUNC_9 (int ,void*) ;

__attribute__((used)) static void
FUNC_10 (basic_block VAR_4, struct omp_region *VAR_5)
{
  block_stmt_iterator VAR_6;
  tree VAR_7;
  basic_block VAR_8;

  VAR_6 = FUNC_3 (VAR_4);
  if (!FUNC_2 (VAR_6) && FUNC_0 (FUNC_4 (VAR_6)))
    {
      struct omp_region *VAR_9;
      enum tree_code VAR_10;

      VAR_7 = FUNC_4 (VAR_6);
      VAR_10 = FUNC_1 (VAR_7);

      if (VAR_10 == VAR_3)
 {



   FUNC_7 (VAR_5);
   VAR_9 = VAR_5;
   VAR_9->exit = VAR_4;
   VAR_5 = VAR_5->outer;



   if (VAR_9->type == VAR_2)
     FUNC_5 (VAR_9);
 }
      else if (VAR_10 == VAR_1)
 {
   FUNC_7 (VAR_5);
   VAR_5->cont = VAR_4;
 }
      else
 {


   VAR_9 = FUNC_8 (VAR_4, VAR_10, VAR_5);
   VAR_5 = VAR_9;
 }
    }

  for (VAR_8 = FUNC_6 (VAR_0, VAR_4);
       VAR_8;
       VAR_8 = FUNC_9 (VAR_0, VAR_8))
    FUNC_10 (VAR_8, VAR_5);
}
