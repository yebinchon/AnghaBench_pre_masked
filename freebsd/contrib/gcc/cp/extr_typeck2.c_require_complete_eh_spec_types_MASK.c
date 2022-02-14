
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;

void
FUNC_6 (tree VAR_0, tree VAR_1)
{
  tree VAR_2;

  if (VAR_1 && FUNC_1 (VAR_1))
    return;
  for (VAR_2 = FUNC_4 (VAR_0); VAR_2;
       VAR_2 = FUNC_2 (VAR_2))
    {
      tree VAR_3 = FUNC_3 (VAR_2);
      if (VAR_3 && !FUNC_0 (VAR_3))
 {
   if (VAR_1)
     FUNC_5
       ("call to function %qD which throws incomplete type %q#T",
        VAR_1, VAR_3);
   else
     FUNC_5 ("call to function which throws incomplete type %q#T",
     VAR_1);
 }
    }
}
