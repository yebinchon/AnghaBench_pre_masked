
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_5__ {scalar_t__ scope; } ;
typedef TYPE_1__ cp_parser ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ VAR_5 ;
 int FUNC_13 () ;
 int FUNC_14 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_15 (cp_parser *VAR_7, tree VAR_8, tree VAR_9)
{
  tree VAR_10, VAR_11;

  VAR_11 = VAR_7->scope;
  VAR_7->scope = VAR_8;
  VAR_10 = FUNC_10 (VAR_7, VAR_9);
  VAR_7->scope = VAR_11;


  if (FUNC_5 (VAR_10) == VAR_2)
    FUNC_12 ("invalid use of template-name %qE without an argument list", VAR_10);
  else if (FUNC_5 (VAR_9) == VAR_0)
    FUNC_12 ("invalid use of destructor %qD as a type", VAR_9);
  else if (FUNC_5 (VAR_10) == VAR_3)

    FUNC_12 ("invalid combination of multiple type-specifiers");
  else if (!VAR_7->scope)
    {

      FUNC_12 ("%qE does not name a type", VAR_9);







      if (VAR_6 && VAR_4
   && FUNC_6 (VAR_4))
 {
   tree VAR_12;

   for (VAR_12 = FUNC_4 (FUNC_6 (VAR_4));
        VAR_12;
        VAR_12 = FUNC_4 (VAR_12))
     {
       tree VAR_13 = FUNC_0 (VAR_12);
       if (FUNC_2 (VAR_13)
    && FUNC_11 (VAR_13))
  {
    tree VAR_14;



    VAR_13 = FUNC_1 (VAR_13);
    for (VAR_14 = FUNC_7 (VAR_13);
         VAR_14;
         VAR_14 = FUNC_4 (VAR_14))
      if (FUNC_5 (VAR_14) == VAR_3
   && FUNC_3 (VAR_14) == VAR_9)
        {
   FUNC_14 ("(perhaps %<typename %T::%E%> was intended)",
    FUNC_0 (VAR_12), VAR_9);
   break;
        }
    if (VAR_14)
      break;
  }
     }
 }
    }


  else if (VAR_7->scope != VAR_5)
    {
      if (FUNC_5 (VAR_7->scope) == VAR_1)
 FUNC_12 ("%qE in namespace %qE does not name a type",
        VAR_9, VAR_7->scope);
      else if (FUNC_8 (VAR_7->scope))
 FUNC_12 ("%qE in class %qT does not name a type", VAR_9, VAR_7->scope);
      else
 FUNC_13 ();
    }
  FUNC_9 (VAR_7);
}
