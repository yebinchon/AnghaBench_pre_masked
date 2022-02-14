
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static bool
FUNC_8 (tree VAR_4, int VAR_5)
{
  bool VAR_6 = (FUNC_2 (VAR_4) == VAR_1
     && FUNC_2 (FUNC_3 (VAR_4)) == VAR_2
     && FUNC_4 (FUNC_3 (VAR_4)));

  if (VAR_5)
    {
      if (FUNC_2 (VAR_4) == VAR_3
   && FUNC_2 (FUNC_3 (VAR_4)) == VAR_2
   && FUNC_4 (FUNC_3 (VAR_4)))
 {

   FUNC_5 ("type %qT is disallowed in Java %<throw%> or %<catch%>",
   VAR_4);
 }

      if (VAR_6)
 {
   tree VAR_7
     = FUNC_1 (FUNC_7 ("jthrowable"));

   if (VAR_7 == VAR_0)
     FUNC_6
       ("call to Java %<catch%> or %<throw%> with %<jthrowable%> undefined");

   VAR_7 = FUNC_3 (FUNC_3 (VAR_7));

   if (! FUNC_0 (VAR_7, FUNC_3 (VAR_4)))
     {

       FUNC_5 ("type %qT is not derived from %<java::lang::Throwable%>",
       FUNC_3 (VAR_4));
     }
 }
    }

  return VAR_6;
}
