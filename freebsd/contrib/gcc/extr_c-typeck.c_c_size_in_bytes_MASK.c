
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int) ;
 int VAR_6 ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_7)
{
  enum tree_code VAR_8 = FUNC_1 (VAR_7);

  if (VAR_8 == VAR_3 || VAR_8 == VAR_4 || VAR_8 == VAR_2)
    return VAR_6;

  if (!FUNC_0 (VAR_7))
    {
      FUNC_4 ("arithmetic on pointer to an incomplete type");
      return VAR_6;
    }


  return FUNC_5 (VAR_1, FUNC_3 (VAR_7),
       FUNC_6 (FUNC_2 (VAR_5)
          / VAR_0));
}
