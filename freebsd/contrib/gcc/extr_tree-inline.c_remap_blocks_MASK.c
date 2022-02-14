
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int copy_body_data ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int **,int *) ;

__attribute__((used)) static tree
FUNC_5 (tree VAR_0, copy_body_data *VAR_1)
{
  tree VAR_2;
  tree VAR_3 = VAR_0;

  if (!VAR_0)
    return ((void*)0);

  FUNC_4 (&VAR_3, VAR_1);
  FUNC_3 (VAR_3 != VAR_0);
  for (VAR_2 = FUNC_1 (VAR_0); VAR_2 ; VAR_2 = FUNC_0 (VAR_2))
    FUNC_2 (VAR_3, FUNC_5 (VAR_2, VAR_1));
  return VAR_3;
}
