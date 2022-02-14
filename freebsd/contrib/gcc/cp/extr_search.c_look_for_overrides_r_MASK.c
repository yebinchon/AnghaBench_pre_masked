
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int DECL_VIRTUAL_P ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_5 (tree VAR_0, tree VAR_1)
{
  tree VAR_2 = FUNC_4 (VAR_0, VAR_1);
  if (VAR_2)
    {
      if (FUNC_0 (VAR_1))
 {


   FUNC_2 ("%q+#D cannot be declared", VAR_1);
   FUNC_2 ("  since %q+#D declared in base class", VAR_2);
 }
      else
 {

   DECL_VIRTUAL_P (VAR_3) = 1;
   FUNC_1 (VAR_3, VAR_2);
 }
      return 1;
    }


  return FUNC_3 (VAR_0, VAR_1);
}
