
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int ) ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 scalar_t__ FUNC_18 () ;

__attribute__((used)) static const char *
FUNC_19 (tree VAR_5, tree VAR_6)
{
  if (FUNC_13 (VAR_5) == VAR_3)
    {



      if (FUNC_16 (FUNC_14 (VAR_5), FUNC_14 (VAR_6)))
 return ((void*)0);
      else
 return "redefinition of %q#D";
    }
  else if (FUNC_13 (VAR_5) == VAR_0)
    {



      if (FUNC_6 (VAR_6) && FUNC_9 (VAR_6)
   && FUNC_5 (VAR_6) == VAR_1)
 return ((void*)0);



      if (FUNC_8 (VAR_6)
   && FUNC_3 (VAR_6) != FUNC_3 (VAR_5)
   && ! FUNC_15 (VAR_6, VAR_5))
 return "%qD conflicts with used function";





      if (FUNC_5 (VAR_6) != VAR_1
   && FUNC_5 (VAR_5) != VAR_1)
 {
   if (FUNC_7 (VAR_6) == VAR_1)
     return "%q#D not declared in class";
   else
     return "redefinition of %q#D";
 }
      return ((void*)0);
    }
  else if (FUNC_13 (VAR_5) == VAR_2)
    {
      tree VAR_7, VAR_8;

      if (FUNC_13 (FUNC_11 (VAR_5)) == VAR_3)
 {
   if (FUNC_0 (FUNC_14 (VAR_5))
       && FUNC_0 (FUNC_14 (VAR_6)))
     return "redefinition of %q#D";
   return ((void*)0);
 }

      if (FUNC_13 (FUNC_11 (VAR_5)) != VAR_0
   || (FUNC_11 (VAR_5)
       == FUNC_11 (VAR_6)))
 return ((void*)0);

      VAR_7 = FUNC_11 (VAR_5);
      if (FUNC_10 (VAR_7))
 VAR_7 = FUNC_11 (FUNC_17 (VAR_7));
      VAR_8 = FUNC_11 (VAR_6);
      if (FUNC_10 (VAR_8))
 VAR_8 = FUNC_11 (FUNC_17 (VAR_8));
      if (FUNC_5 (VAR_7) && FUNC_5 (VAR_8))
 return "redefinition of %q#D";

      return ((void*)0);
    }
  else if (FUNC_13 (VAR_5) == VAR_4
    && FUNC_12 (VAR_5) != FUNC_12 (VAR_6)
    && (! FUNC_6 (VAR_6)
        || ! FUNC_1 (VAR_6)
        || FUNC_12 (VAR_5)))
    {


      if (FUNC_12 (VAR_5))
 return "thread-local declaration of %q#D follows "
        "non-thread-local declaration";
      else
 return "non-thread-local declaration of %q#D follows "
        "thread-local declaration";
    }
  else if (FUNC_18 () || FUNC_8 (VAR_5))
    {
      if (FUNC_2 (VAR_5)
   || FUNC_2 (VAR_6))
 return "redeclaration of %q#D";







      if (FUNC_4 (VAR_5) || FUNC_4 (VAR_6))
 return ((void*)0);

      return "redefinition of %q#D";
    }
  else
    {



      if (!(FUNC_4 (VAR_5) && FUNC_4 (VAR_6)))
 return "redeclaration of %q#D";
      return ((void*)0);
    }
}
