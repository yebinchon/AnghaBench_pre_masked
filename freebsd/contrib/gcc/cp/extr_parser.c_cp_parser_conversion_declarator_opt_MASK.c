
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int cp_parser ;
typedef int cp_declarator ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*,int *) ;
 int * FUNC_3 (int ,int *) ;
 int * FUNC_4 (int ,scalar_t__,int *) ;
 int * FUNC_5 (int ,int *) ;

__attribute__((used)) static cp_declarator *
FUNC_6 (cp_parser* VAR_1)
{
  enum tree_code VAR_2;
  tree VAR_3;
  cp_cv_quals VAR_4;


  FUNC_1 (VAR_1);

  VAR_2 = FUNC_2 (VAR_1, &VAR_3, &VAR_4);

  if (FUNC_0 (VAR_1))
    {
      cp_declarator *VAR_5;


      VAR_5 = FUNC_6 (VAR_1);


      if (VAR_3)
 VAR_5 = FUNC_4 (VAR_4, VAR_3,
          VAR_5);
      else if (VAR_2 == VAR_0)
 VAR_5 = FUNC_3 (VAR_4, VAR_5);
      else
 VAR_5 = FUNC_5 (VAR_4, VAR_5);

      return VAR_5;
   }

  return ((void*)0);
}
