
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

tree
FUNC_3 (tree VAR_2)
{
  if (VAR_1)
    {
      FUNC_1 ("there are no arguments to %qD that depend on a template "
        "parameter, so a declaration of %qD must be available",
        VAR_2, VAR_2);

      if (!VAR_0)
 {
   static bool VAR_3;
   if (!VAR_3)
     {
       FUNC_0 ("(if you use %<-fpermissive%>, G++ will accept your "
       "code, but allowing the use of an undeclared name is "
       "deprecated)");
       VAR_3 = 1;
     }
 }
      return VAR_2;
    }

  return FUNC_2 (VAR_2);
}
