
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
struct TYPE_7__ {int lexer; } ;
typedef TYPE_1__ cp_parser ;
typedef int cp_declarator ;
typedef int cp_cv_quals ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*,int *) ;
 int * FUNC_5 (int ,int *) ;
 int * FUNC_6 (int ,scalar_t__,int *) ;
 int * FUNC_7 (int ,int *) ;

__attribute__((used)) static cp_declarator *
FUNC_8 (cp_parser* VAR_2)
{
  enum tree_code VAR_3;
  tree VAR_4;
  cp_cv_quals VAR_5;


  FUNC_3 (VAR_2);

  VAR_3 = FUNC_4 (VAR_2, &VAR_4, &VAR_5);

  if (FUNC_2 (VAR_2))
    {
      cp_declarator *VAR_6;


      VAR_6 = FUNC_8 (VAR_2);


      if (VAR_4)
 VAR_6 = FUNC_6 (VAR_5, VAR_4, VAR_6);
      else if (VAR_3 == VAR_1)
 VAR_6 = FUNC_5 (VAR_5, VAR_6);
      else
 VAR_6 = FUNC_7 (VAR_5, VAR_6);

      return VAR_6;
    }


  if (FUNC_0 (VAR_2->lexer, VAR_0))
    return FUNC_1 (VAR_2);

  return ((void*)0);
}
