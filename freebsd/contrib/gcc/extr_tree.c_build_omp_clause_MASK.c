
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct tree_omp_clause {int dummy; } ;
typedef enum omp_clause_code { ____Placeholder_omp_clause_code } omp_clause_code ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;

tree
FUNC_4 (enum omp_clause_code VAR_5)
{
  tree VAR_6;
  int VAR_7, VAR_8;

  VAR_8 = VAR_2[VAR_5];
  VAR_7 = (sizeof (struct tree_omp_clause) + (VAR_8 - 1) * sizeof (tree));

  VAR_6 = FUNC_2 (VAR_7);
  FUNC_3 (VAR_6, 0, VAR_7);
  FUNC_1 (VAR_6, VAR_0);
  FUNC_0 (VAR_6, VAR_5);






  return VAR_6;
}
