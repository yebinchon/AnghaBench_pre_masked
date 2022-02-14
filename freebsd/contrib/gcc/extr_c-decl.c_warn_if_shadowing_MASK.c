
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct c_binding {scalar_t__ decl; int invisible; struct c_binding* shadowed; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 struct c_binding* FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_8 (tree VAR_5)
{
  struct c_binding *VAR_6;


  if (!VAR_4

      || FUNC_3 (VAR_5)

      || FUNC_2 (VAR_5))
    return;


  for (VAR_6 = FUNC_5 (FUNC_4 (VAR_5)); VAR_6; VAR_6 = VAR_6->shadowed)
    if (VAR_6->decl && VAR_6->decl != VAR_5 && !VAR_6->invisible)
      {
 tree VAR_7 = VAR_6->decl;

 if (VAR_7 == VAR_3)
   {
     FUNC_7 (VAR_1, "declaration of %q+D shadows previous "
       "non-variable", VAR_5);
     break;
   }
 else if (FUNC_6 (VAR_7) == VAR_2)
   FUNC_7 (VAR_1, "declaration of %q+D shadows a parameter",
     VAR_5);
 else if (FUNC_1 (VAR_7))
   FUNC_7 (VAR_1, "declaration of %q+D shadows a global "
     "declaration", VAR_5);
 else if (FUNC_6 (VAR_7) == VAR_0
   && FUNC_0 (VAR_7))
   {
     FUNC_7 (VAR_1, "declaration of %q+D shadows "
       "a built-in function", VAR_5);
     break;
   }
 else
   FUNC_7 (VAR_1, "declaration of %q+D shadows a previous local",
     VAR_5);

 FUNC_7 (VAR_1, "%Jshadowed declaration is here", VAR_7);

 break;
      }
}
