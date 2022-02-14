
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4 (tree VAR_0, tree VAR_1, tree VAR_2)
{
  tree VAR_3 = FUNC_2 (VAR_0);

  if (!FUNC_0 (VAR_3))
    {
      const char *VAR_4;

      if (FUNC_1 (VAR_3) && VAR_2)
   VAR_4 = "initialization of volatile reference type %q#T from"
     " rvalue of type %qT";
      else if (FUNC_1 (VAR_3))
   VAR_4 = "conversion to volatile reference type %q#T "
     " from rvalue of type %qT";
      else if (VAR_2)
   VAR_4 = "initialization of non-const reference type %q#T from"
     " rvalue of type %qT";
      else
   VAR_4 = "conversion to non-const reference type %q#T from"
     " rvalue of type %qT";

      FUNC_3 (VAR_4, VAR_0, VAR_1);
    }
}
