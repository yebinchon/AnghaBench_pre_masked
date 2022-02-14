
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_binding {int decl; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ FUNC_0 (struct c_binding*) ;
 scalar_t__ FUNC_1 (struct c_binding*) ;
 struct c_binding* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static tree
FUNC_5 (enum tree_code VAR_5, tree VAR_6, int VAR_7)
{
  struct c_binding *VAR_8 = FUNC_2 (VAR_6);
  int VAR_9 = 0;

  if (!VAR_8 || !VAR_8->decl)
    return 0;



  if (VAR_7 || FUNC_3 (VAR_8->decl) != VAR_5)
    {




      if (FUNC_0 (VAR_8)
   || (VAR_0 == VAR_1 && FUNC_1 (VAR_8)))
 VAR_9 = 1;
    }

  if (VAR_7 && !VAR_9)
    return 0;

  if (FUNC_3 (VAR_8->decl) != VAR_5)
    {

      VAR_3 = VAR_6;
      VAR_4 = VAR_2;





      if (VAR_9)
 FUNC_4 ();
    }
  return VAR_8->decl;
}
