
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omp_region {int type; struct omp_region* next; struct omp_region* inner; int entry; struct omp_region* outer; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int basic_block ;


 struct omp_region* VAR_0 ;
 struct omp_region* FUNC_0 (int,int) ;

struct omp_region *
FUNC_1 (basic_block VAR_1, enum tree_code VAR_2, struct omp_region *VAR_3)
{
  struct omp_region *VAR_4 = FUNC_0 (1, sizeof (*VAR_4));

  VAR_4->outer = VAR_3;
  VAR_4->entry = VAR_1;
  VAR_4->type = VAR_2;

  if (VAR_3)
    {


      VAR_4->next = VAR_3->inner;
      VAR_3->inner = VAR_4;
    }
  else
    {


      VAR_4->next = VAR_0;
      VAR_0 = VAR_4;
    }

  return VAR_4;
}
